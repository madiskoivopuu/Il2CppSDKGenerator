using dnlib.DotNet;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace Il2CppSDK
{
    internal class CodeGenHelpers
    {
        public class ParameterNamesAndTypes
        {
            public List<string> parameterTypes;
            public List<string> parameterNames;
            public List<string> parametersWithTypeAndName;

            private HashSet<string> CPPKeywords = new HashSet<string>(){ "and", "double", "not_eq", "throw", "and_eq", "dynamic_cast", "operator", "true", "asm", "else", "or", "try", "auto", "enum", "or_eq", "typedef", "bitand", "explicit", "private", "typeid", "bitor", "extern", "protected", "typename", "bool", "false", "public", "union", "break", "float", "register", "unsigned", "case", "for", "reinterpret-cast", "using", "catch", "friend", "return", "virtual", "char", "goto", "short", "void", "class", "if", "signed", "volatile", "compl", "inline", "sizeof", "wchar_t", "const", "int", "static", "while", "const-cast", "long", "static_cast", "xor", "continue", "mutable", "struct", "xor_eq", "default", "namespace", "switch", "delete", "new", "template", "do", "not", "this" };
            private string cleanParamName(string name)
            {
                if (CPPKeywords.Contains(name))
                    return "_" + name + "_";
                else
                    return name;    
            }

            public ParameterNamesAndTypes(MethodDef methodDef) {
                parameterTypes = new List<string>();
                parameterNames = new List<string>();
                parametersWithTypeAndName = new List<string>();

                for (int i = methodDef.HasThis ? 1 : 0; i < methodDef.Parameters.Count; i++)
                {
                    Parameter paramDef = methodDef.Parameters[i];
                    string paramType = ConvertToFullCppTypename(paramDef.Type);
                    string cleanedName = cleanParamName(paramDef.Name);

                    parameterNames.Add(cleanedName);
                    parameterTypes.Add(paramType);
                    parametersWithTypeAndName.Add(paramType + " " + cleanedName);
                }
            }
        }

        static string FormatIl2CppGeneric(TypeSig type)
        {
            string result = "";
            if (type.FullName.StartsWith("System.Collections.Generic.List"))
            {
                result = "Il2CppList<";
            }
            else
            if (type.FullName.StartsWith("System.Collections.Generic.Dictionary"))
            {
                result = "Il2CppDictionary<";
            }
            else
            {
                result = Preprocess.GetFullTypenameForIl2CppType(type) + "<";
            }
            List<string> args = new List<string>();
            foreach (var arg in type.ToGenericInstSig().GenericArguments)
            {
                if (arg.IsGenericInstanceType)
                {
                    args.Add(FormatIl2CppGeneric(arg));
                }
                else args.Add(ConvertToFullCppTypename(arg));
            }
            result += string.Join(", ", args.ToArray());
            result += ">";

            if (!type.IsValueType)
                result += "*";

            return result;
        }

        // Converts a type to full C++ name, including template arguments if needed
        // Uses Preprocess data
        public static string ConvertToFullCppTypename(TypeSig type)
        {
            if (Extensions.IsPrimitive(type.GetElementType()))
                return Helpers.CSharpPrimitiveToDumperGeneratedType(type.FullName);

            // covers generic enums case
            if (type.IsGenericInstanceType)
            {
                if (type.ScopeType == null)
                    return FormatIl2CppGeneric(type);

                if (type.ScopeType.GetBaseType() == null)
                    return FormatIl2CppGeneric(type);

                if (type.ScopeType.GetBaseType().FullName != "System.Enum")
                    return FormatIl2CppGeneric(type);
                else
                    return Preprocess.GetFullTypenameForIl2CppType(type);
            }

            string result = "uintptr_t";

            switch (type.GetElementType())
            {
                case ElementType.Void:
                    result = "void";
                    break;

                case ElementType.String:
                    result = "Il2CppString*";
                    break;

                case ElementType.SZArray:
                    result = "Il2CppArray<" + ConvertToFullCppTypename(type.Next) + ">*";
                    break;

                case ElementType.Var: // generic param in method
                case ElementType.MVar:
                    result = Preprocess.GetProcessedCppTypeNameForType(type);
                    break;

                // TODO: parse multidimensional arrays correctly
                case ElementType.Array:
                    result = "Il2CppArray<uintptr_t>*";
                    break;

                case ElementType.Object:
                    result = "Il2CppObject*";
                    break;

                case ElementType.ValueType:
                    result = Preprocess.GetFullTypenameForIl2CppType(type);
                    break;

                case ElementType.Class:
                    result = Preprocess.GetFullTypenameForIl2CppType(type) + "*";
                    break;

                case ElementType.ByRef:
                case ElementType.TypedByRef: // no idea what TYPED by ref means
                    result = ConvertToFullCppTypename(type.GetNext()) + "*";
                    break;
            }

            return result;
        }

        // Returns the relative include path to include 'typeToInclude' in 'currType' header file
        public static string GetIncludePathFromTypeToAnother(TypeSig currType, TypeSig typeToInclude)
        {
            string includePath = "";
            bool areNamespacesDifferent = Preprocess.GetProcessedNamespaceForType(currType) != Preprocess.GetProcessedNamespaceForType(typeToInclude);
            if (Preprocess.GetProcessedNamespaceForType(currType).Length > 0 && areNamespacesDifferent)
                includePath += "../";

            if (currType.DefinitionAssembly.Name != typeToInclude.DefinitionAssembly.Name)
                includePath += "../" + Helpers.FormatNamespace(typeToInclude.DefinitionAssembly.Name) + "/";

            if (Preprocess.GetProcessedNamespaceForType(typeToInclude).Length > 0 && areNamespacesDifferent)
                includePath += Preprocess.GetProcessedNamespaceForType(typeToInclude) + "/";

            includePath += Preprocess.GetProcessedCppTypeNameForType(typeToInclude) + ".h";

            return includePath;
        }

        // Gets the absolute save path for a header, e.g. SDK/{assemblyName}/namespace?/typeName.h
        public static string GetHeaderAbsoluteSavePath(TypeSig type, string outputDir)
        {
            string includePath = outputDir + "/" + Helpers.FormatNamespace(type.DefinitionAssembly.Name) + "/" + Preprocess.GetHeaderLocationInAssembly(type);
            return includePath;
        }

        public static string GetRelativeIl2CppHeaderIncludePath(TypeSig type, string il2cppHeaderInSDK)
        {
            string includePath = "../";
            if (Preprocess.GetProcessedNamespaceForType(type).Length > 0)
                includePath += "../";
            includePath += il2cppHeaderInSDK;

            return includePath;
        }

        // Checks whether we should explicitly include the header file for a type over forward declaration
        public static bool ShouldIncludeType(TypeSig type, TypeDef typeDef)
        {
            if (typeDef != null && typeDef.IsEnum) return true;
            if (type.IsGenericInstanceType || type.IsValueType) return true;

            return false;
        }

        public static string FormatGenericParametersToTemplate(TypeSig type)
        {
            string template = "";
            if (type.IsGenericInstanceType)
            {
                List<string> typenames = new List<string>();
                //ITypeDefOr typeRef = type.ToTypeDefOrRef().ScopeType;
                foreach (TypeSig generic in type.ToGenericInstSig().GenericArguments)
                {
                    string templateName = "typename " + Helpers.FormatNamespace(generic.TypeName);
                    while (typenames.Contains(templateName))
                        templateName += "_";

                    typenames.Add(templateName);
                }

                template += "template <" + string.Join(", ", typenames) + ">";
            }

            return template;
        }

        public static string FormatGenericParametersToTemplate(TypeDef typeDef)
        {
            string template = "";
            if (typeDef.HasGenericParameters)
            {
                List<string> typenames = new List<string>();
                foreach (GenericParam generic in typeDef.GenericParameters)
                {
                    string templateName = "typename " + Helpers.FormatNamespace(generic.Name);
                    while (typenames.Contains(templateName))
                        templateName += "_";
                    typenames.Add(templateName);
                }

                template += "template <" + string.Join(", ", typenames) + ">";
            }

            return template;
        }

        public static string GetTypeResolveFormat(TypeSig currentType, TypeSig referencedTypeSig, TypeDef referencedType)
        {
            if (ShouldIncludeType(referencedTypeSig, referencedType))
                return string.Format("#include \"{0}\"", GetIncludePathFromTypeToAnother(currentType, referencedTypeSig));
            else
            {
                string includedTypeName = ConvertToFullCppTypename(referencedTypeSig);
                if (includedTypeName.Contains("::"))
                {
                    string[] split = includedTypeName.Split("::");
                    string namespace_ = split[0];
                    string typeName = split[1];
                    if (typeName[typeName.Length - 1] == '*') // remove autogenerated ptr symbol if needed
                        typeName = typeName.Substring(0, typeName.Length - 1);

                    return "namespace " + namespace_ + " { class " + typeName + "; }";
                }
                else
                {
                    string typeName = ConvertToFullCppTypename(referencedTypeSig);
                    if (typeName[typeName.Length - 1] == '*') // remove autogenerated ptr symbol if needed
                        typeName = typeName.Substring(0, typeName.Length - 1);

                    return string.Format("class {0};", typeName);
                }
            }
        }

        // Returns a list of references to other types. Contains either forward declarations for types we do not need to necessarily include or #include for types that are required (parent class, enum, class with generic)
        public static HashSet<string> ResolveTypeReferences(TypeSig type)
        {
            HashSet<string> references = new HashSet<string>();

            TypeDef typeDef = type.TryGetTypeDef();
            if (typeDef == null)
            {
                Console.WriteLine(string.Format("WARNING! Type {0} did not have TypeDef in GetNecessaryIncludePaths. This function expects it to have TypeDef since it's in the current assembly {1}", type.FullName, Program.currentModule.Assembly.Name));
                return references;
            }

            // types in the same assembly
            foreach (TypeDef referencedType in Preprocess.processedTypeDefs[typeDef].referencedTypes)
            {
                if (referencedType == typeDef) continue;
                TypeSig referencedTypeSig = referencedType.ToTypeSig();

                bool isInheritedInterface = false;
                foreach (InterfaceImpl interfaceImpl in typeDef.Interfaces)
                    if (interfaceImpl.Interface.ResolveTypeDef() == referencedType)
                        isInheritedInterface = true;

                if (referencedType == typeDef.BaseType || isInheritedInterface) // always include base type
                    references.Add(string.Format("#include \"{0}\"", GetIncludePathFromTypeToAnother(type, referencedTypeSig)));
                else
                    references.Add(GetTypeResolveFormat(type, referencedTypeSig, referencedType));
            }

            // types in a different assembly, we might still want to include them if necessary
            foreach (TypeSig outsideType in Preprocess.processedTypeDefs[typeDef].referencedTypeSigs)
            {
                bool isInheritedInterface = false;
                foreach (InterfaceImpl interfaceImpl in typeDef.Interfaces)
                    if (interfaceImpl.Interface.ResolveTypeDef().FullName == outsideType.FullName)
                        isInheritedInterface = true;

                if ((typeDef.BaseType != null && outsideType.FullName == typeDef.BaseType.FullName) || isInheritedInterface) // always include base type
                    references.Add(string.Format("#include \"{0}\"", GetIncludePathFromTypeToAnother(type, outsideType)));
                else if (!outsideType.FullName.StartsWith(type.FullName)) // to fix including own type's header file, yay even more spaghetti code
                    references.Add(GetTypeResolveFormat(type, outsideType, null));
            }

            // generic method references

            return references;
        }

        public static string GenerateMethodTypedef(TypeDef classDef, MethodDef methodDef, string returnCast, List<string> parameterTypes)
        {
            if (methodDef.HasThis)
            {
                string currTypeClass = CodeGenHelpers.ConvertToFullCppTypename(methodDef.Parameters[0].Type);
                currTypeClass = Regex.Replace(currTypeClass, @"\**$", "*", RegexOptions.RightToLeft); // replace all * at the end of str with one *, or add it if missing
                parameterTypes.Insert(0, currTypeClass);
            }

            return returnCast + " (*)(" + string.Join(", ", parameterTypes) + ")";
        }

        // Generates a string that represents a certain method being called inside a class
        public static string GenerateMethodCall(MethodDef methodDef, string funcName, List<string> paramNames)
        {
            if (methodDef.HasThis)
                paramNames.Insert(0, "this");

            return funcName + "(" + string.Join(", ", paramNames) + ")";
        }

        public static List<string> GetInheritancesForType(TypeDef typeDef)
        {
            List<string> inheritanceList = new();

            if (typeDef.BaseType != null)
            {
                string parent = ConvertToFullCppTypename(typeDef.BaseType.ToTypeSig());
                if (parent.Last() == '*')
                    parent = parent.Remove(parent.Length - 1);

                inheritanceList.Add("public " + parent);
            }

            foreach(InterfaceImpl interfaceImpl in typeDef.Interfaces)
            {
                string interfaceName = ConvertToFullCppTypename(interfaceImpl.Interface.ToTypeSig());
                if (interfaceName.Last() == '*')
                    interfaceName = interfaceName.Remove(interfaceName.Length - 1);

                inheritanceList.Add("public " + interfaceName);
            }

            return inheritanceList;
        }

        public static string GetFieldOffset(FieldDef field)
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

        public static string GetMethodOffset(MethodDef method)
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
    }
}
