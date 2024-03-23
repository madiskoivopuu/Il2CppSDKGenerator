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

        // Generates a namespace for type if the type is an inner class of another, but doesn't have a namespace. Returns the regular namespace for type if it exists.
        public static string ParseNamespaceForType(string typeNamespace, string typeFullname)
        {
            string namespace_ = FormatNamespace(typeNamespace);
            if (namespace_.Length > 0)
            {
                return namespace_;
            }
            else if (typeFullname.LastIndexOf('/') != -1) // sometimes it has slashes, sometimes dots..... seems like the 2nd last element would be a good namespace
            {
                // use long class name as the namespace
                string[] potentialNamespaces = typeFullname.Split('/');
                string useAsNamespace = potentialNamespaces[potentialNamespaces.Length - 2];

                return FormatNamespace(useAsNamespace);
            }
            else if (typeFullname.LastIndexOf('.') != -1) // if dnlib for some reason doesn't use slashes
            {
                string useAsNamespace = typeFullname.Substring(0, typeFullname.LastIndexOf('.'));
                return FormatNamespace(useAsNamespace);
            }

            return "";
        }
    }
}
