#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattlePassMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassMatcher"));
	}

	 static IMatcher1<BattlePassEntity*>*& _matcherBattlePassView() {
		return *(IMatcher1<BattlePassEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<BattlePassEntity*>*& _matcherBlueprint() {
		return *(IMatcher1<BattlePassEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<BattlePassEntity*>*& _matcherClaimRewardOffset() {
		return *(IMatcher1<BattlePassEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<BattlePassEntity*>*& _matcherCurrencyType() {
		return *(IMatcher1<BattlePassEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<BattlePassEntity*>*& _matcherLevel() {
		return *(IMatcher1<BattlePassEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<BattlePassEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1<BattlePassEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<BattlePassEntity*>*& _matcherPremiumAsOneTimeReward() {
		return *(IMatcher1<BattlePassEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<BattlePassEntity*>*& _matcherReset() {
		return *(IMatcher1<BattlePassEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<BattlePassEntity*>*& _matcherResetCurrency() {
		return *(IMatcher1<BattlePassEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<BattlePassEntity*>*& _matcherShowInHUD() {
		return *(IMatcher1<BattlePassEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<BattlePassEntity*>*& _matcherTemporary() {
		return *(IMatcher1<BattlePassEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1<BattlePassEntity*>*& _matcherUnlockPremium() {
		return *(IMatcher1<BattlePassEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	 static IAllOfMatcher1<BattlePassEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<BattlePassEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x167B85C))(0, indices);
	}
	 static IAllOfMatcher1<BattlePassEntity*>* AllOf_1(Il2CppArray<IMatcher1<BattlePassEntity*>*>* matchers) {
		return ((IAllOfMatcher1<BattlePassEntity*>* (*)(void *, Il2CppArray<IMatcher1<BattlePassEntity*>*>*))(Il2CppBase() + 0x167B8D4))(0, matchers);
	}
	 static IAnyOfMatcher1<BattlePassEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<BattlePassEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x167B94C))(0, indices);
	}
	 static IAnyOfMatcher1<BattlePassEntity*>* AnyOf_1(Il2CppArray<IMatcher1<BattlePassEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<BattlePassEntity*>* (*)(void *, Il2CppArray<IMatcher1<BattlePassEntity*>*>*))(Il2CppBase() + 0x167B9C4))(0, matchers);
	}
	 static IMatcher1<BattlePassEntity*>* get_BattlePassView() {
		return ((IMatcher1<BattlePassEntity*>* (*)(void *))(Il2CppBase() + 0x167BA3C))(0);
	}
	 static IMatcher1<BattlePassEntity*>* get_Blueprint() {
		return ((IMatcher1<BattlePassEntity*>* (*)(void *))(Il2CppBase() + 0x167BBBC))(0);
	}
	 static IMatcher1<BattlePassEntity*>* get_ClaimRewardOffset() {
		return ((IMatcher1<BattlePassEntity*>* (*)(void *))(Il2CppBase() + 0x167BD58))(0);
	}
	 static IMatcher1<BattlePassEntity*>* get_CurrencyType() {
		return ((IMatcher1<BattlePassEntity*>* (*)(void *))(Il2CppBase() + 0x16752A4))(0);
	}
	 static IMatcher1<BattlePassEntity*>* get_Level() {
		return ((IMatcher1<BattlePassEntity*>* (*)(void *))(Il2CppBase() + 0x167BEF4))(0);
	}
	 static IMatcher1<BattlePassEntity*>* get_OldBlueprint() {
		return ((IMatcher1<BattlePassEntity*>* (*)(void *))(Il2CppBase() + 0x167C090))(0);
	}
	 static IMatcher1<BattlePassEntity*>* get_PremiumAsOneTimeReward() {
		return ((IMatcher1<BattlePassEntity*>* (*)(void *))(Il2CppBase() + 0x167C22C))(0);
	}
	 static IMatcher1<BattlePassEntity*>* get_Reset() {
		return ((IMatcher1<BattlePassEntity*>* (*)(void *))(Il2CppBase() + 0x167C3C8))(0);
	}
	 static IMatcher1<BattlePassEntity*>* get_ResetCurrency() {
		return ((IMatcher1<BattlePassEntity*>* (*)(void *))(Il2CppBase() + 0x167C564))(0);
	}
	 static IMatcher1<BattlePassEntity*>* get_ShowInHUD() {
		return ((IMatcher1<BattlePassEntity*>* (*)(void *))(Il2CppBase() + 0x1674F24))(0);
	}
	 static IMatcher1<BattlePassEntity*>* get_Temporary() {
		return ((IMatcher1<BattlePassEntity*>* (*)(void *))(Il2CppBase() + 0x167C700))(0);
	}
	 static IMatcher1<BattlePassEntity*>* get_UnlockPremium() {
		return ((IMatcher1<BattlePassEntity*>* (*)(void *))(Il2CppBase() + 0x167C89C))(0);
	}

};

