#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattlePassHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassHelper"));
	}


	template <typename T = void*> static T GetBattlePassTimers(uintptr_t world, uintptr_t battlePass) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1677D60))(0, world, battlePass);
	}
	template <typename T = void*> static T GetBattlePassLimit(uintptr_t world, uintptr_t currencyType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x167803C))(0, world, currencyType);
	}
	template <typename T = bool> static T IsSpecialStep(uintptr_t battlePass, int32_t step) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1678318))(0, battlePass, step);
	}
	template <typename T = bool> static T IsActive(uintptr_t battlePass, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16783B0))(0, battlePass, world);
	}
	template <typename T = int32_t> static T GetDayIndex(uintptr_t battlePass, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x167852C))(0, battlePass, world);
	}
	template <typename T = bool> static T CanClaimReward(uintptr_t battlePass, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16786BC))(0, battlePass, world);
	}
	template <typename T = bool> static T CanGetBattlePassCurrency(uintptr_t world, int64_t playerId, uintptr_t currency) {
		return ((T (*)(void *, uintptr_t, int64_t, uintptr_t))(Il2CppBase() + 0x1678870))(0, world, playerId, currency);
	}
	template <typename T = bool> static T CanGetBattlePassCurrency_1(uintptr_t battlePass, uintptr_t world, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x1678954))(0, battlePass, world, playerId);
	}
	template <typename T = Il2CppString*> static T GetBattlePassPremiumName(uintptr_t world, uintptr_t currencyType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1678BCC))(0, world, currencyType);
	}
	template <typename T = Il2CppString*> static T GetBattlePassPremiumName_1(uintptr_t world, uintptr_t battlePass) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1678C94))(0, world, battlePass);
	}
	template <typename T = int64_t> static T GetClaimRewardOffset(uintptr_t battlePass) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1675898))(0, battlePass);
	}
	template <typename T = Il2CppString*> static T GetBpAnalyticsEventName(uintptr_t world, uintptr_t currencyType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1678D10))(0, world, currencyType);
	}
	template <typename T = void*> static T GetBattlePassMinMaxSteps(uintptr_t world, uintptr_t currencyType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1678E5C))(0, world, currencyType);
	}

};

}
