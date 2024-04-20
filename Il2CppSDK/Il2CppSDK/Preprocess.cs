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

        static ModuleDefMD currentModule = null;

        public static void InitializeTypeInfoStructs()
        {
            foreach (uint typeId in currentModule.Metadata.GetTypeDefRidList())
            {
                TypeDef def = currentModule.ResolveTypeDef(typeId);
                if (def == null) continue;

                processedTypeDefs[def] = new TypeInfo();
                processedTypeDefs[def].ownTypeDef = def;

                foreach(TypeDef nestedDef in def.NestedTypes)
                {
                    processedTypeDefs[nestedDef] = new TypeInfo();
                    processedTypeDefs[nestedDef].ownTypeDef = nestedDef;
                }
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

        public static void AddReferenceForType(TypeInfo typeInfo, TypeSig typeSig)
        {
            if (typeSig == null) return;
            TypeDef typeDef = typeSig.TryGetTypeDef();
            if (typeInfo.ownTypeDef == typeDef) return; // don't add itself as reference
            if (Helpers.IsCompilerGeneratedType(typeSig.FullName)) // usually a bad sign, as these classes are compiler generated
                return; // dont add them to references
            if (typeSig.GetElementType() == ElementType.SZArray || typeSig.GetElementType() == ElementType.Array)
            { // we don't need to reference the array, but we do need the underlying type
                AddReferenceForType(typeInfo, typeSig.GetNext());
                return;
            }
            if (Helpers.IsPrimitiveType(typeSig)) // maybe primitive type has templates to other types that are not primitive
            {
                if (typeSig.IsGenericInstanceType)
                {
                    GenericInstSig generic = typeSig.ToGenericInstSig();
                    foreach (TypeSig arg in generic.GenericArguments)
                        AddReferenceForType(typeInfo, arg);
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
                        AddReferenceForType(typeInfo, arg);
                }

            }
            else
            {
                foreach (TypeDef nestedType in typeDef.GetTypes())
                    AddReferenceForType(typeInfo, nestedType.ToTypeSig());

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
                    AddReferenceForType(processedTypeDefs[def], def.BaseType.ToTypeSig());

                foreach (InterfaceImpl interfaceImpl in def.Interfaces)
                    AddReferenceForType(processedTypeDefs[def], interfaceImpl.Interface.ToTypeSig());

                foreach(TypeDef nestedType in def.NestedTypes)
                    AddReferenceForType(processedTypeDefs[def], nestedType.ToTypeSig());

                foreach (FieldDef field in def.Fields) 
                    AddReferenceForType(processedTypeDefs[def], field.FieldType);

                foreach(MethodDef method in def.Methods)
                {
                    AddReferenceForType(processedTypeDefs[def], method.ReturnType);

                    foreach (Parameter param in method.Parameters)
                        AddReferenceForType(processedTypeDefs[def], param.Type);
                }
            }

            FormatNamesForOtherAssemblyTypes();
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

        // Returns a list of all non compiler generated the type definitions along with whatever other typedefs they reference
        public static List<TypeDef> GetAllTypesWithReferences()
        {
            HashSet<TypeDef> allTypes = new();

            foreach (uint typeId in currentModule.Metadata.GetTypeDefRidList())
            {
                TypeDef def = currentModule.ResolveTypeDef(typeId);
                if (def == null || Helpers.HasCompilerGeneratedAttribute(def.CustomAttributes)) continue;

                allTypes.Add(def);

                foreach(TypeDef referenced in processedTypeDefs[def].referencedTypes)
                    if(!Helpers.HasCompilerGeneratedAttribute(referenced.CustomAttributes))
                        allTypes.Add(referenced);
            }

            return allTypes.ToList();
        }

        public static void PreprocessModule(ScriptJson jsonData, ModuleDefMD currentModule)
        {
            processedTypeDefs = new();
            processedAllTypeSigs = new();
            genericTypeInstantiations = new();
            Preprocess.currentModule = currentModule;

            InitializeTypeInfoStructs();

            FormatNamesForTypeDefs();
            ProcessTypesReferencedInClasses();

            GenericMethodsPreprocess.SetupGenericMethodSupport(jsonData, GetAllTypesWithReferences());
        }
    }
}
