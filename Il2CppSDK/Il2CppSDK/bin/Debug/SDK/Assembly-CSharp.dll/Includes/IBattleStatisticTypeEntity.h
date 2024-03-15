#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBattleStatisticTypeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBattleStatisticTypeEntity"));
	}


	template <typename R = BattleStatisticTypeComponent*> R get_battleStatisticType() {
		return ((R (*)(IBattleStatisticTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasBattleStatisticType() {
		return ((R (*)(IBattleStatisticTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddBattleStatisticType(BattleStatisticType* newValue) {
		return ((R (*)(IBattleStatisticTypeEntity*, BattleStatisticType*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceBattleStatisticType(BattleStatisticType* newValue) {
		return ((R (*)(IBattleStatisticTypeEntity*, BattleStatisticType*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveBattleStatisticType() {
		return ((R (*)(IBattleStatisticTypeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

