#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageIncEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageIncEntity"));
	}


	template <typename R = DamageIncComponent*> R get_damageInc() {
		return ((R (*)(IDamageIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDamageInc() {
		return ((R (*)(IDamageIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDamageInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IDamageIncEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IDamageIncEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageInc() {
		return ((R (*)(IDamageIncEntity*))(Il2CppBase() + 0x0))(this);
	}

};

