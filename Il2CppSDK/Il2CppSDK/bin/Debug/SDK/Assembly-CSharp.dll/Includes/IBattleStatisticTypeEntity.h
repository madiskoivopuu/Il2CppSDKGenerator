#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBattleStatisticTypeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBattleStatisticTypeEntity"));
	}


	template <typename T = BattleStatisticTypeComponent*> T get_battleStatisticType() {
		return ((T (*)(IBattleStatisticTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasBattleStatisticType() {
		return ((T (*)(IBattleStatisticTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddBattleStatisticType(BattleStatisticType* newValue) {
		return ((T (*)(IBattleStatisticTypeEntity*, BattleStatisticType*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceBattleStatisticType(BattleStatisticType* newValue) {
		return ((T (*)(IBattleStatisticTypeEntity*, BattleStatisticType*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveBattleStatisticType() {
		return ((T (*)(IBattleStatisticTypeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

