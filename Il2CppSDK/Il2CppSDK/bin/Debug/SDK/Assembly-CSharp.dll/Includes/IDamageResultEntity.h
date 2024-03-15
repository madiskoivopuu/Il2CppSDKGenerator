#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageResultEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageResultEntity"));
	}


	template <typename R = DamageResultComponent*> R get_damageResult() {
		return ((R (*)(IDamageResultEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDamageResult() {
		return ((R (*)(IDamageResultEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDamageResult(DamageResultParams* newParams) {
		return ((R (*)(IDamageResultEntity*, DamageResultParams*))(Il2CppBase() + 0x0))(this, newParams);
	}
	template <typename R = void> R ReplaceDamageResult(DamageResultParams* newParams) {
		return ((R (*)(IDamageResultEntity*, DamageResultParams*))(Il2CppBase() + 0x0))(this, newParams);
	}
	template <typename R = void> R RemoveDamageResult() {
		return ((R (*)(IDamageResultEntity*))(Il2CppBase() + 0x0))(this);
	}

};

