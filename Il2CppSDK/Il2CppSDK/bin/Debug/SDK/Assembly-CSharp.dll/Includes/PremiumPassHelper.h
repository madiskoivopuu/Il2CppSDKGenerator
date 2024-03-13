#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PremiumPassHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PremiumPassHelper"));
	}


	template <typename T = bool> static T HasPremiumPass(AccountEntity* account, Il2CppString* passName) {
		return ((T (*)(void *, AccountEntity*, Il2CppString*))(Il2CppBase() + 0x16E04DC))(0, account, passName);
	}
	template <typename T = ValueTuple2bool, Il2CppString*>*> static T HasPremiumPass_1(AccountEntity* account, ICommonContexts* world, CurrencyType* currencyType) {
		return ((T (*)(void *, AccountEntity*, ICommonContexts*, CurrencyType*))(Il2CppBase() + 0x16E059C))(0, account, world, currencyType);
	}
	template <typename T = bool> static T AddToPremiumPass(AccountEntity* account, Il2CppString* passName) {
		return ((T (*)(void *, AccountEntity*, Il2CppString*))(Il2CppBase() + 0x16E070C))(0, account, passName);
	}
	template <typename T = bool> static T RemoveFromPremiumPass(AccountEntity* account, Il2CppString* passName) {
		return ((T (*)(void *, AccountEntity*, Il2CppString*))(Il2CppBase() + 0x16E082C))(0, account, passName);
	}
	template <typename T = void> static T InitBattlePass(AccountEntity* account, CurrencyType* currencyType, int64_t now) {
		return ((T (*)(void *, AccountEntity*, CurrencyType*, int64_t))(Il2CppBase() + 0x16E0910))(0, account, currencyType, now);
	}
	template <typename T = int64_t> static T GetBattlePassLastResetTime(AccountEntity* account, ICommonContexts* world, CurrencyType* currencyType) {
		return ((T (*)(void *, AccountEntity*, ICommonContexts*, CurrencyType*))(Il2CppBase() + 0x16E0968))(0, account, world, currencyType);
	}
	template <typename T = int64_t> static T SetBattlePassLastResetTime(AccountEntity* account, CurrencyType* currencyType, int64_t time) {
		return ((T (*)(void *, AccountEntity*, CurrencyType*, int64_t))(Il2CppBase() + 0x16E0B20))(0, account, currencyType, time);
	}
	template <typename T = int64_t> static T GetBattlePassLastActivityTime(AccountEntity* account, ICommonContexts* world, CurrencyType* currencyType) {
		return ((T (*)(void *, AccountEntity*, ICommonContexts*, CurrencyType*))(Il2CppBase() + 0x16E0B6C))(0, account, world, currencyType);
	}
	template <typename T = int64_t> static T SetBattlePassLastActivityTime(AccountEntity* account, CurrencyType* currencyType, int64_t time) {
		return ((T (*)(void *, AccountEntity*, CurrencyType*, int64_t))(Il2CppBase() + 0x16E0D24))(0, account, currencyType, time);
	}
	template <typename T = ValueTuple2int32_t, int32_t>*> static T GetBattlePassSteps(AccountEntity* account, CurrencyType* currencyType) {
		return ((T (*)(void *, AccountEntity*, CurrencyType*))(Il2CppBase() + 0x16E0D70))(0, account, currencyType);
	}
	template <typename T = void> static T SetBattlePassSteps(AccountEntity* account, CurrencyType* currencyType, int32_t currentStep, bool hasPremium) {
		return ((T (*)(void *, AccountEntity*, CurrencyType*, int32_t, bool))(Il2CppBase() + 0x16E0E30))(0, account, currencyType, currentStep, hasPremium);
	}

};

