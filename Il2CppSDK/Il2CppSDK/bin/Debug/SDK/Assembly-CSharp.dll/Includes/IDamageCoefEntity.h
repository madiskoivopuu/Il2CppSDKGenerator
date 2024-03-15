#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageCoefEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageCoefEntity"));
	}


	template <typename R = DamageCoefComponent*> R get_damageCoef() {
		return ((R (*)(IDamageCoefEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDamageCoef() {
		return ((R (*)(IDamageCoefEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDamageCoef(float newValue) {
		return ((R (*)(IDamageCoefEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceDamageCoef(float newValue) {
		return ((R (*)(IDamageCoefEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveDamageCoef() {
		return ((R (*)(IDamageCoefEntity*))(Il2CppBase() + 0x0))(this);
	}

};

