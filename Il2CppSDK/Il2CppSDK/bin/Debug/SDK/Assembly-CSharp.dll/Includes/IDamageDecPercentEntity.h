#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageDecPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageDecPercentEntity"));
	}


	template <typename T = DamageDecPercentComponent*> T get_damageDecPercent() {
		return ((T (*)(IDamageDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDamageDecPercent() {
		return ((T (*)(IDamageDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDamageDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IDamageDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IDamageDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageDecPercent() {
		return ((T (*)(IDamageDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

