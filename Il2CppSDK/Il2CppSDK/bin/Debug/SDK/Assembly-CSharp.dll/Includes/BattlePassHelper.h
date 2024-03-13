#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattlePassHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassHelper"));
	}


	template <typename T = ValueTuple2int64_t, int64_t>*> static T GetBattlePassTimers(ICommonContexts* world, BattlePassEntity* battlePass) {
		return ((T (*)(void *, ICommonContexts*, BattlePassEntity*))(Il2CppBase() + 0x1677D60))(0, world, battlePass);
	}
	template <typename T = ValueTuple3bool, bool, int32_t>*> static T GetBattlePassLimit(ICommonContexts* world, CurrencyType* currencyType) {
		return ((T (*)(void *, ICommonContexts*, CurrencyType*))(Il2CppBase() + 0x167803C))(0, world, currencyType);
	}
	template <typename T = bool> static T IsSpecialStep(BattlePassEntity* battlePass, int32_t step) {
		return ((T (*)(void *, BattlePassEntity*, int32_t))(Il2CppBase() + 0x1678318))(0, battlePass, step);
	}
	template <typename T = bool> static T IsActive(BattlePassEntity* battlePass, ICommonContexts* world) {
		return ((T (*)(void *, BattlePassEntity*, ICommonContexts*))(Il2CppBase() + 0x16783B0))(0, battlePass, world);
	}
	template <typename T = int32_t> static T GetDayIndex(BattlePassEntity* battlePass, ICommonContexts* world) {
		return ((T (*)(void *, BattlePassEntity*, ICommonContexts*))(Il2CppBase() + 0x167852C))(0, battlePass, world);
	}
	template <typename T = bool> static T CanClaimReward(BattlePassEntity* battlePass, ICommonContexts* world) {
		return ((T (*)(void *, BattlePassEntity*, ICommonContexts*))(Il2CppBase() + 0x16786BC))(0, battlePass, world);
	}
	template <typename T = bool> static T CanGetBattlePassCurrency(ICommonContexts* world, int64_t playerId, CurrencyType* currency) {
		return ((T (*)(void *, ICommonContexts*, int64_t, CurrencyType*))(Il2CppBase() + 0x1678870))(0, world, playerId, currency);
	}
	template <typename T = bool> static T CanGetBattlePassCurrency_1(BattlePassEntity* battlePass, ICommonContexts* world, int64_t playerId) {
		return ((T (*)(void *, BattlePassEntity*, ICommonContexts*, int64_t))(Il2CppBase() + 0x1678954))(0, battlePass, world, playerId);
	}
	template <typename T = Il2CppString*> static T GetBattlePassPremiumName(ICommonContexts* world, CurrencyType* currencyType) {
		return ((T (*)(void *, ICommonContexts*, CurrencyType*))(Il2CppBase() + 0x1678BCC))(0, world, currencyType);
	}
	template <typename T = Il2CppString*> static T GetBattlePassPremiumName_1(ICommonContexts* world, BattlePassEntity* battlePass) {
		return ((T (*)(void *, ICommonContexts*, BattlePassEntity*))(Il2CppBase() + 0x1678C94))(0, world, battlePass);
	}
	template <typename T = int64_t> static T GetClaimRewardOffset(BattlePassEntity* battlePass) {
		return ((T (*)(void *, BattlePassEntity*))(Il2CppBase() + 0x1675898))(0, battlePass);
	}
	template <typename T = Il2CppString*> static T GetBpAnalyticsEventName(ICommonContexts* world, CurrencyType* currencyType) {
		return ((T (*)(void *, ICommonContexts*, CurrencyType*))(Il2CppBase() + 0x1678D10))(0, world, currencyType);
	}
	template <typename T = ValueTuple2int32_t, int32_t>*> static T GetBattlePassMinMaxSteps(ICommonContexts* world, CurrencyType* currencyType) {
		return ((T (*)(void *, ICommonContexts*, CurrencyType*))(Il2CppBase() + 0x1678E5C))(0, world, currencyType);
	}

};

