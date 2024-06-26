﻿using dnlib.DotNet;
using dnlib.IO;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Security.Claims;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;
using static Il2CppSDK.CodeGenHelpers;

namespace Il2CppSDK
{
    internal class CodeGen
    {
        public static ModuleDefMD currentModule = null;
        public static string currentAssemblyDir = "";

        public static void GenerateEnumFromType(TypeDef enumDef)
        {

            //dnlib.DotNet.Extensions.GetPrimitiveSize();

            TypeSig enumTypeSig = enumDef.ToTypeSig();
            string currentHeaderFile = CodeGenHelpers.GetHeaderAbsoluteSavePath(enumTypeSig, Program.OUTPUT_DIR);
            Helpers.CreateFileWithDirectories(currentHeaderFile);

            StreamWriter currentFile = new StreamWriter(currentHeaderFile);

            currentFile.WriteLine("#pragma once");
            currentFile.WriteLine("#include <cstdint>");

            bool useNamespace = Preprocess.GetProcessedNamespaceForType(enumTypeSig).Length > 0;
            if (useNamespace)
                currentFile.WriteLine("namespace " + Preprocess.GetProcessedNamespaceForType(enumTypeSig) + " {");

            currentFile.WriteLine();

            currentFile.Write("enum class " + Preprocess.GetProcessedCppTypeNameForType(enumTypeSig) + " : int64_t ");

            currentFile.WriteLine();
            currentFile.WriteLine("{");
            currentFile.WriteLine();

            for (int i = 1; i < enumDef.Fields.Count; i++)
            {
                FieldDef field = enumDef.Fields[i];
                currentFile.Write(string.Format("\t{0} = {1}", Helpers.FormatClassname(field.Name), Convert.ToInt64(field.Constant.Value)));
                if (i != enumDef.Fields.Count - 1)
                    currentFile.Write(",");

                currentFile.WriteLine();
            }

            currentFile.WriteLine();
            currentFile.WriteLine("};");
            currentFile.WriteLine();

            if (useNamespace)
                currentFile.WriteLine("}");

            currentFile.Close();
        }

        public static void GenerateFieldsForClass(StreamWriter currentFile, TypeDef classDef, string namespaceTab)
        {
            string className = Preprocess.GetProcessedCppTypeNameForType(classDef.ToTypeSig());
            List<FieldDef> regularFields = classDef.Fields.Where(field => !field.IsStatic).ToList();
            List<FieldDef> staticFields = classDef.Fields.Where(field => field.IsStatic).ToList();

            string staticFieldsStructName = className + "_StaticFields";
            foreach (FieldDef field in regularFields)
            {
                TypeSig fieldType = field.FieldType;
                string fieldCppType = CodeGenHelpers.ConvertToFullCppTypename(fieldType);
                string clearedFieldName = "f_" + field.Name.Replace("::", "_").Replace("<", "").Replace(">", "").Replace("k__BackingField", "").Replace(".", "_").Replace("`", "_");

                currentFile.Write(namespaceTab + "\t");
                currentFile.WriteLine(fieldCppType + " " + clearedFieldName + ";");
            }

            if (staticFields.Count > 0)
            {
                currentFile.WriteLine(namespaceTab + "private:"); // we do not want this struct to be directly accessed
                currentFile.WriteLine(namespaceTab + "\tstruct " + staticFieldsStructName + " {");
                foreach (FieldDef field in staticFields)
                {
                    TypeSig fieldType = field.FieldType;
                    string fieldCppType = CodeGenHelpers.ConvertToFullCppTypename(fieldType);
                    string clearedFieldName = field.Name.Replace("::", "_").Replace("<", "").Replace(">", "").Replace("k__BackingField", "").Replace(".", "_").Replace("`", "_");

                    currentFile.WriteLine(namespaceTab + "\t\tstatic " + fieldCppType + " " + clearedFieldName + ";");
                }
                currentFile.WriteLine(namespaceTab + "\t};");
                currentFile.WriteLine("");
                currentFile.WriteLine(namespaceTab + "public:");

                currentFile.WriteLine(namespaceTab + "\tstatic " + staticFieldsStructName + "* StaticFields() {");
                currentFile.WriteLine(string.Format(namespaceTab + "\t\treturn ({0}*)(Il2Cpp::GetClass(\"{1}\", \"{2}\", \"{3}\")->static_fields);", staticFieldsStructName, classDef.Module.Name, classDef.Namespace, classDef.Name));
                currentFile.WriteLine(namespaceTab + "\t}");
                currentFile.WriteLine();
            }
        }

