#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBattlePassAddLevelsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBattlePassAddLevelsEntity"));
	}


	template <typename R = BattlePassAddLevelsComponent*> R get_battlePassAddLevels() {
		return ((R (*)(IBattlePassAddLevelsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasBattlePassAddLevels() {
		return ((R (*)(IBattlePassAddLevelsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddBattlePassAddLevels(CurrencyType* newCurrencyType, int32_t newAddLevels) {
		return ((R (*)(IBattlePassAddLevelsEntity*, CurrencyType*, int32_t))(Il2CppBase() + 0x0))(this, newCurrencyType, newAddLevels);
	}
	template <typename R = void> R ReplaceBattlePassAddLevels(CurrencyType* newCurrencyType, int32_t newAddLevels) {
		return ((R (*)(IBattlePassAddLevelsEntity*, CurrencyType*, int32_t))(Il2CppBase() + 0x0))(this, newCurrencyType, newAddLevels);
	}
	template <typename R = void> R RemoveBattlePassAddLevels() {
		return ((R (*)(IBattlePassAddLevelsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

