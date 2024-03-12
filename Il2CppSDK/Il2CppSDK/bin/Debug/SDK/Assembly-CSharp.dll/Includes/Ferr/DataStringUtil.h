#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class DataStringUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "DataStringUtil"));
	}

	template <typename T = Il2CppString*> static T& _key() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> static T Encrypt(Il2CppString* aData, Il2CppString* aKey) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xEB0914))(0, aData, aKey);
	}
	template <typename T = Il2CppString*> static T Decrypt(Il2CppString* aData, Il2CppString* aKey) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xEB0E94))(0, aData, aKey);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T SplitSmart(Il2CppString* aData, char aSeparator) {
		return ((T (*)(void *, Il2CppString*, char))(Il2CppBase() + 0xEAFE18))(0, aData, aSeparator);
	}

};

}
