#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBattleStatisticTypeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBattleStatisticTypeEntity"));
	}


	template <typename T = uintptr_t> T get_battleStatisticType() {
		return ((T (*)(IBattleStatisticTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasBattleStatisticType() {
		return ((T (*)(IBattleStatisticTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddBattleStatisticType(uintptr_t newValue) {
		return ((T (*)(IBattleStatisticTypeEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceBattleStatisticType(uintptr_t newValue) {
		return ((T (*)(IBattleStatisticTypeEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveBattleStatisticType() {
		return ((T (*)(IBattleStatisticTypeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
