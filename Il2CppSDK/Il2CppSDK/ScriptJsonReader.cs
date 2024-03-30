using System;
using System.Collections.Generic;
using System.IO;
using System.Text.Json;

namespace Il2CppSDK
{
    public class ScriptJson
    {
        public List<ScriptMethod> ScriptMethod { get; set; }
        public List<ScriptString> ScriptString { get; set; }
        public List<ScriptMetadata> ScriptMetadata { get; set; }
        public List<ScriptMetadataMethod> ScriptMetadataMethod { get; set; }
        public ulong[] Addresses { get; set; }
    }

    public class ScriptMethod
    {
        public ulong Address { get; set; }
        public string Name { get; set; }
        public string Signature { get; set; }
        public string TypeSignature { get; set; }
    }

    public class ScriptString
    {
        public ulong Address { get; set; }
        public string Value { get; set; } 
    }

    public class ScriptMetadata
    {
        public ulong Address { get; set; } 
        public string Name { get; set; } 
        public string Signature { get; set; }
    }

    public class ScriptMetadataMethod
    {
        public ulong Address { get; set; }
        public string Name { get; set; }
        public ulong MethodAddress { get; set; }
    }

    public class ScriptJsonReader
    {
        public static ScriptJson readFile(string fileLoc)
        {
            return JsonSerializer.Deserialize<ScriptJson>(File.ReadAllText(fileLoc), new JsonSerializerOptions { PropertyNameCaseInsensitive = true });
        }
    }
}
