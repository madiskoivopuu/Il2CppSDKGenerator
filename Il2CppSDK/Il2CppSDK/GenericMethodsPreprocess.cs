using dnlib.DotNet;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace Il2CppSDK
{
    public class GenericMethodsPreprocess
    {
        public class GenericMethodInfo
        {
            public string genericMethodName;
            public string genericMethodClassName;
            public string genericMethodSignature;

            public string dumperMethodClassAndNameWTemplates;
            public ulong genericMethodAddr;
        }

        public static Dictionary<TypeDef, Dictionary<string, List<GenericMethodInfo>>> genericMethodsForClasses = new(); // only holds our current assembly generic methods, thats why we use typedefs
        public static Dictionary<TypeDef, Dictionary<string, ulong>> genericMethodAddyLookup = new();

        public static string GetOutmostTypeNameAsDumperType(TypeSig type)
        {
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
                    result = "System_String";
                    break;

                case ElementType.Array:
                    result = string.Concat(Enumerable.Repeat("_array", (int)type.ToArraySig().Rank));
                    break;

                // TODO: parse multidimensional arrays correctly
                case ElementType.SZArray:
                    result = "_array";
                    break;

                case ElementType.Object:
                    result = "Il2CppObject";
                    break;

                case ElementType.Ptr:
                case ElementType.ByRef:
                    result = GetOutmostTypeNameAsDumperType(type.GetNext());
                    break;

                case ElementType.Var: // generic param in method
                case ElementType.MVar:
                    result = "";
                    break;

                default:
                    result = Regex.Replace(
                        RemoveTemplatesFromInnerMostTypeName(Regex.Replace(type.FullName, @"`\d+", "")), 
                        "[^a-zA-Z0-9_]", "_"
                    );
                    break;

            }

            return result;
        }

        public static bool DoesMethodSignatureMatch(MethodDef methodDef, GenericMethodInfo methodInfo)
        {
            string sigOnlyParameters = methodInfo.genericMethodSignature.Split("(")[1];
            string[] sigParameters = sigOnlyParameters.Split(",");
            int shouldHaveNumParams = sigParameters.Length - 1; // -1 due to methodinfo param, which isnt present in assembly
            if (methodDef.HasThis)
                shouldHaveNumParams--;

            if (methodDef.ParamDefs.Count != shouldHaveNumParams) // paramdefs wont include this*
                return false;

            for (int i = methodDef.HasThis ? 1 : 0; i < methodDef.Parameters.Count; i++)
            {
                Parameter param = methodDef.Parameters[i];
                if (!sigParameters[i].Contains(param.Name))
                    return false;

                if (param.Type.GetElementType() == ElementType.Var || param.Type.GetElementType() == ElementType.MVar)
                    continue;

                // try checking the type aswell
                string dumperParamSig = Helpers.CSharpPrimitiveToDumperGeneratedType(param.Type.FullName);
                if (dumperParamSig == "")
                    dumperParamSig = GetOutmostTypeNameAsDumperType(param.Type);

                if (!sigParameters[i].Contains(dumperParamSig))
                    return false;
            }

            return true;
        }

        // Checks whether to save a method by the full name (including namespace with dots) or not
        public static bool ShouldSaveFullName(TypeDef classTypeDef, List<string> methodNameParts)
        {
            string fullMethodName = string.Join(".", methodNameParts);
            fullMethodName = fullMethodName.Replace(methodNameParts.Last(), methodNameParts.Last().Split("<")[0]);

            if (methodNameParts.Last() == "ctor" || methodNameParts.Last() == "cctor") return true;

            // full method name gets used in assemblies when method namespace has generics
            for (int j = 0; j < methodNameParts.Count-1; j++)
                if (methodNameParts[j].Contains("<")) return true;

            // if assembly uses full name, then we will have to use it aswell
            if(methodNameParts.Count > 1)
                foreach (MethodDef method in classTypeDef.Methods)
                    if (method.Name == fullMethodName)
                        return true;

            return false;
        }

        private static string RemoveTemplatesFromInnerMostTypeName(string fullName)
        {
            List<string> nameParts = Helpers.SplitTypeNameToParts(fullName);
            nameParts[nameParts.Count-1] = nameParts.Last().Split("<")[0];
            return string.Join(".", nameParts);
        }

        private static string GetParameterSigsAsString(MethodDef methodDef)
        {
            List<string> paramTypes = new();
            foreach(Parameter param in methodDef.Parameters)
                paramTypes.Add(param.Type.FullName);

            return string.Join(", ", paramTypes);
        }

        public static void CacheAllGenericMethods(ScriptJson jsonData, List<TypeDef> allTypeDefs)
        {
            Console.WriteLine("Caching generic methods, this will take a while.");

            Console.WriteLine("");
            for (int i = 0; i < jsonData.ScriptMethod.Count; i++)
            {
                Helpers.ClearConsoleLine();
                Console.WriteLine(string.Format("Methods checked: {0} / {1}", i, jsonData.ScriptMethod.Count));

                ScriptMethod method = jsonData.ScriptMethod[i];

                string[] data = method.Name.Split("$$");
                string classNameWTemplates = data[0];
                string classNameNoTemplates = RemoveTemplatesFromInnerMostTypeName(classNameWTemplates);
                string methodNameWTemplates = data[1];
                string methodNameNoTemplates = RemoveTemplatesFromInnerMostTypeName(methodNameWTemplates);

                if (Helpers.IsCompilerGeneratedType(classNameWTemplates) || Helpers.IsCompilerGeneratedType(methodNameWTemplates)) continue;

                if (!classNameWTemplates.Contains("<") && !methodNameWTemplates.Contains("<")) continue;

                TypeDef classTypeDef = Helpers.FindTypeDefByFullName(classNameWTemplates, allTypeDefs);
                if (classTypeDef == null) continue; // probably in another assembly, or our name search sucked

                if (!genericMethodsForClasses.ContainsKey(classTypeDef)) genericMethodsForClasses[classTypeDef] = new();

                GenericMethodInfo methodInfo = new GenericMethodInfo();
                methodInfo.genericMethodName = classNameNoTemplates;
                methodInfo.genericMethodClassName = methodNameNoTemplates;
                methodInfo.genericMethodSignature = method.Signature;
                methodInfo.dumperMethodClassAndNameWTemplates = method.Name;
                methodInfo.genericMethodAddr = method.Address;

                List<string> methodNameParts = Helpers.SplitTypeNameToParts(methodNameWTemplates);
                string innerMostMethodName = methodNameParts.Last();

                string saveWithName;
                if (ShouldSaveFullName(classTypeDef, methodNameParts))
                    saveWithName = methodNameWTemplates.Replace(innerMostMethodName, innerMostMethodName.Split("<")[0]);
                else
                    saveWithName = innerMostMethodName.Split("<")[0];

                if (!genericMethodsForClasses[classTypeDef].ContainsKey(saveWithName)) genericMethodsForClasses[classTypeDef][saveWithName] = new();
                genericMethodsForClasses[classTypeDef][saveWithName].Add(methodInfo);
            }
        }

        public static void GenerateGenericMethodAddressLookupTables(List<TypeDef> allTypeDefs) 
        {
            foreach(TypeDef typeDef in allTypeDefs)
            {
                if (Helpers.HasCompilerGeneratedAttribute(typeDef.CustomAttributes)) // ignore compiler generated types
                    continue;

                genericMethodAddyLookup[typeDef] = new(); 

                Dictionary<string, int> methodOccurrences = new Dictionary<string, int>();
                // count methods with same name, but different params/sig
                foreach (MethodDef methodDef in typeDef.Methods)
                {
                    if (!methodOccurrences.ContainsKey(methodDef.Name)) methodOccurrences[methodDef.Name] = 1;
                    else methodOccurrences[methodDef.Name]++;
                }

                foreach (MethodDef methodDef in typeDef.Methods)
                {
                    if (CodeGenHelpers.GetMethodOffset(methodDef) != "0x0" || methodDef.IsAbstract || Helpers.HasCompilerGeneratedAttribute(methodDef.CustomAttributes)) continue;

                    int prevCount = genericMethodAddyLookup[typeDef].Count;
                    foreach (GenericMethodInfo genericMethod in genericMethodsForClasses[typeDef][methodDef.Name])
                    {
                        if (methodOccurrences[methodDef.Name] == 1)
                            genericMethodAddyLookup[typeDef][genericMethod.dumperMethodClassAndNameWTemplates] = genericMethod.genericMethodAddr;
                        else // method with same name, but different param types
                        {
                            if (!DoesMethodSignatureMatch(methodDef, genericMethod)) continue;

                            string addrLookupSig = genericMethod.dumperMethodClassAndNameWTemplates + "(" + GetParameterSigsAsString(methodDef) + ")";
                            genericMethodAddyLookup[typeDef][addrLookupSig] = genericMethod.genericMethodAddr;
                        }
                    }

                    if (prevCount == genericMethodAddyLookup[typeDef].Count)
                        Console.WriteLine(string.Format("WARNING: Method {0} is generic, but no generic method addresses were added into the generic method address lookup table for type {1}. Most likely an issue with DoesMethodSignatureMatch()", methodDef.FullName, typeDef.FullName));
                }
            }
        }

        public static void SetupGenericMethodSupport(ScriptJson jsonData, List<TypeDef> allTypeDefs)
        {
            CacheAllGenericMethods(jsonData, allTypeDefs);
            GenerateGenericMethodAddressLookupTables(allTypeDefs);
        }
    }
}
