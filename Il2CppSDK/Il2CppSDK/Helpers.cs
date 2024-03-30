using dnlib.DotNet;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace Il2CppSDK
{
    internal class Helpers
    {
        public static void ClearConsoleLine()
        {
            Console.SetCursorPosition(0, Console.CursorTop);
            Console.Write(new string(' ', Console.WindowWidth));
            Console.SetCursorPosition(0, Console.CursorTop - 1);
        }

        public static void RecreateDirectory(string path)
        {
            DeleteDirectoryIfExists(path);
            CreateDirectoryIfNotExists(path);
        }

        public static void CreateDirectoryIfNotExists(string path)
        {
            if (!Directory.Exists(path))
                Directory.CreateDirectory(path);
        }

        public static void DeleteDirectoryIfExists(string path)
        {
            if (Directory.Exists(path))
                Directory.Delete(path, true);
        }

        public static void CreateFileWithDirectories(string path)
        {
            Directory.CreateDirectory(Path.GetDirectoryName(path));
            FileStream file = File.Create(path);
            file.Close();
        }

        // Returns whether the outmost type in TypeSig is primitive
        public static bool IsPrimitiveType(TypeSig type)
        {
            if (type.IsGenericParameter)
            {
                return true;
            }

            switch (type.GetElementType())
            {
                case ElementType.Class:
                case ElementType.ValueType:
                    return false;

                case ElementType.GenericInst:
                    if (type.Namespace == "System.Collections.Generic" 
                        && (type.GetName().StartsWith("List") || type.GetName().StartsWith("Dictionary")))
                        return true;
                    else
                        return false;
            }

            return true;
        }

        // Returns true if the type is an anonymous type or some compiler generated type, usually they have a specific set of characters in them
        // This could accidentally flag a regular type as compiler generated.
        public static bool IsCompilerGeneratedType(string typeFullName)
        {
            string[] compilerLetters = { "b", "c", "d", "f", "t"};
            foreach (string letter in compilerLetters)
                if (typeFullName.Contains(">" + letter + "__") || typeFullName.Contains("<>" + letter))
                    return true;

            return false;
        }

        // Find a type definition by the complete type name, including namespace, name and templates
        public static TypeDef FindTypeDefByFullName(string fullTypeName, List<TypeDef> typeDefs)
        {
            int templateCount = 0;
            if(fullTypeName.Contains("<"))
            {
                List<string> templateArgs = GetTemplateArgumentsFromCSharpType(fullTypeName.Split("<")[1]);
                templateCount = templateArgs.Count;
            }

            string searchBy = fullTypeName.Split("<")[0];
            foreach (TypeDef typeDef in typeDefs)
            {
                if (typeDef.GenericParameters.Count != templateCount) continue;

                string typedefNameCleaned = Regex.Replace(typeDef.FullName, @"`\d+", "");
                typedefNameCleaned = typedefNameCleaned.Replace("/", ".");

                // backwards search the name parts until we run out of search space
                string[] typedefNameParts = typedefNameCleaned.Split(".");
                string[] searchByNameParts = searchBy.Split(".");

                int i = typedefNameParts.Length-1, j = searchByNameParts.Length-1;
                while(i >= 0 && j >= 0)
                {
                    string namePart = typedefNameParts[i];
                    string searchPart = searchByNameParts[j];
                    if (namePart != searchPart)
                        break;

                    i--;
                    j--;
                }

                if (j == -1) // only accept the typedef if we fully consumed the searchByNameParts
                    return typeDef;

            }

            return null;
        }

        public static List<string> ConvertTemplateArgsToCppType(string fullTypeName)
        {
            string[] data = fullTypeName.Split("<");
            if(data.Length == 1)
                return new();

            return GetTemplateArgumentsFromCSharpType(data[1]);
        }

        // Returns the outmost template arguments in a string, shall only be called from ConvertCSharpTypeToCpp
        // templateArgs last character should be >
        private static List<string> GetTemplateArgumentsFromCSharpType(string templateArgs)
        {
            templateArgs = templateArgs.Remove(templateArgs.Length - 1); // the result should be something like "Type1<Type2<AA>>, Type3, Type4<T>"

            List<string> outerTemplates = new();
            string current = "";
            int bracketsSeen = 0;
            foreach (char letter in templateArgs)
            {
                switch (letter)
                {
                    case '<':
                        bracketsSeen++;
                        break;
                    case '>':
                        bracketsSeen--;
                        break;
                    case ',':
                        if (bracketsSeen == 0)
                        {
                            outerTemplates.Add(current);
                            current = "";
                        }
                        break;
                    case ' ':
                        break;
                    default:
                        if (bracketsSeen == 0)
                            current += letter;
                        break;
                }
            }

            // in case of multiple templates, the last one wont be added
            if (current != "")
                outerTemplates.Add(current);

            return outerTemplates;
        }

        // TODO: Verify that this works CORRECTLY
        // Turns a primitive type in script.json into a C++ type. We only cover some of the types as not all of them are present
        private static string CSharpPrimitiveToCpp(string typeName)
        {
            Dictionary<string, string> typeLookup = new()
            {
                {"sbyte", "int8_t" },
                {"byte", "uint8_t" },
                {"short", "int16_t" },
                {"ushort", "uint16_t" },
                {"int", "int32_t" },
                {"uint", "uint32_t" },
                {"long", "int64_t" },
                {"ulong", "uint64_t" },
                {"float", "float" },
                {"double", "double" },
                {"bool", "bool" },
                {"char", "char" },
                {"string", "Il2CppString*" },
                {"object", "Il2CppObject*" },
                {"void", "void" },
                {"IntPtr", "intptr_t" },
                {"UIntPtr", "uintptr_t" },
            };

            if (!typeLookup.ContainsKey(typeName))
                return "TYPE_LOOKUP_ERROR";

            return typeLookup[typeName];
        }

        // Converts a C# type in script.json to a C++ type
        public static TypeConversionResult ConvertCSharpTypeToCpp(string cSharpFullType, List<TypeDef> ownAssemblyTypes, List<TypeSig> otherAssemblyTypes)
        {
            TypeConversionResult result = new();

            if(CSharpPrimitiveToCpp(cSharpFullType) != "TYPE_LOOKUP_ERROR")
            {
                result.cppType = CSharpPrimitiveToCpp(cSharpFullType);
                return result;
            }

            string[] data = cSharpFullType.Split("<");
            string mainTypeName = data[0];
            List<string> convertedTemplates = new();

            if (data.Length > 1)
            { // template arguments were present
                List<string> templateArgs = GetTemplateArgumentsFromCSharpType(data[1]);
                foreach (string templateArg in templateArgs) // verify types based on num templates and name
                {
                    TypeConversionResult templateConverted = ConvertCSharpTypeToCpp(templateArg, ownAssemblyTypes, otherAssemblyTypes);
                    convertedTemplates.Add(templateConverted.cppType);

                    result.referencedTypeDefs.Union(templateConverted.referencedTypeDefs);
                    result.referencedTypeSigs.Union(templateConverted.referencedTypeSigs);
                }
            }

            string cppType = "uintptr_t";
            ElementType elemType = ElementType.I8;
            bool isTypeByRef = false;
            bool isValueType = true;

            foreach (TypeDef typeDef in ownAssemblyTypes)
            {
                string typedefNameCleaned = Regex.Replace(typeDef.FullName, @"`\d+", "");
                typedefNameCleaned = typedefNameCleaned.Replace("/", "."); // dnlib sometimes has spaces, sometimes dots and i do not know when one or the other shows up
                if (typedefNameCleaned.EndsWith(mainTypeName) && typeDef.GenericParameters.Count == convertedTemplates.Count) // verify types based on num templates and name
                {
                    cppType = Preprocess.GetProcessedCppTypeNameForType(typeDef.ToTypeSig());
                    isTypeByRef = typeDef.ToTypeSig().IsByRef;
                    elemType = typeDef.ToTypeSig().GetElementType();
                    isValueType = typeDef.IsValueType;

                    result.referencedTypeDefs.Add(typeDef);
                    break;
                }
            }

            // if type def wasn't found, search through type sigs
            // this still won't guarantee that we will resolve the type, but it's the best option we have
            if (cppType == "")
            {
                foreach (TypeSig typeSig in otherAssemblyTypes)
                {
                    if (convertedTemplates.Count > 0 && !typeSig.ContainsGenericParameter) continue;

                    string typedefNameCleaned = Regex.Replace(typeSig.FullName, @"`\d+", "");
                    typedefNameCleaned = typedefNameCleaned.Replace("/", ".");
                    if (typedefNameCleaned.EndsWith(mainTypeName))
                    {
                        cppType = Preprocess.GetProcessedCppTypeNameForType(typeSig);
                        isTypeByRef = typeSig.IsByRef;
                        elemType = typeSig.GetElementType();

                        isValueType = typeSig.IsValueType;

                        result.referencedTypeSigs.Add(typeSig);
                        break;
                    }
                }
            }

            // format the full type name
            if (convertedTemplates.Count > 0)
                cppType += "<" + string.Join(", ", convertedTemplates) + ">";
            if (isTypeByRef)
                cppType += "*";
            if (!isValueType && !Extensions.IsPrimitive(elemType))
                cppType += "*";


            result.cppType = cppType;

            return result;
        }

        // Only keeps ASCII characters and numbers within a class name
        public static string FormatClassname(string className)
        {
            Regex rgx = new Regex("[^a-zA-Z0-9]");

            className = className.Replace("<", "").Replace(">", "");
            className = string.Concat(className.Split(Path.GetInvalidFileNameChars()));
            return rgx.Replace(className, "");
        }

        public static string FormatNamespace(string namespace_)
        {
            Regex rgx = new Regex("[^a-zA-Z0-9]");

            namespace_ = namespace_.Replace("<", "").Replace(">", "");
            namespace_ = string.Concat(namespace_.Split(Path.GetInvalidFileNameChars()));
            return rgx.Replace(namespace_, "_");
        }

        // Removes all templates & nested templates from a type's name
        static string RemoveAllTemplates(string typeFullName)
        {
            string typeNameWithoutTemplates = "";
            int openingBracketSeen = 0;
            foreach(char letter in typeFullName)
            {
                if(letter == '<') openingBracketSeen++;
                if(letter == '>') openingBracketSeen--;

                if(openingBracketSeen == 0)
                    typeNameWithoutTemplates += letter;
            }

            return typeNameWithoutTemplates;
        }


        // Generates a namespace for type if the type is an inner class of another, but doesn't have a namespace. Returns the regular namespace for type if it exists.
        public static string ParseNamespaceForType(string typeNamespace, string typeFullname)
        {
            string namespace_ = FormatNamespace(typeNamespace);
            if (namespace_.Length > 0)
            {
                return namespace_;
            }
            else 
            {
                string typeNameWithoutTemplates = RemoveAllTemplates(typeFullname);
                Regex r = new Regex("[^\\.\\/]+[\\.\\/]");
                MatchCollection matches = r.Matches(typeNameWithoutTemplates);
                if (matches.Count == 0) return "";
                
                List<string> names = ["NS"];
                foreach (Match match in matches)
                    names.Add(
                        FormatNamespace(match.Value.Remove(match.Value.Length - 1))
                    );

                return string.Join("_", names);
            }
        }
    }
}
