using dnlib.DotNet;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
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

    internal class Preprocess
    {
        public static Dictionary<TypeDef, TypeInfo> processedTypeDefs = new Dictionary<TypeDef, TypeInfo>();
        public static Dictionary<TypeSig, TypeInfo> processedDifferentAssemblyTypes = new Dictionary<TypeSig, TypeInfo>();
        public static Dictionary<TypeDef, List<TypeSpec>> genericTypeInstantiations = new Dictionary<TypeDef, List<TypeSpec>>();
        static ModuleDefMD currentModule = null;

        public static void InitializeTypeInfoStructs()
        {
            foreach (uint typeId in currentModule.Metadata.GetTypeDefRidList())
            {
                TypeDef def = currentModule.ResolveTypeDef(typeId);
                if (def == null) continue;

                processedTypeDefs[def] = new TypeInfo();
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
            List<KeyValuePair<TypeSig, TypeInfo>> kvPairsList = [.. processedDifferentAssemblyTypes]; // separate list since we modify the dictionary during loop, thus foreach wont work directly on dict

            foreach (KeyValuePair<TypeSig, TypeInfo> kvpair in kvPairsList)
            {
                TypeSig sig = kvpair.Key;

                processedDifferentAssemblyTypes[sig].cppTypeName = Helpers.FormatClassname(sig.TypeName);
                processedDifferentAssemblyTypes[sig].cppNamespace = Helpers.ParseNamespaceForType(sig.Namespace, sig.FullName);

                if(sig.IsGenericInstanceType)
                {
                    foreach(TypeSig genericSig in sig.ToGenericInstSig().GenericArguments)
                    {
                        if (processedDifferentAssemblyTypes.ContainsKey(genericSig)) continue;

                        processedDifferentAssemblyTypes[genericSig] = new TypeInfo();
                        processedDifferentAssemblyTypes[genericSig].cppTypeName = Helpers.FormatClassname(genericSig.TypeName);
                        processedDifferentAssemblyTypes[genericSig].cppNamespace = Helpers.ParseNamespaceForType(genericSig.Namespace, genericSig.FullName);
                    }
                }

                // nested types
                TypeSig nextSig = sig.GetNext();
                while (nextSig != null)
                {
                    if(!processedDifferentAssemblyTypes.ContainsKey(nextSig))
                    {
                        processedDifferentAssemblyTypes[nextSig] = new TypeInfo();
                        processedDifferentAssemblyTypes[nextSig].cppTypeName = Helpers.FormatClassname(nextSig.TypeName);
                        processedDifferentAssemblyTypes[nextSig].cppNamespace = Helpers.ParseNamespaceForType(nextSig.Namespace, nextSig.FullName);
                    }

                    nextSig = nextSig.GetNext();
                }
            }
        }

        public static void AddReferenceForType(TypeInfo typeInfo, TypeSig typeSig, string mainTypeName)
        {
            if (typeSig == null) return;
            if (typeSig.FullName.Contains("c__") || typeSig.FullName.Contains("d__") || typeSig.FullName.Contains("<>c")) // usually a bad sign, as these classes are compiler generated
                return; // dont add them to references
            if (typeSig.GetElementType() == ElementType.SZArray || typeSig.GetElementType() == ElementType.Array)
            { // we don't need to reference the array, but we do need the underlying type
                AddReferenceForType(typeInfo, typeSig.GetNext(), mainTypeName);
                return;
            }
            if (Helpers.IsPrimitiveType(typeSig))
                return;

            TypeDef typeDef = typeSig.TryGetTypeDef();
            if (typeDef == null) // no typedef means that this type is defined in another assembly, only referenced here
            {
                typeInfo.referencedTypeSigs.Add(typeSig);

                if(typeSig.DefinitionAssembly.Name != currentModule.Assembly.Name)
                    processedDifferentAssemblyTypes[typeSig] = new TypeInfo();

                if(typeSig.IsGenericInstanceType)
                {
                    GenericInstSig generic = typeSig.ToGenericInstSig();
                    foreach(TypeSig arg in generic.GenericArguments)
                        AddReferenceForType(typeInfo, arg, mainTypeName);
                }

            }
            else if (typeInfo.ownTypeDef != typeDef)
            {
                foreach (TypeDef nestedType in typeDef.GetTypes())
                    AddReferenceForType(typeInfo, nestedType.ToTypeSig(), mainTypeName);

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
                {
                    if (Helpers.IsPrimitiveType(field.FieldType)) continue; // primitive types such as int, char, byte etc we don't need to include as header files

                    AddReferenceForType(processedTypeDefs[def], field.FieldType, def.Name);
                }

                foreach(MethodDef method in def.Methods)
                {
                    if (Helpers.IsPrimitiveType(method.ReturnType)) continue; // primitive types such as int, char, byte etc we don't need to include as header files

                    AddReferenceForType(processedTypeDefs[def], method.ReturnType, def.Name);

                    foreach (Parameter param in method.Parameters)
                    {
                        if (Helpers.IsPrimitiveType(param.Type)) continue;

                        AddReferenceForType(processedTypeDefs[def], param.Type, def.Name);
                    }
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
                return processedDifferentAssemblyTypes[typeSig].TypeHeaderFileRelativeLocation;
        }

        // Returns the type name without template arguments nor namespace
        public static string GetProcessedCppTypeNameForType(TypeSig typeSig)
        {
            if (typeSig == null) return "";

            TypeDef typeDef = typeSig.TryGetTypeDef();
            if (typeDef != null)
                return processedTypeDefs[typeDef].cppTypeName;
            else if (processedDifferentAssemblyTypes.ContainsKey(typeSig))
                return processedDifferentAssemblyTypes[typeSig].cppTypeName;
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
            else if (processedDifferentAssemblyTypes.ContainsKey(typeSig))
                return processedDifferentAssemblyTypes[typeSig].cppNamespace;
            else
                return Helpers.ParseNamespaceForType(typeSig.Namespace, typeSig.FullName);
        }

        public static string GetFullTypenameForIl2CppType(TypeSig typeSig)
        {
            if (typeSig == null) return "";

            TypeDef typeDef = typeSig.TryGetTypeDef();
            if (typeDef != null)
                return processedTypeDefs[typeDef].CppFullyQualifiedName;
            else if (processedDifferentAssemblyTypes.ContainsKey(typeSig))
                return processedDifferentAssemblyTypes[typeSig].CppFullyQualifiedName;
            else
            {
                string namespaceAndType = Helpers.ParseNamespaceForType(typeSig.Namespace, typeSig.FullName);
                if (namespaceAndType != "") namespaceAndType += "::";
                namespaceAndType += Helpers.FormatClassname(typeSig.TypeName);
                return namespaceAndType;
            }
        }

        public static void PreprocessModule(ModuleDefMD currentModule)
        {
            Preprocess.currentModule = currentModule;
            InitializeTypeInfoStructs();

            FormatNamesForTypeDefs();
            ProcessTypesReferencedInClasses();
            CacheGenericTypeInstantiations();
        }
    }
}
