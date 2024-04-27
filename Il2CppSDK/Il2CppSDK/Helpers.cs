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
            if (type.IsGenericParameter || Extensions.IsPrimitive(type.GetElementType()))
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

        public static bool HasCompilerGeneratedAttribute(CustomAttributeCollection attrs)
        {
            foreach (var attr in attrs)
                if (attr.AttributeType.Name == "AttributeAttribute")
                    foreach (CANamedArgument namedArg in attr.NamedArguments)
                        if (namedArg.Value.ToString() == "CompilerGeneratedAttribute")
                            return true;
            return false;
        }

        public static bool IsTypeNameReverseSubpartOf(string[] mainTypeName, string[] subpart)
        {
            int i = mainTypeName.Length - 1, j = subpart.Length - 1;
            while (i >= 0 && j >= 0)
            {
                string namePart = mainTypeName[i];
                string searchPart = subpart[j];
                if (namePart != searchPart)
                    break;

                i--;
                j--;
            }

            if (j == -1) // only accept the typedef if we fully consumed the searchByNameParts
                return true;

            return false;
        }

        // Splits a method/type name by dots into smaller (namespace) parts
        // Example: "System.Collections.IEnumerable<System.Collections.List<T>>.Method" -> {System, Collections, IEnumerable<System.Collections.List<T>>, Method}
        public static List<string> SplitTypeNameToParts(string fullMethodName)
        {
            List<string> nameParts = new();
            string current = "";
            int bracketsSeen = 0;
            foreach (char letter in fullMethodName)
            {
                if (letter == '<') bracketsSeen++;
                else if (letter == '>') bracketsSeen--;

                if (letter == '.' && bracketsSeen == 0)
                {
                    nameParts.Add(current);
                    current = "";
                }
                else
                    current += letter;
            }

            // in case of multiple templates, the last one wont be added
            if (current != "")
                nameParts.Add(current);

            return nameParts;
        }


        // Returns true if the type is an anonymous type or some compiler generated type, usually they have a specific set of characters in them
        // This could accidentally flag a regular type as compiler generated.
        public static bool IsCompilerGeneratedType(string typeFullName)
        {
            string[] compilerLetters = { "b", "c", "d", "f", "g", "t"};
            foreach (string letter in compilerLetters)
                if (typeFullName.Contains(">" + letter + "__") || typeFullName.Contains("<>" + letter))
                    return true;

            return false;
        }

        // Find a type definition by the complete type name, including namespace, name and templates
        public static TypeDef FindTypeDefByFullName(string fullTypeName, List<TypeDef> typeDefs)
        {
            int templateCount = 0;
            List<string> typeNameParts = SplitTypeNameToParts(fullTypeName);
            if (typeNameParts.Last().Contains("<"))
            {
                List<string> templateArgs = GetTemplateArgumentsFromCSharpType(typeNameParts.Last().Split("<")[1]);
                templateCount = templateArgs.Count;
            }
            typeNameParts[typeNameParts.Count - 1] = typeNameParts.Last().Split("<")[0]; // remove templates from type name now that we have them stored

            // TODO: maybe also check for referenced type defs, although we should just add them to the typeDefs list
            foreach (TypeDef typeDef in typeDefs)
            {
                if (typeDef.GenericParameters.Count != templateCount) continue;

                string typedefNameCleaned = Regex.Replace(typeDef.FullName, @"`\d+", "");
                typedefNameCleaned = typedefNameCleaned.Replace("/", ".");

                // backwards search the name parts until we run out of search space
                string[] typedefNameParts = typedefNameCleaned.Split(".");
                if(IsTypeNameReverseSubpartOf(typedefNameParts, typeNameParts.ToArray()))
                    return typeDef;
            }

            return null;
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
        public static string CSharpPrimitiveToDumperGeneratedType(string typeName)
        {
            Dictionary<string, string> typeLookup = new()
            {
                {"sbyte", "int8_t" },
                {"System.SByte", "int8_t" },
                {"byte", "uint8_t" },
                {"System.Byte", "uint8_t" },
                {"short", "int16_t" },
                {"System.Int16", "int16_t" },
                {"ushort", "uint16_t" },
                {"System.UInt16", "uint16_t" },
                {"int", "int32_t" },
                {"System.Int32", "int32_t" },
                {"uint", "uint32_t" },
                {"System.UInt32", "uint32_t" },
                {"long", "int64_t" },
                {"System.Int64", "int64_t" },
                {"ulong", "uint64_t" },
                {"System.UInt64", "uint64_t" },
                {"float", "float" },
                {"System.Single", "float" },
                {"double", "double" },
                {"System.Double", "double" },
                {"bool", "bool" },
                {"System.Boolean", "bool" },
                {"char", "char" },
                {"System.Char", "char" },
                {"string", "System_String" },
                {"System.String", "System_String" },
                {"object", "Il2CppObject" },
                {"System.Object", "Il2CppObject" },
                {"void", "void" },
                {"System.Void", "void" },
                {"IntPtr", "intptr_t" },
                {"System.IntPtr", "intptr_t" },
                {"UIntPtr", "uintptr_t" },
                {"System.UIntPtr", "uintptr_t" },
            };

            if (!typeLookup.ContainsKey(typeName))
                return "";

            return typeLookup[typeName];
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
                return "NS_" + namespace_;
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
