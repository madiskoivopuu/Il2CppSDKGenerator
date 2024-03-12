#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageBlockIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageBlockIncPercentEntity"));
	}


	template <typename T = uintptr_t> T get_damageBlockIncPercent() {
		return ((T (*)(IDamageBlockIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDamageBlockIncPercent() {
		return ((T (*)(IDamageBlockIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDamageBlockIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IDamageBlockIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageBlockIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IDamageBlockIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageBlockIncPercent() {
		return ((T (*)(IDamageBlockIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
