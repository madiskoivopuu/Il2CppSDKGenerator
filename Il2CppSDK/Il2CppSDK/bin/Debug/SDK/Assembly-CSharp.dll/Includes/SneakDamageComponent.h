#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SneakDamageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SneakDamageComponent"));
	}

	template <typename T = float> T& PvP() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& PvE() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(SneakDamageComponent*, uintptr_t))(Il2CppBase() + 0x148482C))(this, targetObject);
	}

};

}
