using dnlib.DotNet;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Il2CppSDK
{
    internal class Test
    {
        public static void AreAllGenericMethodsPresent(ModuleDefMD currentModule)
        {
            foreach (TypeDef typeDef in currentModule.Types)
            {
                if (typeDef.IsEnum) continue;

                foreach(MethodDef methodDef in typeDef.Methods)
                {
                    if (CodeGenHelpers.GetMethodOffset(methodDef) != "0x0" || methodDef.IsAbstract || Helpers.IsCompilerGeneratedType(methodDef.FullName)) continue;

                    if(!GenericMethodsPreprocess.genericMethodsForClasses.ContainsKey(typeDef)) {
                        
                        Console.WriteLine(string.Format("WARNING: No generic methods found for typeDef {0}, even though there should be some", typeDef.FullName));
                        break;
                    }

                    if (!GenericMethodsPreprocess.genericMethodsForClasses[typeDef].ContainsKey(methodDef.Name))
                    {
                        Console.WriteLine(string.Format("WARNING: No generic methods with name {0} found for typeDef {1}", methodDef.Name, typeDef.FullName));
                        break;
                    }
                }
            }
        }
    }
}
