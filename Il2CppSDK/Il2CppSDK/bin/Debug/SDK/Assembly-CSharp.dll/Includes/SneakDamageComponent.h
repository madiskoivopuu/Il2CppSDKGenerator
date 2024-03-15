#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SneakDamageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SneakDamageComponent"));
	}

	template <typename R = float> R& PvP() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& PvE() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(SneakDamageComponent*, Il2CppObject*))(Il2CppBase() + 0x148482C))(this, targetObject);
	}

};

