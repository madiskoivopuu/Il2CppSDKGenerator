#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBonusMaxHealthEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBonusMaxHealthEntity"));
	}


	template <typename R = BonusMaxHealthComponent*> R get_bonusMaxHealth() {
		return ((R (*)(IBonusMaxHealthEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasBonusMaxHealth() {
		return ((R (*)(IBonusMaxHealthEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddBonusMaxHealth(float newValue) {
		return ((R (*)(IBonusMaxHealthEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceBonusMaxHealth(float newValue) {
		return ((R (*)(IBonusMaxHealthEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveBonusMaxHealth() {
		return ((R (*)(IBonusMaxHealthEntity*))(Il2CppBase() + 0x0))(this);
	}

};

