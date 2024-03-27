using System;
using System.Collections.Generic;
using System.IO;
using System.Text.Json;

namespace Il2CppSDK
{
    public class ScriptJson
    {
        public List<ScriptMethod> ScriptMethod = new();
        public List<ScriptString> ScriptString = new();
        public List<ScriptMetadata> ScriptMetadata = new();
        public List<ScriptMetadataMethod> ScriptMetadataMethod = new();
        public ulong[] Addresses;
    }

    public class ScriptMethod
    {
        public ulong Address;
        public string Name;
        public string Signature;
        public string TypeSignature;
    }

    public class ScriptString
    {
        public ulong Address;
        public string Value;
    }

    public class ScriptMetadata
    {
        public ulong Address;
        public string Name;
        public string Signature;
    }

    public class ScriptMetadataMethod
    {
        public ulong Address;
        public string Name;
        public ulong MethodAddress;
    }

    public class ScriptJsonReader
    {
        public static ScriptJson readFile(string fileLoc)
        {
            return JsonSerializer.Deserialize<ScriptJson>(File.ReadAllText(fileLoc));
        }
    }
}
