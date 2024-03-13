#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageResultEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageResultEntity"));
	}


	template <typename T = DamageResultComponent*> T get_damageResult() {
		return ((T (*)(IDamageResultEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDamageResult() {
		return ((T (*)(IDamageResultEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDamageResult(DamageResultParams* newParams) {
		return ((T (*)(IDamageResultEntity*, DamageResultParams*))(Il2CppBase() + 0x0))(this, newParams);
	}
	template <typename T = void> T ReplaceDamageResult(DamageResultParams* newParams) {
		return ((T (*)(IDamageResultEntity*, DamageResultParams*))(Il2CppBase() + 0x0))(this, newParams);
	}
	template <typename T = void> T RemoveDamageResult() {
		return ((T (*)(IDamageResultEntity*))(Il2CppBase() + 0x0))(this);
	}

};

