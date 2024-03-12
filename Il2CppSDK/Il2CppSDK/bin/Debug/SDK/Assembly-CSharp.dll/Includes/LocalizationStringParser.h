#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocalizationStringParser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocalizationStringParser"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& argsBuffer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _bracketsBuffer() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T ParseKeyForArgs(Il2CppString* input, Il2CppArray<uintptr_t>** args) {
		return ((T (*)(LocalizationStringParser*, Il2CppString*, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x179AA34))(this, input, args);
	}
	template <typename T = Il2CppString*> T ParseMultiKeys(Il2CppString* input, void* getValue, uintptr_t* error) {
		return ((T (*)(LocalizationStringParser*, Il2CppString*, void*, uintptr_t*))(Il2CppBase() + 0x179AC60))(this, input, getValue, error);
	}

};

}
