﻿using System;
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
        public static string IL2CPP_HEADER_LOC = "Il2Cpp/Il2Cpp.h";
        public static ModuleDefMD currentModule = null;
        static StreamWriter currentFile = null;

        static void ParseModule(string scriptJson, string moduleFile)
        {
            if(moduleFile.Contains("Il2CppDummyDll.dll"))
            {
                Console.WriteLine("Skipping Il2CppDummyDll.dll");
                return;
            }
            
            Console.WriteLine("Generating SDK for {0}...", Path.GetFileName(moduleFile));

            ScriptJson jsonData = ScriptJsonReader.readFile(scriptJson);
            ModuleContext modCtx = ModuleDef.CreateModuleContext();
            currentModule = ModuleDefMD.Load(moduleFile, modCtx);
            string assemblyDir = Program.OUTPUT_DIR + "/" + Helpers.FormatNamespace(currentModule.Assembly.Name);
            if (Directory.Exists(assemblyDir))
                Directory.Delete(assemblyDir, true);


            Preprocess.PreprocessModule(jsonData, currentModule);
            Test.AreAllGenericMethodsPresent(currentModule);

            CodeGen.GenerateSDK(currentModule, assemblyDir);

            Console.WriteLine("SDK generated, make sure to update Il2CppType.h with proper structs from Il2CppDumper header file.");
        }
        static void Main(string[] args)
        {
            if(args.Length < 2)
            {
                Console.WriteLine("Incorrect number of arguments, expected 2.");
                Console.WriteLine("Command example: ./Il2CppSDKGenerator scriptJsonFile moduleDllFile");
                Console.WriteLine("Command example: ./Il2CppSDKGenerator scriptJsonFile dllsDirectory");
                return;
            }

            //args[0] = "C:\\Users\\madis\\Desktop\\PROJECTFOLDER\\Cheat related programs\\il2cpp reverser\\script.json";
            //args[1] = "C:\\Users\\madis\\Desktop\\PROJECTFOLDER\\Cheat related programs\\il2cpp reverser\\DummyDll\\Assembly-CSharp.dll";

            Helpers.CreateDirectoryIfNotExists(OUTPUT_DIR);
            if (Directory.Exists(args[1]))
            {
                foreach(var file in Directory.GetFiles(args[1]))
                {
                    ParseModule(args[0], file);
                }
            }
            else
            {
                ParseModule(args[0], args[1]);
            }
        }
    }
}
;