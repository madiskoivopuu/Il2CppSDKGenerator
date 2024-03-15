#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocalizationStringParser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocalizationStringParser"));
	}

	 Il2CppList<Il2CppString*>*& argsBuffer() {
		return *(Il2CppList<Il2CppString*>**)((uintptr_t)this + 0x10);
	}
	 Stack1int32_t>*& _bracketsBuffer() {
		return *(Stack1int32_t>**)((uintptr_t)this + 0x18);
	}

	template <typename R = Il2CppString*> R ParseKeyForArgs(Il2CppString* input, uintptr_t* args) {
		return ((R (*)(LocalizationStringParser*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x179AA34))(this, input, args);
	}
	template <typename R = Il2CppString*> R ParseMultiKeys(Il2CppString* input, Func2Il2CppString*, Il2CppString*>* getValue, uintptr_t* error) {
		return ((R (*)(LocalizationStringParser*, Il2CppString*, Func2Il2CppString*, Il2CppString*>*, uintptr_t*))(Il2CppBase() + 0x179AC60))(this, input, getValue, error);
	}

};

