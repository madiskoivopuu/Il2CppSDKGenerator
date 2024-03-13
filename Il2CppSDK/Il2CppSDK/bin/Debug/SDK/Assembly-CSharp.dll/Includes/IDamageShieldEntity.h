#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageShieldEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageShieldEntity"));
	}


	template <typename T = DamageShieldComponent*> T get_damageShield() {
		return ((T (*)(IDamageShieldEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDamageShield() {
		return ((T (*)(IDamageShieldEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDamageShield(DamageShieldDepends* newDepends, float newValue) {
		return ((T (*)(IDamageShieldEntity*, DamageShieldDepends*, float))(Il2CppBase() + 0x0))(this, newDepends, newValue);
	}
	template <typename T = void> T ReplaceDamageShield(DamageShieldDepends* newDepends, float newValue) {
		return ((T (*)(IDamageShieldEntity*, DamageShieldDepends*, float))(Il2CppBase() + 0x0))(this, newDepends, newValue);
	}
	template <typename T = void> T RemoveDamageShield() {
		return ((T (*)(IDamageShieldEntity*))(Il2CppBase() + 0x0))(this);
	}

};

