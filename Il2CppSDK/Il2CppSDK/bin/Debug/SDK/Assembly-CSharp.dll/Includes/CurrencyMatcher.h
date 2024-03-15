#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CurrencyMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrencyMatcher"));
	}

	 static IMatcher1<CurrencyEntity*>*& _matcherBattlePassCurrency() {
		return *(IMatcher1<CurrencyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<CurrencyEntity*>*& _matcherBlueprint() {
		return *(IMatcher1<CurrencyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<CurrencyEntity*>*& _matcherCurrencyType() {
		return *(IMatcher1<CurrencyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<CurrencyEntity*>*& _matcherGlobalTourney() {
		return *(IMatcher1<CurrencyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<CurrencyEntity*>*& _matcherItems() {
		return *(IMatcher1<CurrencyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<CurrencyEntity*>*& _matcherLimited() {
		return *(IMatcher1<CurrencyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<CurrencyEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1<CurrencyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<CurrencyEntity*>*& _matcherResetOnSeason() {
		return *(IMatcher1<CurrencyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	 static IMatcher1<CurrencyEntity*>* get_BattlePassCurrency() {
		return ((IMatcher1<CurrencyEntity*>* (*)(void *))(Il2CppBase() + 0x1BD61DC))(0);
	}
	 static IMatcher1<CurrencyEntity*>* get_Blueprint() {
		return ((IMatcher1<CurrencyEntity*>* (*)(void *))(Il2CppBase() + 0x1BD635C))(0);
	}
	 static IMatcher1<CurrencyEntity*>* get_CurrencyType() {
		return ((IMatcher1<CurrencyEntity*>* (*)(void *))(Il2CppBase() + 0x1BCFB20))(0);
	}
	 static IMatcher1<CurrencyEntity*>* get_GlobalTourney() {
		return ((IMatcher1<CurrencyEntity*>* (*)(void *))(Il2CppBase() + 0x1BD64F8))(0);
	}
	 static IMatcher1<CurrencyEntity*>* get_Items() {
		return ((IMatcher1<CurrencyEntity*>* (*)(void *))(Il2CppBase() + 0x1BD6694))(0);
	}
	 static IMatcher1<CurrencyEntity*>* get_Limited() {
		return ((IMatcher1<CurrencyEntity*>* (*)(void *))(Il2CppBase() + 0x1BD6830))(0);
	}
	 static IMatcher1<CurrencyEntity*>* get_OldBlueprint() {
		return ((IMatcher1<CurrencyEntity*>* (*)(void *))(Il2CppBase() + 0x1BD69CC))(0);
	}
	 static IMatcher1<CurrencyEntity*>* get_ResetOnSeason() {
		return ((IMatcher1<CurrencyEntity*>* (*)(void *))(Il2CppBase() + 0x1BD6B68))(0);
	}
	 static IAllOfMatcher1<CurrencyEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<CurrencyEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1BD6D04))(0, indices);
	}
	 static IAllOfMatcher1<CurrencyEntity*>* AllOf_1(Il2CppArray<IMatcher1<CurrencyEntity*>*>* matchers) {
		return ((IAllOfMatcher1<CurrencyEntity*>* (*)(void *, Il2CppArray<IMatcher1<CurrencyEntity*>*>*))(Il2CppBase() + 0x1BD6D7C))(0, matchers);
	}
	 static IAnyOfMatcher1<CurrencyEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<CurrencyEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1BD6DF4))(0, indices);
	}
	 static IAnyOfMatcher1<CurrencyEntity*>* AnyOf_1(Il2CppArray<IMatcher1<CurrencyEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<CurrencyEntity*>* (*)(void *, Il2CppArray<IMatcher1<CurrencyEntity*>*>*))(Il2CppBase() + 0x1BD6E6C))(0, matchers);
	}

};

