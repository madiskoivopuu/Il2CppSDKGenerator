#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreDataExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreDataExtensions"));
	}


	template <typename T = uintptr_t> static T GetCoinPrice(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1418E78))(0, e);
	}
	template <typename T = bool> static T HasCoinPrice(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1418D40))(0, e);
	}
	template <typename T = uintptr_t> static T GetCurrencyPrice(uintptr_t e, uintptr_t currency) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x141F814))(0, e, currency);
	}
	template <typename T = uintptr_t> static T GetItemPrice(uintptr_t e, Il2CppString* itemName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x141F964))(0, e, itemName);
	}
	template <typename T = uintptr_t> static T GetCoinDiscount(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x141FA44))(0, e);
	}
	template <typename T = uintptr_t> static T GetCurrencyDiscount(uintptr_t e, uintptr_t currency) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x141FA7C))(0, e, currency);
	}
	template <typename T = uintptr_t> static T GetMaxDiscount(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x141FBDC))(0, e);
	}
	template <typename T = bool> static T HasAnyDiscount(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x141FCF0))(0, e);
	}
	template <typename T = bool> static T HasIAPDiscount(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x141FD0C))(0, e);
	}
	template <typename T = uintptr_t> static T GetIAPPrice(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1418F50))(0, e);
	}
	template <typename T = bool> static T HasIAPPrice(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1418EB8))(0, e);
	}
	template <typename T = uintptr_t> static T GetIAPDiscount(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x141FDE8))(0, e);
	}
	template <typename T = bool> static T HasFreePrice(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x141FF08))(0, e);
	}
	template <typename T = void*> static T GetPriceAndDiscountWithIndex(uintptr_t e, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1419024))(0, e, index);
	}

};

}
