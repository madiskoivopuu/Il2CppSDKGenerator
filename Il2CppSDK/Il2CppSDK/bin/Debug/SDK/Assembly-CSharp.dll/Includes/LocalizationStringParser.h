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
	template <typename T = Stack1int32_t>*> T& _bracketsBuffer() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T ParseKeyForArgs(Il2CppString* input, uintptr_t* args) {
		return ((T (*)(LocalizationStringParser*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x179AA34))(this, input, args);
	}
	template <typename T = Il2CppString*> T ParseMultiKeys(Il2CppString* input, Func2Il2CppString*, Il2CppString*>* getValue, uintptr_t* error) {
		return ((T (*)(LocalizationStringParser*, Il2CppString*, Func2Il2CppString*, Il2CppString*>*, uintptr_t*))(Il2CppBase() + 0x179AC60))(this, input, getValue, error);
	}

};

