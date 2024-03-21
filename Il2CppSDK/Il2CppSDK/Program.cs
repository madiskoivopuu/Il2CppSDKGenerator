using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using dnlib.DotNet;
using dnlib.IO;
using dnlib.Utils;
using System.Text.RegularExpressions;
using System.Diagnostics;
using System.Security.Claims;
using System.Security.Cryptography;

namespace Il2CppSDK
{
    internal class Program
    {
        static Dictionary<string, int> m_DuplicateMethodTable = new Dictionary<string, int>();
        static HashSet<string> typeNamesInModule = new HashSet<string>();
        static Dictionary<string, TypeDef> typeWithANamespace = new Dictionary<string, TypeDef>();
        public static string OUTPUT_DIR = "SDK";
        public static ModuleDefMD currentModule = null;
        static StreamWriter currentFile = null;

        /*static string Il2CppTypeToCppType(TypeSig type)
        {
            if (type.IsGenericInstanceType)
            {
                return FormatIl2CppGeneric(type);
            }

            string result = "uintptr_t";
            string namespace_ = GetFormattedFilenameForType(type.Namespace);
            if (namespace_.Length > 0)
                namespace_ += "::";

            switch (type.GetElementType())
            {
                case ElementType.Void:
                    result = "void";
                    break;

                case ElementType.Boolean:
                    result = "bool";
                    break;

                case ElementType.Char:
                    result = "char";
                    break;

                case ElementType.I1:
                    result = "int8_t";
                    break;

                case ElementType.U1:
                    result = "uint8_t";
                    break;

                case ElementType.I2:
                    result = "int16_t";
                    break;

                case ElementType.U2:
                    result = "uint16_t";
                    break;

                case ElementType.I4:
                    result = "int32_t";
                    break;

                case ElementType.U4:
                    result = "uint32_t";
                    break;

                case ElementType.I8:
                    result = "int64_t";
                    break;

                case ElementType.U8:
                    result = "uint64_t";
                    break;

                case ElementType.I:
                    result = "intptr_t";
                    break;

                case ElementType.U:
                    result = "uintptr_t";
                    break;

                case ElementType.R4:
                    result = "float";
                    break;

                case ElementType.R8:
                    result = "double";
                    break;

                case ElementType.String:
                    result = "Il2CppString*"; 
                    break;

                case ElementType.SZArray:
                    result = "Il2CppArray<" + Il2CppTypeToCppType(type.Next) + ">*";
                    break;

                // TODO: parse multidimensional arrays correctly
                case ElementType.Array:
                    result = "Il2CppArray<uintptr_t>*";
                    break;

                case ElementType.Object:
                    result = "Il2CppObject*";
                    break;

                case ElementType.ValueType:
                    if (type.TryGetTypeDef() != null)
                        result = namespace_ + GetFormattedFilenameForType(type.TryGetTypeDef().Name);

                    break;
                case ElementType.Class:
                    if(type.TryGetTypeDef() != null)
                        result = namespace_ + GetFormattedFilenameForType(type.TryGetTypeDef().Name) + "*";
                    break;

                case ElementType.Var:
                    result = namespace_ + type.FullName;
                    break;
            }

            return result;
        }
        static string GetFieldOffset(FieldDef field)
        {
            foreach (var attr in field.CustomAttributes)
            {
                if (attr.AttributeType.Name.Equals("FieldOffsetAttribute"))
                {
                    var Offset = attr.GetField("Offset");
                    if (Offset != null && Offset.Value != null)
                    {
                        return Offset.Value.ToString();
                    }
                }
            }
            return "0x0";
        }
        static string GetMethodOffset(MethodDef method)
        {
            foreach (var attr in method.CustomAttributes)
            {
                if (attr.AttributeType.Name.Equals("AddressAttribute"))
                {
                    var Offset = attr.GetField("Offset");
                    if (Offset != null && Offset.Value != null)
                    {
                        return Offset.Value.ToString();
                    }
                }
            }
            return "0x0";
        }
        static string FormatIl2CppGeneric(TypeSig type)
        {
            string result = "";
            if (type.GetName().StartsWith("List"))
            {
                result = "Il2CppList<";
            }
            else
            if (type.GetName().StartsWith("Dictionary"))
            {
                result = "Il2CppDictionary<";
            }
            else
            {
                result = GetFormattedFilenameForType(type.ToGenericInstSig().TypeName) + "<";
            }
            List<string> args = new List<string>();
            foreach (var arg in type.ToGenericInstSig().GenericArguments)
            {
                if (arg.IsGenericInstanceType)
                {
                    args.Add(FormatIl2CppGeneric(arg));
                }
                else args.Add(Il2CppTypeToCppType(arg));
            }
            result += string.Join(", ", args.ToArray());
            result += ">*";
            return result;
        }
        static string FormatToValidClassname(string className)
        {
            Regex rgx = new Regex("[^a-zA-Z0-9]");
            return rgx.Replace(className, "");
        }

        static HashSet<string> GetReferencedTypesByInheritanceForClass(TypeDef clazz)
        {
            HashSet<string> types = new HashSet<string>();
            bool hasParent = clazz.BaseType != null && clazz.BaseType.DefinitionAssembly.Name == clazz.DefinitionAssembly.Name;
            if (!hasParent)
                return types;

            string baseTypeCppName = GetParentClassTypeAsString(null, clazz.BaseType);

            // retarded way to do it but we will get all referenced types in baseTypeCppName by splitting the template <...> part from the class name, then work on whatever is inside <...>
            Queue<string> workingQueue = new Queue<string>();
            workingQueue.Enqueue(baseTypeCppName);
            while(workingQueue.Count > 0)
            {
                string type = workingQueue.Dequeue();
                string[] typeParts = type.Split(new[] { '<' }, 2); // this should always result in a list of at least length 1

                string fullClassNameWithNamespace = typeParts[0]; // we have to format it due to pointers and our namespace chars, but we will handle it with an if
                if(fullClassNameWithNamespace.Contains("::"))
                {
                    string namespace_ = fullClassNameWithNamespace.Substring(0, fullClassNameWithNamespace.LastIndexOf("::"));
                    string onlyClassName = fullClassNameWithNamespace.Substring(fullClassNameWithNamespace.LastIndexOf(":") + 1);
                    fullClassNameWithNamespace = namespace_ + "::" + GetFormattedFilenameForType(onlyClassName);
                } else
                    fullClassNameWithNamespace = GetFormattedFilenameForType(fullClassNameWithNamespace);

                if (typeNamesInModule.Contains(fullClassNameWithNamespace))
                    types.Add(
                        fullClassNameWithNamespace
                    );

                if(typeParts.Length == 2)
                {
                    string templateBody = typeParts[1].Remove(typeParts[1].Length - 1);
                    string[] nestedTypes = templateBody.Split(new[] {", "}, StringSplitOptions.None);
                    foreach(string nestedType in nestedTypes)
                        workingQueue.Enqueue(nestedType);
                }

            }

            return types;
        }

        static void ParseFields(TypeDef clazz)
        {
            foreach(var rid in currentModule.Metadata.GetFieldRidList(clazz.Rid))
            {
                var field = currentModule.ResolveField(rid);

                if(field == null)
                {
                    continue;
                }

                var fieldName = field.Name.Replace("::", "_").Replace("<", "").Replace(">", "").Replace("k__BackingField", "").Replace(".", "_").Replace("`", "_");

                if (fieldName.Equals("auto") || fieldName.Equals("register"))
                    fieldName += "_";

                var fieldType = Il2CppTypeToCppType(field.FieldType);
                var fieldOffset = GetFieldOffset(field);
                bool containsGeneric = field.FieldType.ContainsGenericParameter || field.FieldType.IsGenericTypeParameter || field.FieldType.IsGenericParameter || field.FieldType.IsGenericInstanceType;

                string returnCast = "R";
                if (containsGeneric)
                    returnCast = fieldType;

                // write the field getter method header
                // we cannot nest multiple generic types inside a template, so we will need to check if return type is generic
                currentFile.Write("\t");
                if (!containsGeneric)
                    currentFile.Write(string.Format("template <typename R = {0}>", fieldType));
                
                currentFile.WriteLine(string.Format(" {0}{1}& {2}() {{", (field.IsStatic ? "static " : ""), returnCast, fieldName));

                // method body
                if (field.IsStatic)
                {
                    currentFile.WriteLine(string.Format("\t\treturn *({0}*)((uintptr_t)StaticClass()->static_fields + {1});", returnCast, fieldOffset));
                } 
                else
                {
                    currentFile.WriteLine(string.Format("\t\treturn *({0}*)((uintptr_t)this + {1});", returnCast, fieldOffset));
                }
                currentFile.WriteLine("\t}");
            }
        }

        static void ParseMethods(TypeDef clazz)
        {
            foreach (var rid in currentModule.Metadata.GetMethodRidList(clazz.Rid))
            {
                var method = currentModule.ResolveMethod(rid);

                if (method == null || method.IsConstructor || method.IsStaticConstructor)
                {
                    continue;
                }

                var methodName = method.Name.Replace("::", "_").Replace("<", "").Replace(">", "").Replace(".", "_").Replace("`", "_");

                if (methodName.Equals("auto") || methodName.Equals("register"))
                    methodName += "_";

                var methodType = Il2CppTypeToCppType(method.ReturnType);
                bool containsGeneric = method.ReturnType.ContainsGenericParameter || method.ReturnType.IsGenericTypeParameter || method.ReturnType.IsGenericParameter || method.ReturnType.IsGenericInstanceType;
                var methodOffset = GetMethodOffset(method);

                string methodKey = clazz.Namespace + clazz.FullName + method.Name;
                if (m_DuplicateMethodTable.ContainsKey(methodKey))
                {
                    methodName += "_" + m_DuplicateMethodTable[methodKey]++;
                } else
                {
                    m_DuplicateMethodTable.Add(methodKey, 1);
                }

                List<string> methodParams = new List<string>();
                List<string> paramTypes = new List<string>();
                List<string> paramNames = new List<string>();

                foreach (var param in method.Parameters)
                {
                    if (param.IsNormalMethodParameter)
                    {
                        var paramType = Il2CppTypeToCppType(param.Type);

                        if (param.HasParamDef)
                        {
                            if (param.ParamDef.IsOut)
                            {
                                paramType += "*";
                            }
                        }

                        if (param.Name.Equals("auto") || param.Name.Equals("register"))
                            param.Name += "_";

                        paramTypes.Add(paramType);
                        paramNames.Add(param.Name);

                        methodParams.Add(paramType + " " + param.Name);
                    }
                }

                string returnCast = "R";
                if (containsGeneric)
                    returnCast = methodType;

                // we cannot nest multiple generic types inside a template, so we will need to check if return type is generic
                currentFile.Write("\t");
                if (!containsGeneric)
                    currentFile.Write(string.Format("template <typename R = {0}>", methodType));

                currentFile.WriteLine(string.Format(" {0}{1} {2}({3}) {{", (method.IsStatic ? "static " : ""), returnCast, methodName, string.Join(", ", methodParams)));
                if (!method.IsStatic)
                {
                    if (methodParams.Count > 0)
                    {
                        currentFile.WriteLine("\t\treturn (({0} (*)({1}*, {2}))(Il2CppBase() + {3}))(this, {4});", returnCast, FormatToValidClassname(clazz.Name), string.Join(", ", paramTypes), methodOffset, string.Join(", ", paramNames));
                    } else currentFile.WriteLine("\t\treturn (({0} (*)({1}*))(Il2CppBase() + {3}))(this);", returnCast, FormatToValidClassname(clazz.Name), string.Join(", ", paramTypes), methodOffset);
                }
                else
                {
                    if (methodParams.Count > 0)
                    {
                        currentFile.WriteLine("\t\treturn (({0} (*)(void *, {1}))(Il2CppBase() + {2}))(0, {3});", returnCast, string.Join(", ", paramTypes), methodOffset, string.Join(", ", paramNames));
                    }
                    else
                    {
                        currentFile.WriteLine("\t\treturn (({0} (*)(void *))(Il2CppBase() + {2}))(0);", returnCast, string.Join(", ", paramTypes), methodOffset, string.Join(", ", paramNames));
                    }
                }
                currentFile.WriteLine("\t}");
            }
        }

        // Turns 
        static string GetParentClassTypeAsString(TypeDef childClass, ITypeDefOrRef parentClass)
        {
            string baseClassName = GetFormattedFilenameForType(parentClass.Name);
            if (parentClass.NumberOfGenericParameters > 0)
            {
                List<string> cppEquivalentTypes = new List<String>();
                foreach (TypeSig generic in parentClass.TryGetGenericInstSig().GenericArguments)
                    cppEquivalentTypes.Add(Il2CppTypeToCppType(generic));

                baseClassName += "<";
                baseClassName += string.Join(", ", cppEquivalentTypes);
                baseClassName += ">";
            }
            
             return baseClassName;
        }

        static void ParseClass(TypeDef clazz)
        {
            var module = clazz.Module;
            var namespaze = GetFormattedFilenameForType(clazz.Namespace);
            var validClassname = GetFormattedFilenameForType(clazz.Name);
            
            currentFile.WriteLine("#pragma once");
            currentFile.WriteLine("#include <Il2Cpp/Il2Cpp.h>");

            bool useNamespace = namespaze.Length > 0;
            bool hasBaseClass = clazz.BaseType != null && clazz.BaseType.DefinitionAssembly.Name == clazz.DefinitionAssembly.Name;

            // include necessary classes/enums
            HashSet<string> includedTypes = GetReferencedTypesByInheritanceForClass(clazz);
            foreach(string includedType in includedTypes)
            {
                string tabInAndOutPrefix = clazz.Namespace.Replace("<", "").Replace(">", "").Length > 0 ? "../" : "";
                if(typeWithANamespace.ContainsKey(includedType))
                    tabInAndOutPrefix += GetFormattedFilenameForType(typeWithANamespace[includedType].Namespace) + "/";

                // since the type name may contain namespace, get rid of it
                if(includedType.Contains("::"))
                {
                    string onlyClassname = includedType.Substring(includedType.LastIndexOf(":") + 1);
                    currentFile.WriteLine(string.Format("#include \"{0}{1}.h\" ", tabInAndOutPrefix, onlyClassname));
                }
                else
                    currentFile.WriteLine(string.Format("#include \"{0}{1}.h\" ", tabInAndOutPrefix, includedType));
            }

            if (useNamespace)
            {
                currentFile.WriteLine("namespace " + namespaze + " {");
            }

            currentFile.WriteLine();

            // check if class itself has any generic parameters
            // then we make a template at the beginning of it
            if(clazz.GenericParameters.Count > 0)
            {
                currentFile.Write("template <");
                List<string> typenames = new List<string>();
                foreach (GenericParam generic in clazz.GenericParameters)
                {
                    typenames.Add("typename " + generic.FullName);
                }

                currentFile.Write(string.Join(", ", typenames));
                currentFile.WriteLine(">");
            }

            currentFile.Write("class " + validClassname);
            // inherit with : if needed
            if (hasBaseClass)
            {
                currentFile.Write(" : public " + GetParentClassTypeAsString(clazz, clazz.BaseType));
            }

            currentFile.WriteLine();
            currentFile.WriteLine("{");
            currentFile.WriteLine("public: ");

            currentFile.WriteLine();

            currentFile.WriteLine("\tstatic Il2CppClass *StaticClass() {");
            currentFile.WriteLine(string.Format("\t\treturn (Il2CppClass *)(Il2Cpp::GetClass(\"{0}\", \"{1}\", \"{2}\"));", module.Name, namespaze, clazz.Name));
            currentFile.WriteLine("\t}");

            currentFile.WriteLine();

            ParseFields(clazz);

            currentFile.WriteLine();

            ParseMethods(clazz);

            currentFile.WriteLine();

            currentFile.WriteLine("};");
            currentFile.WriteLine();

            if (useNamespace)
            {
                currentFile.WriteLine("}");
            }

        }

        static void ParseEnum(TypeDef clazz)
        {
            var namespaze = GetFormattedFilenameForType(clazz.Namespace);
            var validClassname = GetFormattedFilenameForType(clazz.Name);

            currentFile.WriteLine("#pragma once");

            bool useNamespace = namespaze.Length > 0;
            if (useNamespace)
            {
                currentFile.WriteLine("namespace " + namespaze + " {");
            }

            currentFile.WriteLine();

            currentFile.Write("class " + validClassname);

            currentFile.WriteLine();
            currentFile.WriteLine("{");
            currentFile.WriteLine();

            for(int i = 1; i < clazz.Fields.Count; i++)
            {
                FieldDef field = clazz.Fields[i];
                currentFile.Write(string.Format("\t{0} = {1}", GetFormattedFilenameForType(field.Name), Convert.ToInt32(field.Constant.Value)));
                if(i != clazz.Fields.Count-1)
                    currentFile.Write(",");

                currentFile.WriteLine();
            }

            currentFile.WriteLine();
            currentFile.WriteLine("};");
            currentFile.WriteLine();

            if (useNamespace)
            {
                currentFile.WriteLine("}");
            }

        }

        static void ParseClasses()
        {
            if (currentModule == null)
                return;

            foreach(var rid in currentModule.Metadata.GetTypeDefRidList())
            {
                var type = currentModule.ResolveTypeDef(rid);

                if (type == null)
                    continue;

                var module = type.Module;
                var namespaze = GetFormattedFilenameForType(type.Namespace);
                var className = (string)type.Name.Replace("<", "").Replace(">", "");
                var classFilename = FormatToValidClassname(string.Concat(className.Split(Path.GetInvalidFileNameChars())));
                var validClassname = FormatToValidClassname(className);

                string outputPath = OUTPUT_DIR;

                outputPath += "\\" + module.Name;

                if (!Directory.Exists(outputPath))
                    Directory.CreateDirectory(outputPath);

                // skip the namespace include thing
                if (namespaze.Length > 0)
                {
                    File.AppendAllText(outputPath + "\\" + namespaze + ".h", string.Format("#include \"Includes/{0}/{1}.h\"\r\n", namespaze, classFilename));
                }
                else
                {
                    File.AppendAllText(outputPath + "\\-.h", string.Format("#include \"Includes/{0}.h\"\r\n", classFilename));
                }

                outputPath += "\\Includes";

                if (namespaze.Length > 0)
                {
                    outputPath += "\\" + namespaze;
                }

                if (!Directory.Exists(outputPath))
                    Directory.CreateDirectory(outputPath);

                outputPath += "\\" + classFilename + ".h";

                currentFile = new StreamWriter(outputPath);

                if (!type.IsEnum)
                    ParseClass(type);
                else
                    ParseEnum(type);
                currentFile.Close();
            }
        }

        // Parse types and modify them a bit so that later on the rest of the code can do work easier on the types, without that many edge cases
        static void PreParseTypes()
        {
            foreach (uint typeId in currentModule.Metadata.GetTypeDefRidList())
            {
                TypeDef type = currentModule.ResolveTypeDef(typeId);
                if (type == null) continue;

                string namespace_ = GetFormattedFilenameForType(type.Namespace);
                if (namespace_.Length > 0)
                {
                    type.Namespace = namespace_;
                    typeWithANamespace.Add(namespace_ + "::" + GetFormattedFilenameForType(type.Name), type);
                }
                else if (type.FullName.LastIndexOf('/') != -1) // sometimes it has slashes, sometimes dots..... seems like the 2nd last element would be a good namespace
                {
                    // use long class name as the namespace
                    string[] potentialNamespaces = type.FullName.Split('/');
                    string useAsNamespace = potentialNamespaces[potentialNamespaces.Length - 2];
                    type.Namespace = useAsNamespace;

                    typeWithANamespace.Add(GetFormattedFilenameForType(type.Namespace) + "::" + GetFormattedFilenameForType(type.Name), type);
                }
                else if (type.FullName.LastIndexOf('.') != -1) // if dnlib for some reason doesn't use slashes
                {
                    string[] potentialNamespaces = type.FullName.Split('.');
                    string useAsNamespace = potentialNamespaces[potentialNamespaces.Length - 2];
                    type.Namespace = useAsNamespace;
                }

                if(type.Namespace.Length > 0)
                    typeNamesInModule.Add(type.Namespace + "::" + GetFormattedFilenameForType(type.Name));
                else
                    typeNamesInModule.Add(GetFormattedFilenameForType(type.Name));
            }
        }*/

        static void ParseModule(string moduleFile)
        {
            Console.WriteLine("Generating SDK for {0}...", Path.GetFileName(moduleFile));

            ModuleContext modCtx = ModuleDef.CreateModuleContext();
            currentModule = ModuleDefMD.Load(moduleFile, modCtx);

            currentModule.ResolveAssembly;

            Preprocess.PreprocessModule(currentModule);
            CodeGen.GenerateSDK(currentModule);
        }
        static void Main(string[] args)
        {
            if(args.Length < 1)
            {
                Console.WriteLine("Invalid Arguments!");
                return;
            }

            if (Directory.Exists(OUTPUT_DIR))
                Directory.Delete(OUTPUT_DIR, true);

            if (Directory.Exists(args[0]))
            {
                foreach(var file in Directory.GetFiles(args[0]))
                {
                    ParseModule(file);
                }
            }
            else
            {
                ParseModule(args[0]);
            }
        }
    }
}
;