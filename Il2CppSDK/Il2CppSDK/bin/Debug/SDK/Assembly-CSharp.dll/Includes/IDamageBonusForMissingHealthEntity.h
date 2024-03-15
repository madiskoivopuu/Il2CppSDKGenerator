#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageBonusForMissingHealthEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageBonusForMissingHealthEntity"));
	}


	template <typename R = DamageBonusForMissingHealthComponent*> R get_damageBonusForMissingHealth() {
		return ((R (*)(IDamageBonusForMissingHealthEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDamageBonusForMissingHealth() {
		return ((R (*)(IDamageBonusForMissingHealthEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDamageBonusForMissingHealth(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IDamageBonusForMissingHealthEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageBonusForMissingHealth(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IDamageBonusForMissingHealthEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageBonusForMissingHealth() {
		return ((R (*)(IDamageBonusForMissingHealthEntity*))(Il2CppBase() + 0x0))(this);
	}

};

