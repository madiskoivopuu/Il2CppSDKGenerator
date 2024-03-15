#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PremiumPassHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PremiumPassHelper"));
	}


	template <typename R = bool> static R HasPremiumPass(AccountEntity* account, Il2CppString* passName) {
		return ((R (*)(void *, AccountEntity*, Il2CppString*))(Il2CppBase() + 0x16E04DC))(0, account, passName);
	}
	 static ValueTuple2bool, Il2CppString*>* HasPremiumPass_1(AccountEntity* account, ICommonContexts* world, CurrencyType* currencyType) {
		return ((ValueTuple2bool, Il2CppString*>* (*)(void *, AccountEntity*, ICommonContexts*, CurrencyType*))(Il2CppBase() + 0x16E059C))(0, account, world, currencyType);
	}
	template <typename R = bool> static R AddToPremiumPass(AccountEntity* account, Il2CppString* passName) {
		return ((R (*)(void *, AccountEntity*, Il2CppString*))(Il2CppBase() + 0x16E070C))(0, account, passName);
	}
	template <typename R = bool> static R RemoveFromPremiumPass(AccountEntity* account, Il2CppString* passName) {
		return ((R (*)(void *, AccountEntity*, Il2CppString*))(Il2CppBase() + 0x16E082C))(0, account, passName);
	}
	template <typename R = void> static R InitBattlePass(AccountEntity* account, CurrencyType* currencyType, int64_t now) {
		return ((R (*)(void *, AccountEntity*, CurrencyType*, int64_t))(Il2CppBase() + 0x16E0910))(0, account, currencyType, now);
	}
	template <typename R = int64_t> static R GetBattlePassLastResetTime(AccountEntity* account, ICommonContexts* world, CurrencyType* currencyType) {
		return ((R (*)(void *, AccountEntity*, ICommonContexts*, CurrencyType*))(Il2CppBase() + 0x16E0968))(0, account, world, currencyType);
	}
	template <typename R = int64_t> static R SetBattlePassLastResetTime(AccountEntity* account, CurrencyType* currencyType, int64_t time) {
		return ((R (*)(void *, AccountEntity*, CurrencyType*, int64_t))(Il2CppBase() + 0x16E0B20))(0, account, currencyType, time);
	}
	template <typename R = int64_t> static R GetBattlePassLastActivityTime(AccountEntity* account, ICommonContexts* world, CurrencyType* currencyType) {
		return ((R (*)(void *, AccountEntity*, ICommonContexts*, CurrencyType*))(Il2CppBase() + 0x16E0B6C))(0, account, world, currencyType);
	}
	template <typename R = int64_t> static R SetBattlePassLastActivityTime(AccountEntity* account, CurrencyType* currencyType, int64_t time) {
		return ((R (*)(void *, AccountEntity*, CurrencyType*, int64_t))(Il2CppBase() + 0x16E0D24))(0, account, currencyType, time);
	}
	 static ValueTuple2int32_t, int32_t>* GetBattlePassSteps(AccountEntity* account, CurrencyType* currencyType) {
		return ((ValueTuple2int32_t, int32_t>* (*)(void *, AccountEntity*, CurrencyType*))(Il2CppBase() + 0x16E0D70))(0, account, currencyType);
	}
	template <typename R = void> static R SetBattlePassSteps(AccountEntity* account, CurrencyType* currencyType, int32_t currentStep, bool hasPremium) {
		return ((R (*)(void *, AccountEntity*, CurrencyType*, int32_t, bool))(Il2CppBase() + 0x16E0E30))(0, account, currencyType, currentStep, hasPremium);
	}

};

