#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class DataStringUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "DataStringUtil"));
	}

	template <typename R = Il2CppString*> static R& _key() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = Il2CppString*> static R Encrypt(Il2CppString* aData, Il2CppString* aKey) {
		return ((R (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xEB0914))(0, aData, aKey);
	}
	template <typename R = Il2CppString*> static R Decrypt(Il2CppString* aData, Il2CppString* aKey) {
		return ((R (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xEB0E94))(0, aData, aKey);
	}
	 static Il2CppList<Il2CppString*>* SplitSmart(Il2CppString* aData, char aSeparator) {
		return ((Il2CppList<Il2CppString*>* (*)(void *, Il2CppString*, char))(Il2CppBase() + 0xEAFE18))(0, aData, aSeparator);
	}

};

}
