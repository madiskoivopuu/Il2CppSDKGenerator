#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageTypeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageTypeEntity"));
	}


	template <typename R = DamageTypeComponent*> R get_damageType() {
		return ((R (*)(IDamageTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDamageType() {
		return ((R (*)(IDamageTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDamageType(DamageType* newValue) {
		return ((R (*)(IDamageTypeEntity*, DamageType*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceDamageType(DamageType* newValue) {
		return ((R (*)(IDamageTypeEntity*, DamageType*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveDamageType() {
		return ((R (*)(IDamageTypeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

