#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageIncPercentEntity"));
	}


	template <typename T = uintptr_t> T get_damageIncPercent() {
		return ((T (*)(IDamageIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDamageIncPercent() {
		return ((T (*)(IDamageIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDamageIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IDamageIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IDamageIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageIncPercent() {
		return ((T (*)(IDamageIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
