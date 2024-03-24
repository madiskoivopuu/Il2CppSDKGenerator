using dnlib.DotNet;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Il2CppSDK
{
    internal class CodeGenHelpers
    {
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
            result += ">*";
            return result;
        }

        // Converts a type to full C++ name, including template arguments if needed
        // Uses Preprocess data
        public static string ConvertToFullCppTypename(TypeSig type)
        {
            if (type.IsGenericInstanceType)
            {
                return FormatIl2CppGeneric(type);
            }

            string result = "uintptr_t";

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
                    result = "Il2CppArray<" + ConvertToFullCppTypename(type.Next) + ">*";
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

                case ElementType.Var: // generic param in method
                case ElementType.MVar:
                    result = Preprocess.GetProcessedCppTypeNameForType(type);
                    break;
            }

            return result;
        }

        // Returns the relative include path to include 'typeToInclude' in 'currType' header file
        public static string GetIncludePathFromTypeToAnother(TypeSig currType, TypeSig typeToInclude)
        {
            string includePath = "";
            if (Preprocess.GetProcessedNamespaceForType(currType).Length > 0)
                if (Preprocess.GetProcessedNamespaceForType(currType) != Preprocess.GetProcessedNamespaceForType(typeToInclude))
                    includePath += "../";

            if (currType.DefinitionAssembly.Name != typeToInclude.DefinitionAssembly.Name)
                includePath += "../" + Helpers.FormatNamespace(typeToInclude.DefinitionAssembly.Name) + "/";

            if (Preprocess.GetProcessedNamespaceForType(typeToInclude).Length > 0)
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
                foreach (TypeSig generic in type.ToGenericInstSig().GenericArguments)
                {
                    typenames.Add("typename " + generic.FullName);
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

                    return string.Format("class {0};", ConvertToFullCppTypename(referencedTypeSig));
                }
            }
        }

        public static List<TypeSpec> GetGenericTypeInstantiations(TypeDef genericType)
        {
            return null;
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

                if (referencedType == typeDef.BaseType) // always include base type
                    references.Add(string.Format("#include \"{0}\"", GetIncludePathFromTypeToAnother(type, referencedTypeSig)));
                else
                    references.Add(GetTypeResolveFormat(type, referencedTypeSig, referencedType));
            }

            // types in a different assembly, we might still want to include them if necessary
            foreach (TypeSig outsideType in Preprocess.processedTypeDefs[typeDef].referencedTypeSigs)
                if (typeDef.BaseType != null && outsideType.FullName == typeDef.BaseType.FullName) // always include base type
                    references.Add(string.Format("#include \"{0}\"", GetIncludePathFromTypeToAnother(type, outsideType)));
                else
                    references.Add(GetTypeResolveFormat(type, outsideType, null));

            return references;
        }

        public static string GenerateMethodTypedef(TypeDef classDef, MethodDef methodDef, string returnCast, List<string> parameterTypes)
        {
            if (methodDef.HasThis)
                parameterTypes.Insert(0, CodeGenHelpers.ConvertToFullCppTypename(classDef.ToTypeSig()));

            return returnCast + " (*)(" + string.Join(", ", parameterTypes) + ")";
        }

        // Generates a string that represents a certain method being called inside a class
        public static string GenerateMethodCall(MethodDef methodDef, string funcName, List<string> paramNames)
        {
            if (methodDef.HasThis)
                paramNames.Insert(0, "this");

            return funcName + "(" + string.Join(", ", paramNames) + ")";
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