        public static void GenerateMethodStub(StreamWriter currentFile, MethodDef methodDef, string namespaceTab, string comment)
        {
            var cleanedMethodName = methodDef.Name.Replace("::", "_").Replace("<", "").Replace(">", "").Replace(".", "_").Replace("`", "_");
            currentFile.WriteLine(namespaceTab + "\t" + "// " + comment);
            currentFile.WriteLine(namespaceTab + "\t" + "// void " + cleanedMethodName + "() { }");
            currentFile.WriteLine();
        }

        public static void GenerateGenericMethod(StreamWriter currentFile, TypeDef classDef, MethodDef methodDef, string namespaceTab)
        {
            var cleanedMethodName = methodDef.Name.Replace("::", "_").Replace("<", "").Replace(">", "").Replace(".", "_").Replace("`", "_");
            var returnCppType = CodeGenHelpers.ConvertToFullCppTypename(methodDef.ReturnType);

            // add comments for all the generic method ptrs we could use
            currentFile.WriteLine(namespaceTab + "\t// Generic method instantiations");
            foreach (KeyValuePair<string, ulong> genMethodSigAndAddr in GenericMethodsPreprocess.GetGenericMethodAddresses(classDef, methodDef))
                currentFile.WriteLine(namespaceTab + "\t// " + genMethodSigAndAddr.Key);

            ParameterNamesAndTypes paramsInfo = new CodeGenHelpers.ParameterNamesAndTypes(methodDef);

            var returnCast = returnCppType;
            if(methodDef.GenericParameters.Count == 0 && returnCppType.Contains("uintptr_t"))
            {
                currentFile.WriteLine(namespaceTab + "\ttemplate <typename TReturnVal = " + returnCppType + "> ");
                returnCast = "TReturnVal";
            } else if(methodDef.GenericParameters.Count != 0)
            {
                List<string> genericParams = new List<string>();
                foreach(GenericParam genericParam in methodDef.GenericParameters)
                    genericParams.Add("typename " + genericParam.Name); // TODO: maybe add full name?

                currentFile.WriteLine(namespaceTab + "\ttemplate <" + string.Join(", ", genericParams) + ">");
            }

            string genericAddrParam = "uintptr_t __genericMethodOffset";
            if (paramsInfo.parametersWithTypeAndName.Count > 0)
                genericAddrParam = ", " + genericAddrParam;

            currentFile.Write(namespaceTab + "\t");
            if (methodDef.IsStatic)
                currentFile.Write("static ");
            currentFile.WriteLine(returnCast + " " + cleanedMethodName + "(" + string.Join(", ", paramsInfo.parametersWithTypeAndName) + genericAddrParam + ") {");
            currentFile.WriteLine(namespaceTab + "\t\tusing FnPtr = " + CodeGenHelpers.GenerateMethodTypedef(classDef, methodDef, returnCast, paramsInfo.parameterTypes) + ";");
            currentFile.WriteLine(namespaceTab + "\t\tFnPtr call_func = reinterpret_cast<FnPtr>(Il2CppBase() + __genericMethodOffset);");
            currentFile.WriteLine(namespaceTab + "\t\treturn " + CodeGenHelpers.GenerateMethodCall(methodDef, "call_func", paramsInfo.parameterNames) + ";");
            currentFile.WriteLine(namespaceTab + "\t}");
            currentFile.WriteLine();

            return;
        }

