#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattlePassMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassMatcher"));
	}

	template <typename T = IMatcher1BattlePassEntity*>*> static T& _matcherBattlePassView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1BattlePassEntity*>*> static T& _matcherBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1BattlePassEntity*>*> static T& _matcherClaimRewardOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1BattlePassEntity*>*> static T& _matcherCurrencyType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = IMatcher1BattlePassEntity*>*> static T& _matcherLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = IMatcher1BattlePassEntity*>*> static T& _matcherOldBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = IMatcher1BattlePassEntity*>*> static T& _matcherPremiumAsOneTimeReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = IMatcher1BattlePassEntity*>*> static T& _matcherReset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = IMatcher1BattlePassEntity*>*> static T& _matcherResetCurrency() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = IMatcher1BattlePassEntity*>*> static T& _matcherShowInHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = IMatcher1BattlePassEntity*>*> static T& _matcherTemporary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = IMatcher1BattlePassEntity*>*> static T& _matcherUnlockPremium() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = IAllOfMatcher1BattlePassEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x167B85C))(0, indices);
	}
	template <typename T = IAllOfMatcher1BattlePassEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x167B8D4))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1BattlePassEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x167B94C))(0, indices);
	}
	template <typename T = IAnyOfMatcher1BattlePassEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x167B9C4))(0, matchers);
	}
	template <typename T = IMatcher1BattlePassEntity*>*> static T get_BattlePassView() {
		return ((T (*)(void *))(Il2CppBase() + 0x167BA3C))(0);
	}
	template <typename T = IMatcher1BattlePassEntity*>*> static T get_Blueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x167BBBC))(0);
	}
	template <typename T = IMatcher1BattlePassEntity*>*> static T get_ClaimRewardOffset() {
		return ((T (*)(void *))(Il2CppBase() + 0x167BD58))(0);
	}
	template <typename T = IMatcher1BattlePassEntity*>*> static T get_CurrencyType() {
		return ((T (*)(void *))(Il2CppBase() + 0x16752A4))(0);
	}
	template <typename T = IMatcher1BattlePassEntity*>*> static T get_Level() {
		return ((T (*)(void *))(Il2CppBase() + 0x167BEF4))(0);
	}
	template <typename T = IMatcher1BattlePassEntity*>*> static T get_OldBlueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x167C090))(0);
	}
	template <typename T = IMatcher1BattlePassEntity*>*> static T get_PremiumAsOneTimeReward() {
		return ((T (*)(void *))(Il2CppBase() + 0x167C22C))(0);
	}
	template <typename T = IMatcher1BattlePassEntity*>*> static T get_Reset() {
		return ((T (*)(void *))(Il2CppBase() + 0x167C3C8))(0);
	}
	template <typename T = IMatcher1BattlePassEntity*>*> static T get_ResetCurrency() {
		return ((T (*)(void *))(Il2CppBase() + 0x167C564))(0);
	}
	template <typename T = IMatcher1BattlePassEntity*>*> static T get_ShowInHUD() {
		return ((T (*)(void *))(Il2CppBase() + 0x1674F24))(0);
	}
	template <typename T = IMatcher1BattlePassEntity*>*> static T get_Temporary() {
		return ((T (*)(void *))(Il2CppBase() + 0x167C700))(0);
	}
	template <typename T = IMatcher1BattlePassEntity*>*> static T get_UnlockPremium() {
		return ((T (*)(void *))(Il2CppBase() + 0x167C89C))(0);
	}

};

