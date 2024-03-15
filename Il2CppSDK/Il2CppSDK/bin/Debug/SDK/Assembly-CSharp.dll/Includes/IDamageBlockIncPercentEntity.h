#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageBlockIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageBlockIncPercentEntity"));
	}


	template <typename R = DamageBlockIncPercentComponent*> R get_damageBlockIncPercent() {
		return ((R (*)(IDamageBlockIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDamageBlockIncPercent() {
		return ((R (*)(IDamageBlockIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDamageBlockIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IDamageBlockIncPercentEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageBlockIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IDamageBlockIncPercentEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageBlockIncPercent() {
		return ((R (*)(IDamageBlockIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

