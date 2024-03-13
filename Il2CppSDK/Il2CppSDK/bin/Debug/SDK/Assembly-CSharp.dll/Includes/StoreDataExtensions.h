#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreDataExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreDataExtensions"));
	}


	template <typename T = Price*> static T GetCoinPrice(Store2DataEntity* e) {
		return ((T (*)(void *, Store2DataEntity*))(Il2CppBase() + 0x1418E78))(0, e);
	}
	template <typename T = bool> static T HasCoinPrice(Store2DataEntity* e) {
		return ((T (*)(void *, Store2DataEntity*))(Il2CppBase() + 0x1418D40))(0, e);
	}
	template <typename T = Price*> static T GetCurrencyPrice(Store2DataEntity* e, CurrencyType* currency) {
		return ((T (*)(void *, Store2DataEntity*, CurrencyType*))(Il2CppBase() + 0x141F814))(0, e, currency);
	}
	template <typename T = Price*> static T GetItemPrice(Store2DataEntity* e, Il2CppString* itemName) {
		return ((T (*)(void *, Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0x141F964))(0, e, itemName);
	}
	template <typename T = Discount*> static T GetCoinDiscount(Store2DataEntity* e) {
		return ((T (*)(void *, Store2DataEntity*))(Il2CppBase() + 0x141FA44))(0, e);
	}
	template <typename T = Discount*> static T GetCurrencyDiscount(Store2DataEntity* e, CurrencyType* currency) {
		return ((T (*)(void *, Store2DataEntity*, CurrencyType*))(Il2CppBase() + 0x141FA7C))(0, e, currency);
	}
	template <typename T = Discount*> static T GetMaxDiscount(Store2DataEntity* e) {
		return ((T (*)(void *, Store2DataEntity*))(Il2CppBase() + 0x141FBDC))(0, e);
	}
	template <typename T = bool> static T HasAnyDiscount(Store2DataEntity* e) {
		return ((T (*)(void *, Store2DataEntity*))(Il2CppBase() + 0x141FCF0))(0, e);
	}
	template <typename T = bool> static T HasIAPDiscount(Store2DataEntity* e) {
		return ((T (*)(void *, Store2DataEntity*))(Il2CppBase() + 0x141FD0C))(0, e);
	}
	template <typename T = Price*> static T GetIAPPrice(Store2DataEntity* e) {
		return ((T (*)(void *, Store2DataEntity*))(Il2CppBase() + 0x1418F50))(0, e);
	}
	template <typename T = bool> static T HasIAPPrice(Store2DataEntity* e) {
		return ((T (*)(void *, Store2DataEntity*))(Il2CppBase() + 0x1418EB8))(0, e);
	}
	template <typename T = Discount*> static T GetIAPDiscount(Store2DataEntity* e) {
		return ((T (*)(void *, Store2DataEntity*))(Il2CppBase() + 0x141FDE8))(0, e);
	}
	template <typename T = bool> static T HasFreePrice(Store2DataEntity* e) {
		return ((T (*)(void *, Store2DataEntity*))(Il2CppBase() + 0x141FF08))(0, e);
	}
	template <typename T = ValueTuple2Price*, Discount*>*> static T GetPriceAndDiscountWithIndex(Store2DataEntity* e, int32_t index) {
		return ((T (*)(void *, Store2DataEntity*, int32_t))(Il2CppBase() + 0x1419024))(0, e, index);
	}

};

