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
        public static string IL2CPP_HEADER_LOC = "Il2Cpp/Il2Cpp.h";
        public static ModuleDefMD currentModule = null;
        static StreamWriter currentFile = null;

        static void ParseModule(string moduleFile)
        {
            moduleFile = "C:\\Users\\madis\\Desktop\\PROJECTFOLDER\\Cheat related programs\\il2cpp reverser\\DummyDll\\mscorlib.dll";
            
            Console.WriteLine("Generating SDK for {0}...", Path.GetFileName(moduleFile));

            ModuleContext modCtx = ModuleDef.CreateModuleContext();
            currentModule = ModuleDefMD.Load(moduleFile, modCtx);

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