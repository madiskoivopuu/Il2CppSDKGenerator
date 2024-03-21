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

                currentFile.Write(returnCast + "& ");
                currentFile.Write(field.Name + "() {");
                currentFile.WriteLine();

                if(field.IsStatic)
                {
                    currentFile.WriteLine(string.Format(namespaceTab + "\t\treturn *({0}*)((uintptr_t)ClassDef()->static_fields + {1});", returnCast, CodeGenHelpers.GetFieldOffset(field)));
                } 
                else
                {
                    currentFile.WriteLine(string.Format(namespaceTab + "\t\treturn *({0}*)((uintptr_t)this + {1});", returnCast, CodeGenHelpers.GetFieldOffset(field)));
                }

                currentFile.WriteLine(namespaceTab + "\t}");

                currentFile.WriteLine();
            }
        }

        public static void GenerateMethodsForClass(StreamWriter currentFile, TypeDef classDef, string namespaceTab)
        {
            foreach(MethodDef methodDef in classDef.Methods)
            {
                if (methodDef.IsConstructor || methodDef.IsStaticConstructor) continue;

                var cleanedMethodName = methodDef.Name.Replace("::", "_").Replace("<", "").Replace(">", "").Replace(".", "_").Replace("`", "_");
                var returnCppType = CodeGenHelpers.ConvertToFullCppTypename(methodDef.ReturnType);

                currentFile.Write(namespaceTab + "\t");

                // get method argument names and types in their own separate lists
                List<string> parameterTypes = new List<string>();
                List<string> parameterNames = new List<string>();
                List<string> parametersWithTypeAndName = new List<string>();

                foreach(Parameter paramDef in methodDef.Parameters)
                {
                    parameterNames.Add(paramDef.Name);
                    parameterTypes.Add(CodeGenHelpers.ConvertToFullCppTypename(paramDef.Type));
                    parametersWithTypeAndName.Add(paramDef.Name + " " + CodeGenHelpers.ConvertToFullCppTypename(paramDef.Type));
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
                currentFile.Write(namespaceTab + "\t\t");
                currentFile.Write("using FnPtr = " + returnCppType + " (*)(" + string.Join(", ", parameterTypes) + ")");

                currentFile.WriteLine();
            }
        }

        public static void GenerateClassFromType(TypeDef classDef)
        {
            if (classDef.Name.Contains("TypeVector3JsonConverter"))
                Debugger.Break();

            TypeSig classTypeSig = classDef.ToTypeSig();
            string currentHeaderFile = CodeGenHelpers.GetHeaderAbsoluteSavePath(classTypeSig, Program.OUTPUT_DIR);
            string namespaceTab = "";

            Helpers.CreateFileWithDirectories(currentHeaderFile);
            StreamWriter currentFile = new StreamWriter(currentHeaderFile);

            currentFile.WriteLine("#pragma once");
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
            currentFile.WriteLine(namespaceTab + "\tstatic Il2CppClass* ClassDef() {");
            currentFile.WriteLine(namespaceTab + string.Format("\t\treturn (Il2CppClass *)(Il2Cpp::GetClass(\"{0}\", \"{1}\", \"{2}\"));", classDef.Module.Name, classDef.Namespace, classDef.Name));
            currentFile.WriteLine(namespaceTab + "\t}");
            currentFile.WriteLine("");

            GenerateFieldsForClass(currentFile, classDef, namespaceTab);

            currentFile.Write(namespaceTab + "};");
            //// class end

            currentFile.WriteLine("};");
            // namespace end

            currentFile.Close();
        }

        public static void GenerateClasses()
        {
            foreach(TypeDef typeDef in currentModule.Types)
            {
                foreach(var attr in typeDef.CustomAttributes) {
                    if (attr.TypeFullName.Contains("CompilerGeneratedAttribute"))
                        Console.WriteLine("pls");
                }

                if (typeDef.IsEnum)
                    GenerateEnumFromType(typeDef);
                else
                    GenerateClassFromType(typeDef);
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
                headerFile.WriteLine(CodeGenHelpers.FormatGenericParametersToTemplate(type)); // is this even required for a simple declaration

                if(Preprocess.GetProcessedNamespaceForType(type).Length > 0)
                    headerFile.WriteLine("namespace " + Preprocess.GetProcessedNamespaceForType(type) + " {");

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
