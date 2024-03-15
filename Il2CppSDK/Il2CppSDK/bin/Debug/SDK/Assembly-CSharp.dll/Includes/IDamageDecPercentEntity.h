#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageDecPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageDecPercentEntity"));
	}


	template <typename R = DamageDecPercentComponent*> R get_damageDecPercent() {
		return ((R (*)(IDamageDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDamageDecPercent() {
		return ((R (*)(IDamageDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDamageDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IDamageDecPercentEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IDamageDecPercentEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageDecPercent() {
		return ((R (*)(IDamageDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

