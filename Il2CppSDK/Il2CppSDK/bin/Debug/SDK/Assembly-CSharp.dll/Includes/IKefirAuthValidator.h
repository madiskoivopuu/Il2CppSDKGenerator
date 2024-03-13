#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IKefirAuthValidator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IKefirAuthValidator"));
	}


	template <typename T = void> T UpdateOpenKey(Il2CppString* token) {
		return ((T (*)(IKefirAuthValidator*, Il2CppString*))(Il2CppBase() + 0x0))(this, token);
	}
	template <typename T = KefirAuthValidatorResult*> T Validate(Il2CppString* token) {
		return ((T (*)(IKefirAuthValidator*, Il2CppString*))(Il2CppBase() + 0x0))(this, token);
	}

};

