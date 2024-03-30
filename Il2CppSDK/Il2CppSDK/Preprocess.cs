using dnlib.DotNet;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace Il2CppSDK
{
    public class TypeInfo
    {
        public TypeDef ownTypeDef;

        public string cppTypeName;
        public string cppNamespace;

        // Type's full name without templates
        public string CppFullyQualifiedName {
            get {
                if (cppNamespace.Length == 0)
                    return cppTypeName;
                else
                    return cppNamespace + "::" + cppTypeName;
            }
        }

        // Header file location inside the current assembly directory
        public string TypeHeaderFileRelativeLocation
        {
            get
            {
                string loc = "";
                if (cppNamespace.Length != 0)
                    loc += cppNamespace + "/";
                loc += cppTypeName + ".h";

                return loc;
            }
        }

        public HashSet<TypeDef> referencedTypes;
        public HashSet<TypeSig> referencedTypeSigs; // for types that we did not find a TypeDef for

        public TypeInfo() {
            ownTypeDef = null;
            cppTypeName = "";
            cppNamespace = "";

            referencedTypes = new HashSet<TypeDef>();
            referencedTypeSigs = new HashSet<TypeSig>();
        }
    }

    public class GenericMethodInfo {
        public string genericMethodName;
        public string genericMethodClassName;
        public string genericMethodSignature;

        public List<string> classTemplateArgs; // class templates as C++ types
        public List<string> methodTemplateArgs; // method template args as C++ types
        public ulong genericMethodAddr;

        public HashSet<TypeDef> referencedTypeDefs;
        public HashSet<TypeSig> referencedTypeSigs;

        public GenericMethodInfo()
        {
            classTemplateArgs = new();
            methodTemplateArgs = new();
            referencedTypeDefs = new();
            referencedTypeSigs = new();
        }

        public void AddReferences(HashSet<TypeDef> refdTypeDefs, HashSet<TypeSig> refdTypeSigs)
        {
            referencedTypeDefs.Union(refdTypeDefs);
            referencedTypeSigs.Union(refdTypeSigs);
        }
    }

    public class TypeConversionResult
    {
        public string cppType;
        public HashSet<TypeDef> referencedTypeDefs;
        public HashSet<TypeSig> referencedTypeSigs;

        public TypeConversionResult()
        {
            referencedTypeDefs = new HashSet<TypeDef>();
            referencedTypeSigs = new HashSet<TypeSig>();
        }
    }

    internal class Preprocess
    {
        public static Dictionary<TypeDef, TypeInfo> processedTypeDefs = new();
        public static Dictionary<TypeSig, TypeInfo> processedAllTypeSigs = new(); // type sigs for types that can be in either this assembly or another
        public static Dictionary<TypeDef, List<TypeSpec>> genericTypeInstantiations = new();
        public static Dictionary<TypeDef, Dictionary<string, List<GenericMethodInfo>>> genericMethodsForClasses = new(); // only holds our current assembly generic methods, thats why we use typedefs

        static ModuleDefMD currentModule = null;

        public static void InitializeTypeInfoStructs()
        {
            foreach (uint typeId in currentModule.Metadata.GetTypeDefRidList())
            {
                TypeDef def = currentModule.ResolveTypeDef(typeId);
                if (def == null) continue;

                processedTypeDefs[def] = new TypeInfo();
                processedTypeDefs[def].ownTypeDef = def;
            }
        }

        // processes & formats namespace, type name and
        public static void FormatNamesForTypeDefs()
        {
            foreach (uint typeId in currentModule.Metadata.GetTypeDefRidList())
            {
                TypeDef def = currentModule.ResolveTypeDef(typeId);
                if (def == null) continue;

                processedTypeDefs[def].cppTypeName = Helpers.FormatClassname(def.Name);
                processedTypeDefs[def].cppNamespace = Helpers.ParseNamespaceForType(def.Namespace, def.FullName);
            }
        }

        // formats the names for assembly types that aren't included in this assembly, but are referenced
        public static void FormatNamesForOtherAssemblyTypes()
        {
            List<KeyValuePair<TypeSig, TypeInfo>> kvPairsList = [.. processedAllTypeSigs]; // separate list since we modify the dictionary during loop, thus foreach wont work directly on dict

            foreach (KeyValuePair<TypeSig, TypeInfo> kvpair in kvPairsList)
            {
                TypeSig sig = kvpair.Key;

                processedAllTypeSigs[sig].cppTypeName = Helpers.FormatClassname(sig.TypeName);
                processedAllTypeSigs[sig].cppNamespace = Helpers.ParseNamespaceForType(sig.Namespace, sig.FullName);

                if(sig.IsGenericInstanceType)
                {
                    foreach(TypeSig genericSig in sig.ToGenericInstSig().GenericArguments)
                    {
                        if (processedAllTypeSigs.ContainsKey(genericSig)) continue;

                        processedAllTypeSigs[genericSig] = new TypeInfo();
                        processedAllTypeSigs[genericSig].cppTypeName = Helpers.FormatClassname(genericSig.TypeName);
                        processedAllTypeSigs[genericSig].cppNamespace = Helpers.ParseNamespaceForType(genericSig.Namespace, genericSig.FullName);
                    }
                }

                // nested types
                TypeSig nextSig = sig.GetNext();
                while (nextSig != null)
                {
                    if(!processedAllTypeSigs.ContainsKey(nextSig))
                    {
                        processedAllTypeSigs[nextSig] = new TypeInfo();
                        processedAllTypeSigs[nextSig].cppTypeName = Helpers.FormatClassname(nextSig.TypeName);
                        processedAllTypeSigs[nextSig].cppNamespace = Helpers.ParseNamespaceForType(nextSig.Namespace, nextSig.FullName);
                    }

                    nextSig = nextSig.GetNext();
                }
            }
        }

        public static void AddReferenceForType(TypeInfo typeInfo, TypeSig typeSig, string mainTypeName)
        {
            if (typeSig == null) return;
            TypeDef typeDef = typeSig.TryGetTypeDef();
            if (typeInfo.ownTypeDef == typeDef) return; // don't add itself as reference
            if (Helpers.IsCompilerGeneratedType(typeSig.FullName)) // usually a bad sign, as these classes are compiler generated
                return; // dont add them to references
            if (typeSig.GetElementType() == ElementType.SZArray || typeSig.GetElementType() == ElementType.Array)
            { // we don't need to reference the array, but we do need the underlying type
                AddReferenceForType(typeInfo, typeSig.GetNext(), mainTypeName);
                return;
            }
            if (Helpers.IsPrimitiveType(typeSig)) // maybe primitive type has templates to other types that are not primitive
            {
                if (typeSig.IsGenericInstanceType)
                {
                    GenericInstSig generic = typeSig.ToGenericInstSig();
                    foreach (TypeSig arg in generic.GenericArguments)
                        AddReferenceForType(typeInfo, arg, mainTypeName);
                }

                return;
            }

            if (typeDef == null) // no typedef means that this type is defined in another assembly, only referenced here
            {
                typeInfo.referencedTypeSigs.Add(typeSig);

                if(typeSig.DefinitionAssembly.Name != currentModule.Assembly.Name)
                    processedAllTypeSigs[typeSig] = new TypeInfo();

                if(typeSig.IsGenericInstanceType)
                {
                    GenericInstSig generic = typeSig.ToGenericInstSig();
                    foreach(TypeSig arg in generic.GenericArguments)
                        AddReferenceForType(typeInfo, arg, mainTypeName);
                }

            }
            else
            {
                foreach (TypeDef nestedType in typeDef.GetTypes())
                    AddReferenceForType(typeInfo, nestedType.ToTypeSig(), mainTypeName);

                if (typeInfo.ownTypeDef != typeDef)
                    typeInfo.referencedTypes.Add(typeDef);
            }
        }

        // Gets referenced types in class, except for the parent class.
        public static void ProcessTypesReferencedInClasses()
        {
            foreach (uint typeId in currentModule.Metadata.GetTypeDefRidList())
            {
                TypeDef def = currentModule.ResolveTypeDef(typeId);
                if (def == null) continue;

                if (def.BaseType != null && def.BaseType.ToTypeSig() != null && !Helpers.IsPrimitiveType(def.BaseType.ToTypeSig()))
                    AddReferenceForType(processedTypeDefs[def], def.BaseType.ToTypeSig(), def.BaseType.Name);

                foreach(TypeDef nestedType in def.NestedTypes)
                    AddReferenceForType(processedTypeDefs[def], nestedType.ToTypeSig(), nestedType.Name);

                foreach (FieldDef field in def.Fields) 
                    AddReferenceForType(processedTypeDefs[def], field.FieldType, def.Name);

                foreach(MethodDef method in def.Methods)
                {
                    AddReferenceForType(processedTypeDefs[def], method.ReturnType, def.Name);

                    foreach (Parameter param in method.Parameters)
                        AddReferenceForType(processedTypeDefs[def], param.Type, def.Name);
                }
            }

            FormatNamesForOtherAssemblyTypes();
        }

        public static void CacheGenericTypeInstantiations()
        {
            foreach (uint typeId in currentModule.Metadata.GetTypeDefRidList())
            {
                TypeDef def = currentModule.ResolveTypeDef(typeId);
                if (def == null || !def.HasGenericParameters) continue;

                if (!genericTypeInstantiations.ContainsKey(def))
                    genericTypeInstantiations[def] = new List<TypeSpec>();

                for (uint i = 1; i < currentModule.Metadata.TablesStream.TypeSpecTable.Rows; i++)
                {
                    TypeSpec spec = currentModule.ResolveTypeSpec(i);
                    if (spec == null) continue;

                    if (spec.FullName.Contains(def.FullName))
                        genericTypeInstantiations[def].Add(spec);
                }
            }
        }

        public static void CacheAllGenericMethods(ScriptJson jsonData)
        {
            Console.WriteLine("Caching generic methods, this will take a while.");
            List<TypeDef> allTypeDefs = processedTypeDefs.Keys.ToList();
            List<TypeSig> allTypeSigs = processedAllTypeSigs.Keys.ToList();

            Console.WriteLine("");
            for (int i = 0; i < jsonData.ScriptMethod.Count; i++)
            {
                Helpers.ClearConsoleLine();
                Console.WriteLine(string.Format("Methods checked: {0} / {1}", i, jsonData.ScriptMethod.Count));

                ScriptMethod method = jsonData.ScriptMethod[i];

                string[] data = method.Name.Split("$$");
                string classNameWTemplates = data[0];
                string classNameNoTemplates = classNameWTemplates.Split("<", 2)[0]; // TODO: make this work for types where the names are something like System.TypeOne<T>.TypeTwo<
                string methodNameWTemplates = data[1];
                string methodNameNoTemplates = methodNameWTemplates.Split("<", 2)[0];

                if (Helpers.IsCompilerGeneratedType(classNameWTemplates) || Helpers.IsCompilerGeneratedType(methodNameWTemplates)) continue;
                if (!classNameWTemplates.Contains("<") && !methodNameWTemplates.Contains("<")) continue;

                TypeDef classTypeDef = Helpers.FindTypeDefByFullName(classNameWTemplates, allTypeDefs);
                if (classTypeDef == null) continue; // probably in another assembly, or our name search sucked

                if (!genericMethodsForClasses.ContainsKey(classTypeDef)) genericMethodsForClasses[classTypeDef] = new();
                if(methodNameWTemplates.Contains("CheckNotNull"))
                    Debugger.Break();

                GenericMethodInfo methodInfo = new GenericMethodInfo();
                methodInfo.genericMethodName = methodNameNoTemplates;
                methodInfo.genericMethodClassName = classNameNoTemplates;
                methodInfo.genericMethodSignature = method.Signature;
                methodInfo.genericMethodAddr = method.Address;

                // class template args
                string innerMostClassname = classNameWTemplates.Split(".").Last(); // there's a possibility for types like System.TypeOne<T>.TypeTwo<V>, so we'll need to split it by "." and get the very last item so we could get its templates correctly
                if (innerMostClassname.Contains("<"))
                {
                    List<string> classTemplatesCSharp = Helpers.ConvertTemplateArgsToCppType(innerMostClassname);
                    foreach(string template in classTemplatesCSharp)
                    {
                        TypeConversionResult res = Helpers.ConvertCSharpTypeToCpp(template, allTypeDefs, allTypeSigs);
                        methodInfo.classTemplateArgs.Add(res.cppType);
                        methodInfo.AddReferences(res.referencedTypeDefs, res.referencedTypeSigs);
                    }
                }

                string innerMostMethodName = methodNameWTemplates.Split(".").Last();
                if(innerMostMethodName.Contains("<"))
                {
                    List<string> methodTemplatesCSharp = Helpers.ConvertTemplateArgsToCppType(innerMostMethodName);
                    foreach(string template in methodTemplatesCSharp)
                    {
                        TypeConversionResult res = Helpers.ConvertCSharpTypeToCpp(template, allTypeDefs, allTypeSigs);
                        methodInfo.methodTemplateArgs.Add(res.cppType);
                        methodInfo.AddReferences(res.referencedTypeDefs, res.referencedTypeSigs);
                    }
                }

                // choose how to save the method name
                // if it has a template before the actual method name (System.IEnumerable<T>.MethodName), then usually the entire thing gets saved, otherwise only the last part
                string[] methodNameParts = methodNameWTemplates.Split(".");
                bool saveFullName = false;
                for(int j = 0; j < methodNameParts.Length-1; j++)
                {
                    if (methodNameParts[j].Contains("<")) saveFullName = true;
                }

                string saveWithMethodName = saveFullName ? methodNameWTemplates.Replace(innerMostMethodName, innerMostMethodName.Split("<")[0]) : innerMostMethodName.Split("<")[0];
                if (!genericMethodsForClasses[classTypeDef].ContainsKey(saveWithMethodName)) genericMethodsForClasses[classTypeDef][saveWithMethodName] = new();
                genericMethodsForClasses[classTypeDef][saveWithMethodName].Add(methodInfo);
            }
        }

        public static List<TypeSpec> GetGenericTypeInstantiations(TypeDef genericType)
        {
            if (!genericTypeInstantiations.ContainsKey(genericType))
                return new List<TypeSpec>();

            return genericTypeInstantiations[genericType];
        }

        public static string GetHeaderLocationInAssembly(TypeSig typeSig)
        {
            if (typeSig == null) return "";

            TypeDef typeDef = typeSig.TryGetTypeDef();
            if (typeDef != null)
                return processedTypeDefs[typeDef].TypeHeaderFileRelativeLocation;
            else
                return processedAllTypeSigs[typeSig].TypeHeaderFileRelativeLocation;
        }

        // Returns the type name without template arguments nor namespace
        public static string GetProcessedCppTypeNameForType(TypeSig typeSig)
        {
            if (typeSig == null) return "";

            TypeDef typeDef = typeSig.TryGetTypeDef();
            if (typeDef != null)
                return processedTypeDefs[typeDef].cppTypeName;
            else if (processedAllTypeSigs.ContainsKey(typeSig))
                return processedAllTypeSigs[typeSig].cppTypeName;
            else
                return Helpers.FormatClassname(typeSig.TypeName);
        }

        // Returns the namespace that a type is in
        public static string GetProcessedNamespaceForType(TypeSig typeSig)
        {
            if (typeSig == null) return "";

            TypeDef typeDef = typeSig.TryGetTypeDef();
            if (typeDef != null)
                return processedTypeDefs[typeDef].cppNamespace;
            else if (processedAllTypeSigs.ContainsKey(typeSig))
                return processedAllTypeSigs[typeSig].cppNamespace;
            else
                return Helpers.ParseNamespaceForType(typeSig.Namespace, typeSig.FullName);
        }

        // Returns the C++ type name with namespace and name, no template args
        public static string GetFullTypenameForIl2CppType(TypeSig typeSig)
        {
            if (typeSig == null) return "";

            TypeDef typeDef = typeSig.TryGetTypeDef();
            if (typeDef != null)
                return processedTypeDefs[typeDef].CppFullyQualifiedName;
            else if (processedAllTypeSigs.ContainsKey(typeSig))
                return processedAllTypeSigs[typeSig].CppFullyQualifiedName;
            else
            {
                string namespaceAndType = Helpers.ParseNamespaceForType(typeSig.Namespace, typeSig.FullName);
                if (namespaceAndType != "") namespaceAndType += "::";
                namespaceAndType += Helpers.FormatClassname(typeSig.TypeName);
                return namespaceAndType;
            }
        }

        public static void PreprocessModule(ScriptJson jsonData, ModuleDefMD currentModule)
        {
            Preprocess.currentModule = currentModule;
            InitializeTypeInfoStructs();

            FormatNamesForTypeDefs();
            ProcessTypesReferencedInClasses();

            CacheGenericTypeInstantiations();
            CacheAllGenericMethods(jsonData);
        }
    }
}