        public static void GenerateNormalMethod(StreamWriter currentFile, TypeDef classDef, MethodDef methodDef, string namespaceTab)
        {
            var cleanedMethodName = methodDef.Name.Replace("::", "_").Replace("<", "").Replace(">", "").Replace(".", "_").Replace("`", "_");
            var returnCppType = CodeGenHelpers.ConvertToFullCppTypename(methodDef.ReturnType);
            string methodOffset = CodeGenHelpers.GetMethodOffset(methodDef);

            // get method argument names and types in their own separate lists
            ParameterNamesAndTypes paramsInfo = new CodeGenHelpers.ParameterNamesAndTypes(methodDef);

            // method header
            var returnCast = returnCppType;
            if (returnCppType.Contains("uintptr_t")) // if we are uncertain about the type, we will make a template
            {
                currentFile.WriteLine(namespaceTab + "\ttemplate <typename TReturnVal = " + returnCppType + "> ");
                returnCast = "TReturnVal";
            }

            currentFile.Write(namespaceTab + "\t");
            if (methodDef.IsStatic)
                currentFile.Write("static ");
            currentFile.WriteLine(returnCast + " " + cleanedMethodName + "(" + string.Join(", ", paramsInfo.parametersWithTypeAndName) + ") {");

            // method body
            currentFile.WriteLine(namespaceTab + "\t\tusing FnPtr = " + CodeGenHelpers.GenerateMethodTypedef(classDef, methodDef, returnCast, paramsInfo.parameterTypes) + ";");
            currentFile.WriteLine(namespaceTab + "\t\tFnPtr call_func = reinterpret_cast<FnPtr>(Il2CppBase() + " + methodOffset + ");");
            currentFile.WriteLine(namespaceTab + "\t\treturn " + CodeGenHelpers.GenerateMethodCall(methodDef, "call_func", paramsInfo.parameterNames) + ";");
            currentFile.WriteLine(namespaceTab + "\t}");

            currentFile.WriteLine();

            // write a function that will return the method ptr
            currentFile.WriteLine(namespaceTab + "\tstatic uintptr_t " + cleanedMethodName + "_addr(" + string.Join(", ", paramsInfo.parametersWithTypeAndName) + ") {");
            currentFile.WriteLine(namespaceTab + "\t\treturn Il2CppBase() + " + methodOffset + ";");
            currentFile.WriteLine(namespaceTab + "\t}");
            currentFile.WriteLine();
        }

        public static void GenerateMethodsForClass(StreamWriter currentFile, TypeDef classDef, string namespaceTab)
        {
            foreach (MethodDef methodDef in classDef.Methods)
            {
                if (methodDef.IsConstructor || methodDef.IsStaticConstructor || Helpers.IsCompilerGeneratedType(methodDef.Name)) continue;
                if(methodDef.IsAbstract)
                {
                    GenerateMethodStub(currentFile, methodDef, namespaceTab, "This method is abstract and thus has no body");
                    continue;
                }

                string offset = CodeGenHelpers.GetMethodOffset(methodDef);
                if (offset == "0x0" && (classDef.HasGenericParameters || methodDef.HasGenericParameters))
                    GenerateGenericMethod(currentFile, classDef, methodDef, namespaceTab);
                else
                    GenerateNormalMethod(currentFile, classDef, methodDef, namespaceTab);
            }
        }

        public static void GenerateGenericMethodPtrTable(StreamWriter currentFile, TypeDef classDef, string namespaceTab)
        {
            var addyLookupDict = GenericMethodsPreprocess.genericMethodAddyLookup;
            if (!addyLookupDict.ContainsKey(classDef)) return;
            if (addyLookupDict[classDef].Keys.Count == 0) return;

            currentFile.WriteLine(namespaceTab + "\tinline static std::unordered_map<std::string, uintptr_t> genericMethodAddrs = {");
            foreach (KeyValuePair<string, ulong> keyValue in addyLookupDict[classDef])
            {
                currentFile.Write(namespaceTab + "\t\t{ " + string.Format("\"{0}\", 0x{1}", keyValue.Key, keyValue.Value.ToString("X")) + " }");
                if (!addyLookupDict[classDef][keyValue.Key].Equals(addyLookupDict.Last().Value))
                    currentFile.Write(",");
                currentFile.WriteLine();
            }

            currentFile.WriteLine(namespaceTab + "\t};");
            currentFile.WriteLine();
        }

