#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IKefirAuthValidator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IKefirAuthValidator"));
	}


	template <typename R = void> R UpdateOpenKey(Il2CppString* token) {
		return ((R (*)(IKefirAuthValidator*, Il2CppString*))(Il2CppBase() + 0x0))(this, token);
	}
	template <typename R = KefirAuthValidatorResult*> R Validate(Il2CppString* token) {
		return ((R (*)(IKefirAuthValidator*, Il2CppString*))(Il2CppBase() + 0x0))(this, token);
	}

};

