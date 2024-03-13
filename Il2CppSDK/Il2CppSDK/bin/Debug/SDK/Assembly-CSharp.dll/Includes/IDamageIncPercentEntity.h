#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageIncPercentEntity"));
	}


	template <typename T = DamageIncPercentComponent*> T get_damageIncPercent() {
		return ((T (*)(IDamageIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDamageIncPercent() {
		return ((T (*)(IDamageIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDamageIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IDamageIncPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IDamageIncPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageIncPercent() {
		return ((T (*)(IDamageIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

