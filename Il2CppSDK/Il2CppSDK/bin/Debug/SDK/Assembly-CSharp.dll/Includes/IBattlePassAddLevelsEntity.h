#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBattlePassAddLevelsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBattlePassAddLevelsEntity"));
	}


	template <typename T = uintptr_t> T get_battlePassAddLevels() {
		return ((T (*)(IBattlePassAddLevelsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasBattlePassAddLevels() {
		return ((T (*)(IBattlePassAddLevelsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddBattlePassAddLevels(uintptr_t newCurrencyType, int32_t newAddLevels) {
		return ((T (*)(IBattlePassAddLevelsEntity*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, newCurrencyType, newAddLevels);
	}
	template <typename T = void> T ReplaceBattlePassAddLevels(uintptr_t newCurrencyType, int32_t newAddLevels) {
		return ((T (*)(IBattlePassAddLevelsEntity*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, newCurrencyType, newAddLevels);
	}
	template <typename T = void> T RemoveBattlePassAddLevels() {
		return ((T (*)(IBattlePassAddLevelsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
