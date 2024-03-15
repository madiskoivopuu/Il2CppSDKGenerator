#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattlePassHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassHelper"));
	}


	 static ValueTuple2int64_t, int64_t>* GetBattlePassTimers(ICommonContexts* world, BattlePassEntity* battlePass) {
		return ((ValueTuple2int64_t, int64_t>* (*)(void *, ICommonContexts*, BattlePassEntity*))(Il2CppBase() + 0x1677D60))(0, world, battlePass);
	}
	 static ValueTuple3bool, bool, int32_t>* GetBattlePassLimit(ICommonContexts* world, CurrencyType* currencyType) {
		return ((ValueTuple3bool, bool, int32_t>* (*)(void *, ICommonContexts*, CurrencyType*))(Il2CppBase() + 0x167803C))(0, world, currencyType);
	}
	template <typename R = bool> static R IsSpecialStep(BattlePassEntity* battlePass, int32_t step) {
		return ((R (*)(void *, BattlePassEntity*, int32_t))(Il2CppBase() + 0x1678318))(0, battlePass, step);
	}
	template <typename R = bool> static R IsActive(BattlePassEntity* battlePass, ICommonContexts* world) {
		return ((R (*)(void *, BattlePassEntity*, ICommonContexts*))(Il2CppBase() + 0x16783B0))(0, battlePass, world);
	}
	template <typename R = int32_t> static R GetDayIndex(BattlePassEntity* battlePass, ICommonContexts* world) {
		return ((R (*)(void *, BattlePassEntity*, ICommonContexts*))(Il2CppBase() + 0x167852C))(0, battlePass, world);
	}
	template <typename R = bool> static R CanClaimReward(BattlePassEntity* battlePass, ICommonContexts* world) {
		return ((R (*)(void *, BattlePassEntity*, ICommonContexts*))(Il2CppBase() + 0x16786BC))(0, battlePass, world);
	}
	template <typename R = bool> static R CanGetBattlePassCurrency(ICommonContexts* world, int64_t playerId, CurrencyType* currency) {
		return ((R (*)(void *, ICommonContexts*, int64_t, CurrencyType*))(Il2CppBase() + 0x1678870))(0, world, playerId, currency);
	}
	template <typename R = bool> static R CanGetBattlePassCurrency_1(BattlePassEntity* battlePass, ICommonContexts* world, int64_t playerId) {
		return ((R (*)(void *, BattlePassEntity*, ICommonContexts*, int64_t))(Il2CppBase() + 0x1678954))(0, battlePass, world, playerId);
	}
	template <typename R = Il2CppString*> static R GetBattlePassPremiumName(ICommonContexts* world, CurrencyType* currencyType) {
		return ((R (*)(void *, ICommonContexts*, CurrencyType*))(Il2CppBase() + 0x1678BCC))(0, world, currencyType);
	}
	template <typename R = Il2CppString*> static R GetBattlePassPremiumName_1(ICommonContexts* world, BattlePassEntity* battlePass) {
		return ((R (*)(void *, ICommonContexts*, BattlePassEntity*))(Il2CppBase() + 0x1678C94))(0, world, battlePass);
	}
	template <typename R = int64_t> static R GetClaimRewardOffset(BattlePassEntity* battlePass) {
		return ((R (*)(void *, BattlePassEntity*))(Il2CppBase() + 0x1675898))(0, battlePass);
	}
	template <typename R = Il2CppString*> static R GetBpAnalyticsEventName(ICommonContexts* world, CurrencyType* currencyType) {
		return ((R (*)(void *, ICommonContexts*, CurrencyType*))(Il2CppBase() + 0x1678D10))(0, world, currencyType);
	}
	 static ValueTuple2int32_t, int32_t>* GetBattlePassMinMaxSteps(ICommonContexts* world, CurrencyType* currencyType) {
		return ((ValueTuple2int32_t, int32_t>* (*)(void *, ICommonContexts*, CurrencyType*))(Il2CppBase() + 0x1678E5C))(0, world, currencyType);
	}

};

