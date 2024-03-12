#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageBonusForMissingHealthEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageBonusForMissingHealthEntity"));
	}


	template <typename T = uintptr_t> T get_damageBonusForMissingHealth() {
		return ((T (*)(IDamageBonusForMissingHealthEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDamageBonusForMissingHealth() {
		return ((T (*)(IDamageBonusForMissingHealthEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDamageBonusForMissingHealth(float newValue, uintptr_t newGroup) {
		return ((T (*)(IDamageBonusForMissingHealthEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageBonusForMissingHealth(float newValue, uintptr_t newGroup) {
		return ((T (*)(IDamageBonusForMissingHealthEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageBonusForMissingHealth() {
		return ((T (*)(IDamageBonusForMissingHealthEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