        public static void GenerateClassFromType(TypeDef classDef)
        {
            TypeSig classTypeSig = classDef.ToTypeSig();
            string currentHeaderFile = CodeGenHelpers.GetHeaderAbsoluteSavePath(classTypeSig, Program.OUTPUT_DIR);
            string namespaceTab = "";

            Helpers.CreateFileWithDirectories(currentHeaderFile);
            StreamWriter currentFile = new StreamWriter(currentHeaderFile);

            currentFile.WriteLine("#pragma once");
            currentFile.WriteLine();
            currentFile.Write("#include \"" + CodeGenHelpers.GetRelativeIl2CppHeaderIncludePath(classTypeSig, Program.IL2CPP_HEADER_LOC) + "\"");
            currentFile.WriteLine();

            HashSet<string> typeReferences = CodeGenHelpers.ResolveTypeReferences(classTypeSig);
            foreach (string typeReference in typeReferences) // #include first
                if (typeReference.StartsWith("#include"))
                    currentFile.WriteLine(typeReference);

            currentFile.WriteLine();
            foreach (string typeReference in typeReferences) // forward decls
                if (!typeReference.StartsWith("#include"))
                    currentFile.WriteLine(typeReference);

            currentFile.WriteLine();
            // namespace start
            bool useNamespace = Preprocess.GetProcessedNamespaceForType(classTypeSig).Length > 0;
            if (useNamespace)
            {
                currentFile.WriteLine("namespace " + Preprocess.GetProcessedNamespaceForType(classTypeSig) + " {");
                namespaceTab += "\t";
            }

            //// class start
            currentFile.WriteLine(namespaceTab + CodeGenHelpers.FormatGenericParametersToTemplate(classDef));

            currentFile.Write(namespaceTab + "class " + Preprocess.GetProcessedCppTypeNameForType(classTypeSig));
            if(!classDef.IsInterface)
            {
                List<string> inheritanceList = GetInheritancesForType(classDef);
                if (inheritanceList.Count > 0)
                    currentFile.Write(" : " + string.Join(", ", inheritanceList));
            }

            currentFile.WriteLine(" {");

            currentFile.WriteLine(namespaceTab + "public:");
            currentFile.WriteLine("");

            GenerateGenericMethodPtrTable(currentFile, classDef, namespaceTab);

            GenerateFieldsForClass(currentFile, classDef, namespaceTab);

            currentFile.WriteLine(namespaceTab + "\tstatic Il2CppClass *StaticClass() {");
            currentFile.WriteLine(string.Format(namespaceTab + "\t\treturn (Il2CppClass *)(Il2Cpp::GetClass(\"{0}\", \"{1}\", \"{2}\"));", classDef.Module.Name, classDef.Namespace, classDef.Name));
            currentFile.WriteLine(namespaceTab + "\t}");
            currentFile.WriteLine("");

            currentFile.WriteLine("");

            GenerateMethodsForClass(currentFile, classDef, namespaceTab);

            currentFile.WriteLine(namespaceTab + "};");
            //// class end

            if (useNamespace)
                currentFile.WriteLine("};");
            // namespace end

            currentFile.Close();
        }

        public static void GenerateClasses()
        {
            foreach(TypeDef typeDef in Preprocess.GetAllTypesWithReferences())
            {
                if (typeDef.IsEnum)
                    GenerateEnumFromType(typeDef);
                else
                    GenerateClassFromType(typeDef);

                // we also need to generate class code for referenced typedefs, since they might not be in the main table
                foreach(TypeDef referencedType in Preprocess.processedTypeDefs[typeDef].referencedTypes)
                    if (referencedType.IsEnum)
                        GenerateEnumFromType(referencedType);
                    else
                        GenerateClassFromType(referencedType);
            }
        }

        // Creates (if needed) header files for types in other assemblies, which are referenced in this assembly.
        public static void CreateOtherAssembliesHeaderFiles()
        {
            foreach (KeyValuePair<TypeSig, TypeInfo> kvpair in Preprocess.processedAllTypeSigs)
            {
                TypeSig type = kvpair.Key;
                if (type.IsGenericParameter || Helpers.IsPrimitiveType(type)) continue;

                string headerAbsolutePath = CodeGenHelpers.GetHeaderAbsoluteSavePath(kvpair.Key, Program.OUTPUT_DIR);

                if (File.Exists(headerAbsolutePath)) continue;

                Helpers.CreateFileWithDirectories(headerAbsolutePath);
                StreamWriter headerFile = new StreamWriter(File.Open(headerAbsolutePath, FileMode.Open));

                headerFile.WriteLine("#pragma once");

                if(Preprocess.GetProcessedNamespaceForType(type).Length > 0)
                    headerFile.WriteLine("namespace " + Preprocess.GetProcessedNamespaceForType(type) + " {");

                headerFile.WriteLine(CodeGenHelpers.FormatGenericParametersToTemplate(type.ToTypeDefOrRef().ScopeType.ResolveTypeDef()));
                headerFile.WriteLine("class " + Preprocess.GetProcessedCppTypeNameForType(type) + " { };");

                if (Preprocess.GetProcessedNamespaceForType(type).Length > 0)
                    headerFile.WriteLine("}");

                headerFile.Close();
            }
        }

        public static void GenerateSDK(ModuleDefMD currentModule, string currentAssemblyDir)
        {
            CodeGen.currentModule = currentModule;
            CodeGen.currentAssemblyDir = currentAssemblyDir;

            Helpers.RecreateDirectory(currentAssemblyDir);

            CreateOtherAssembliesHeaderFiles();
            GenerateClasses();
        }
    }
}
