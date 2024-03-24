using dnlib.DotNet;
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

namespace Il2CppSDK
{
    internal class CodeGen
    {
        public static ModuleDefMD currentModule = null;
        public static string currentAssemblyDir = "";

        public static void GenerateEnumFromType(TypeDef enumDef)
        {
            TypeSig enumTypeSig = enumDef.ToTypeSig();
            string currentHeaderFile = CodeGenHelpers.GetHeaderAbsoluteSavePath(enumTypeSig, Program.OUTPUT_DIR);
            Helpers.CreateFileWithDirectories(currentHeaderFile);

            StreamWriter currentFile = new StreamWriter(currentHeaderFile);

            currentFile.WriteLine("#pragma once");

            bool useNamespace = Preprocess.GetProcessedNamespaceForType(enumTypeSig).Length > 0;
            if (useNamespace)
                currentFile.WriteLine("namespace " + Preprocess.GetProcessedNamespaceForType(enumTypeSig) + " {");

            currentFile.WriteLine();

            currentFile.Write("enum " + Preprocess.GetProcessedCppTypeNameForType(enumTypeSig));

            currentFile.WriteLine();
            currentFile.WriteLine("{");
            currentFile.WriteLine();

            for (int i = 1; i < enumDef.Fields.Count; i++)
            {
                FieldDef field = enumDef.Fields[i];
                currentFile.Write(string.Format("\t{0} = {1}", Helpers.FormatClassname(field.Name), Convert.ToInt32(field.Constant.Value)));
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
            foreach(FieldDef field in classDef.Fields)
            {
                TypeSig fieldType = field.FieldType;
                string fieldCppType = CodeGenHelpers.ConvertToFullCppTypename(fieldType);
                string returnCast = fieldCppType;

                currentFile.Write(namespaceTab + "\t");

                string fieldFunc = "";
                if (fieldCppType.Contains("uintptr_t")) // if we are uncertain about the type, we will make a template
                {
                    currentFile.Write("template <typename TReturnVal = " + fieldCppType + "> ");
                    returnCast = "TReturnVal";
                }

                if (field.IsStatic)
                    currentFile.Write("static ");

                string clearedFieldName = "f_" + field.Name.Replace("::", "_").Replace("<", "").Replace(">", "").Replace("k__BackingField", "").Replace(".", "_").Replace("`", "_");
                currentFile.Write(returnCast + "& ");
                currentFile.Write(clearedFieldName + "() {");
                currentFile.WriteLine();

                if(field.IsStatic)
                {
                    currentFile.WriteLine(string.Format(namespaceTab + "\t\treturn *({0}*)((uintptr_t)this->klass->static_fields + {1});", returnCast, CodeGenHelpers.GetFieldOffset(field)));
                } 
                else
                {
                    currentFile.WriteLine(string.Format(namespaceTab + "\t\treturn *({0}*)((uintptr_t)this + {1});", returnCast, CodeGenHelpers.GetFieldOffset(field)));
                }

                currentFile.WriteLine(namespaceTab + "\t}");

                currentFile.WriteLine();
            }
        }

        public static void GenerateMethodStub(StreamWriter currentFile, MethodDef methodDef, string namespaceTab, string comment)
        {
            var cleanedMethodName = methodDef.Name.Replace("::", "_").Replace("<", "").Replace(">", "").Replace(".", "_").Replace("`", "_");
            currentFile.WriteLine(namespaceTab + "\t" + "// " + comment);
            currentFile.WriteLine(namespaceTab + "\t" + "void " + cleanedMethodName + "() { }");
            currentFile.WriteLine();
        }

        public static void GenerateGenericMethod(StreamWriter currentFile, TypeDef classDef, MethodDef methodDef, string namespaceTab)
        {
            List<TypeSpec> genericTypeInstantiations = Preprocess.GetGenericTypeInstantiations(classDef);
            var cleanedMethodName = methodDef.Name.Replace("::", "_").Replace("<", "").Replace(">", "").Replace(".", "_").Replace("`", "_");

            if (genericTypeInstantiations.Count == 0)
                GenerateMethodStub(currentFile, methodDef, namespaceTab, "This function has no body as it most likely is not used within the assembly code (TypeSpecs count for classDef was 0)");
            else
                GenerateMethodStub(currentFile, methodDef, namespaceTab, "GenericInstMethod || GenericMethod || GenericInstGenericMethod is not supported at this moment");
            // TODO: use Il2CppDumper .json file for generic inst methods
            return;
        }

        public static void GenerateNormalMethod(StreamWriter currentFile, TypeDef classDef, MethodDef methodDef, string namespaceTab)
        {
            var cleanedMethodName = methodDef.Name.Replace("::", "_").Replace("<", "").Replace(">", "").Replace(".", "_").Replace("`", "_");
            var returnCppType = CodeGenHelpers.ConvertToFullCppTypename(methodDef.ReturnType);
            string methodOffset = CodeGenHelpers.GetMethodOffset(methodDef);

            currentFile.Write(namespaceTab + "\t");

            // get method argument names and types in their own separate lists
            List<string> parameterTypes = new List<string>();
            List<string> parameterNames = new List<string>();
            List<string> parametersWithTypeAndName = new List<string>();

            for (int i = methodDef.HasThis ? 1 : 0; i < methodDef.Parameters.Count; i++)
            {
                Parameter paramDef = methodDef.Parameters[i];
                if (i == 0 && methodDef.HasThis)
                    paramDef.Name = "this";

                parameterNames.Add(paramDef.Name);
                parameterTypes.Add(CodeGenHelpers.ConvertToFullCppTypename(paramDef.Type));
                parametersWithTypeAndName.Add(CodeGenHelpers.ConvertToFullCppTypename(paramDef.Type) + " " + paramDef.Name);
            }

            // method header
            var returnCast = returnCppType;
            if (returnCppType.Contains("uintptr_t")) // if we are uncertain about the type, we will make a template
            {
                currentFile.Write("template <typename TReturnVal = " + returnCppType + "> ");
                returnCast = "TReturnVal";
            }

            if (methodDef.IsStatic)
                currentFile.Write("static ");
            currentFile.WriteLine(returnCast + " " + cleanedMethodName + "(" + string.Join(", ", parametersWithTypeAndName) + ") {");

            // method body
            currentFile.WriteLine(namespaceTab + "\t\tusing FnPtr = " + CodeGenHelpers.GenerateMethodTypedef(classDef, methodDef, returnCast, parameterTypes) + ";");
            currentFile.WriteLine(namespaceTab + "\t\tFnPtr call_func = reinterpret_cast<FnPtr>(Il2CppBase() + " + methodOffset + ");");
            currentFile.WriteLine(namespaceTab + "\t\treturn " + CodeGenHelpers.GenerateMethodCall(methodDef, "call_func", parameterNames) + ";");
            currentFile.WriteLine(namespaceTab + "\t}");

            currentFile.WriteLine();
        }

        public static void GenerateMethodsForClass(StreamWriter currentFile, TypeDef classDef, string namespaceTab)
        {
            foreach (MethodDef methodDef in classDef.Methods)
            {
                if (methodDef.IsConstructor || methodDef.IsStaticConstructor) continue;
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
            currentFile.WriteLine(CodeGenHelpers.FormatGenericParametersToTemplate(classTypeSig));

            currentFile.Write(namespaceTab + "class " + Preprocess.GetProcessedCppTypeNameForType(classTypeSig));
            if(classDef.BaseType != null)
            {
                string parentTypeName = CodeGenHelpers.ConvertToFullCppTypename(classDef.BaseType.ToTypeSig());
                if (parentTypeName[parentTypeName.Length-1] == '*') // remove autogenerated ptr symbol if needed
                    parentTypeName = parentTypeName.Substring(0, parentTypeName.Length-1);

                currentFile.Write(" : public " + parentTypeName);
            }
            currentFile.WriteLine(" {");

            currentFile.WriteLine(namespaceTab + "public:");
            currentFile.WriteLine("");

            GenerateFieldsForClass(currentFile, classDef, namespaceTab);

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
            foreach(TypeDef typeDef in currentModule.Types)
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
            foreach (KeyValuePair<TypeSig, TypeInfo> kvpair in Preprocess.processedDifferentAssemblyTypes)
            {
                TypeSig type = kvpair.Key;
                if (type.IsGenericParameter || type.ContainsGenericParameter) continue;

                string headerAbsolutePath = CodeGenHelpers.GetHeaderAbsoluteSavePath(kvpair.Key, Program.OUTPUT_DIR);

                if (File.Exists(headerAbsolutePath)) continue;

                Helpers.CreateFileWithDirectories(headerAbsolutePath);
                StreamWriter headerFile = new StreamWriter(File.Open(headerAbsolutePath, FileMode.Open));

                headerFile.WriteLine("#pragma once");

                if(Preprocess.GetProcessedNamespaceForType(type).Length > 0)
                    headerFile.WriteLine("namespace " + Preprocess.GetProcessedNamespaceForType(type) + " {");

                headerFile.WriteLine(CodeGenHelpers.FormatGenericParametersToTemplate(type));
                headerFile.WriteLine("class " + Preprocess.GetProcessedCppTypeNameForType(type) + " { };");

                if (Preprocess.GetProcessedNamespaceForType(type).Length > 0)
                    headerFile.WriteLine("}");

                headerFile.Close();
            }
        }

        public static void GenerateSDK(ModuleDefMD currentModule)
        {
            CodeGen.currentModule = currentModule;
            currentAssemblyDir = Program.OUTPUT_DIR + "/" + Helpers.FormatNamespace(currentModule.Assembly.Name);

            Helpers.RecreateDirectory(currentAssemblyDir);

            CreateOtherAssembliesHeaderFiles();
            GenerateClasses();
        }
    }
}
