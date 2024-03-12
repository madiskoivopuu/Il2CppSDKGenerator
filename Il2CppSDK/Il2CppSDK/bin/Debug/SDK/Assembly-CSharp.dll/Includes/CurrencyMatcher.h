#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CurrencyMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrencyMatcher"));
	}

	template <typename T = void*> static T& _matcherBattlePassCurrency() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _matcherBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& _matcherCurrencyType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& _matcherGlobalTourney() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& _matcherItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& _matcherLimited() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& _matcherOldBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& _matcherResetOnSeason() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void*> static T get_BattlePassCurrency() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BD61DC))(0);
	}
	template <typename T = void*> static T get_Blueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BD635C))(0);
	}
	template <typename T = void*> static T get_CurrencyType() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BCFB20))(0);
	}
	template <typename T = void*> static T get_GlobalTourney() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BD64F8))(0);
	}
	template <typename T = void*> static T get_Items() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BD6694))(0);
	}
	template <typename T = void*> static T get_Limited() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BD6830))(0);
	}
	template <typename T = void*> static T get_OldBlueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BD69CC))(0);
	}
	template <typename T = void*> static T get_ResetOnSeason() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BD6B68))(0);
	}
	template <typename T = void*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1BD6D04))(0, indices);
	}
	template <typename T = void*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1BD6D7C))(0, matchers);
	}
	template <typename T = void*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1BD6DF4))(0, indices);
	}
	template <typename T = void*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1BD6E6C))(0, matchers);
	}

};

}
