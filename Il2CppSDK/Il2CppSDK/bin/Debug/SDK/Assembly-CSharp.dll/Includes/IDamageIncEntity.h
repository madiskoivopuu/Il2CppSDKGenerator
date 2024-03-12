#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageIncEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageIncEntity"));
	}


	template <typename T = uintptr_t> T get_damageInc() {
		return ((T (*)(IDamageIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDamageInc() {
		return ((T (*)(IDamageIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDamageInc(float newValue, uintptr_t newGroup) {
		return ((T (*)(IDamageIncEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageInc(float newValue, uintptr_t newGroup) {
		return ((T (*)(IDamageIncEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageInc() {
		return ((T (*)(IDamageIncEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
