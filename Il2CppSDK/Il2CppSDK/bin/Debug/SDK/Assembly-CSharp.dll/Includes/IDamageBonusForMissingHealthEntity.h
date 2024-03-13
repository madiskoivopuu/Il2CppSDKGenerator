#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageBonusForMissingHealthEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageBonusForMissingHealthEntity"));
	}


	template <typename T = DamageBonusForMissingHealthComponent*> T get_damageBonusForMissingHealth() {
		return ((T (*)(IDamageBonusForMissingHealthEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDamageBonusForMissingHealth() {
		return ((T (*)(IDamageBonusForMissingHealthEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDamageBonusForMissingHealth(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IDamageBonusForMissingHealthEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageBonusForMissingHealth(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IDamageBonusForMissingHealthEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageBonusForMissingHealth() {
		return ((T (*)(IDamageBonusForMissingHealthEntity*))(Il2CppBase() + 0x0))(this);
	}

};

