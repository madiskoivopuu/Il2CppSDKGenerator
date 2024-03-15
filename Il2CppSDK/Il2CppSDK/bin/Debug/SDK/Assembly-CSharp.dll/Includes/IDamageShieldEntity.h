#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageShieldEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageShieldEntity"));
	}


	template <typename R = DamageShieldComponent*> R get_damageShield() {
		return ((R (*)(IDamageShieldEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDamageShield() {
		return ((R (*)(IDamageShieldEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDamageShield(DamageShieldDepends* newDepends, float newValue) {
		return ((R (*)(IDamageShieldEntity*, DamageShieldDepends*, float))(Il2CppBase() + 0x0))(this, newDepends, newValue);
	}
	template <typename R = void> R ReplaceDamageShield(DamageShieldDepends* newDepends, float newValue) {
		return ((R (*)(IDamageShieldEntity*, DamageShieldDepends*, float))(Il2CppBase() + 0x0))(this, newDepends, newValue);
	}
	template <typename R = void> R RemoveDamageShield() {
		return ((R (*)(IDamageShieldEntity*))(Il2CppBase() + 0x0))(this);
	}

};

