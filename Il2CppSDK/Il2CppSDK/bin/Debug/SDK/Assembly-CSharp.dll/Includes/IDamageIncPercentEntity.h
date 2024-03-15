#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageIncPercentEntity"));
	}


	template <typename R = DamageIncPercentComponent*> R get_damageIncPercent() {
		return ((R (*)(IDamageIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDamageIncPercent() {
		return ((R (*)(IDamageIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDamageIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IDamageIncPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IDamageIncPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageIncPercent() {
		return ((R (*)(IDamageIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

