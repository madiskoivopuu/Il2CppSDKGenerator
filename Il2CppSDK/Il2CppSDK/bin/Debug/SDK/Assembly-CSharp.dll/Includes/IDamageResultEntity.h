#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageResultEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageResultEntity"));
	}


	template <typename T = uintptr_t> T get_damageResult() {
		return ((T (*)(IDamageResultEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDamageResult() {
		return ((T (*)(IDamageResultEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDamageResult(uintptr_t newParams) {
		return ((T (*)(IDamageResultEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newParams);
	}
	template <typename T = void> T ReplaceDamageResult(uintptr_t newParams) {
		return ((T (*)(IDamageResultEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newParams);
	}
	template <typename T = void> T RemoveDamageResult() {
		return ((T (*)(IDamageResultEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
