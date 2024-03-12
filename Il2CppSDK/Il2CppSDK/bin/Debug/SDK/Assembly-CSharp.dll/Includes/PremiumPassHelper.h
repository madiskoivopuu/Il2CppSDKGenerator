#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PremiumPassHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PremiumPassHelper"));
	}


	template <typename T = bool> static T HasPremiumPass(uintptr_t account, Il2CppString* passName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x16E04DC))(0, account, passName);
	}
	template <typename T = void*> static T HasPremiumPass_1(uintptr_t account, uintptr_t world, uintptr_t currencyType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x16E059C))(0, account, world, currencyType);
	}
	template <typename T = bool> static T AddToPremiumPass(uintptr_t account, Il2CppString* passName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x16E070C))(0, account, passName);
	}
	template <typename T = bool> static T RemoveFromPremiumPass(uintptr_t account, Il2CppString* passName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x16E082C))(0, account, passName);
	}
	template <typename T = void> static T InitBattlePass(uintptr_t account, uintptr_t currencyType, int64_t now) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x16E0910))(0, account, currencyType, now);
	}
	template <typename T = int64_t> static T GetBattlePassLastResetTime(uintptr_t account, uintptr_t world, uintptr_t currencyType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x16E0968))(0, account, world, currencyType);
	}
	template <typename T = int64_t> static T SetBattlePassLastResetTime(uintptr_t account, uintptr_t currencyType, int64_t time) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x16E0B20))(0, account, currencyType, time);
	}
	template <typename T = int64_t> static T GetBattlePassLastActivityTime(uintptr_t account, uintptr_t world, uintptr_t currencyType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x16E0B6C))(0, account, world, currencyType);
	}
	template <typename T = int64_t> static T SetBattlePassLastActivityTime(uintptr_t account, uintptr_t currencyType, int64_t time) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x16E0D24))(0, account, currencyType, time);
	}
	template <typename T = void*> static T GetBattlePassSteps(uintptr_t account, uintptr_t currencyType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16E0D70))(0, account, currencyType);
	}
	template <typename T = void> static T SetBattlePassSteps(uintptr_t account, uintptr_t currencyType, int32_t currentStep, bool hasPremium) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x16E0E30))(0, account, currencyType, currentStep, hasPremium);
	}

};

}
