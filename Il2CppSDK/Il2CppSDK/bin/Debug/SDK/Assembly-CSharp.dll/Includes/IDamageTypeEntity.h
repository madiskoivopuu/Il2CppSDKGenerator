#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageTypeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageTypeEntity"));
	}


	template <typename T = DamageTypeComponent*> T get_damageType() {
		return ((T (*)(IDamageTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDamageType() {
		return ((T (*)(IDamageTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDamageType(DamageType* newValue) {
		return ((T (*)(IDamageTypeEntity*, DamageType*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceDamageType(DamageType* newValue) {
		return ((T (*)(IDamageTypeEntity*, DamageType*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveDamageType() {
		return ((T (*)(IDamageTypeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

