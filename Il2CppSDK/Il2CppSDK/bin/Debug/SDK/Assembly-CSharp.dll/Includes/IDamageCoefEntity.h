#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageCoefEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageCoefEntity"));
	}


	template <typename T = DamageCoefComponent*> T get_damageCoef() {
		return ((T (*)(IDamageCoefEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDamageCoef() {
		return ((T (*)(IDamageCoefEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDamageCoef(float newValue) {
		return ((T (*)(IDamageCoefEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceDamageCoef(float newValue) {
		return ((T (*)(IDamageCoefEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveDamageCoef() {
		return ((T (*)(IDamageCoefEntity*))(Il2CppBase() + 0x0))(this);
	}

};

