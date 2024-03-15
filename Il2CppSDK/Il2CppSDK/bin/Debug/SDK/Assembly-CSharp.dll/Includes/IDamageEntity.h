#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageEntity"));
	}


	template <typename R = DamageComponent*> R get_damage() {
		return ((R (*)(IDamageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDamage() {
		return ((R (*)(IDamageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDamage(float newValue) {
		return ((R (*)(IDamageEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceDamage(float newValue) {
		return ((R (*)(IDamageEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveDamage() {
		return ((R (*)(IDamageEntity*))(Il2CppBase() + 0x0))(this);
	}

};

