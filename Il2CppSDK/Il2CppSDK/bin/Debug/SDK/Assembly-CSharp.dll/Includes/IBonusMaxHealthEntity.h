#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBonusMaxHealthEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBonusMaxHealthEntity"));
	}


	template <typename T = uintptr_t> T get_bonusMaxHealth() {
		return ((T (*)(IBonusMaxHealthEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasBonusMaxHealth() {
		return ((T (*)(IBonusMaxHealthEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddBonusMaxHealth(float newValue) {
		return ((T (*)(IBonusMaxHealthEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceBonusMaxHealth(float newValue) {
		return ((T (*)(IBonusMaxHealthEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveBonusMaxHealth() {
		return ((T (*)(IBonusMaxHealthEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
