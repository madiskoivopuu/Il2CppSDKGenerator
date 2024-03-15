#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreDataExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreDataExtensions"));
	}


	template <typename R = Price*> static R GetCoinPrice(Store2DataEntity* e) {
		return ((R (*)(void *, Store2DataEntity*))(Il2CppBase() + 0x1418E78))(0, e);
	}
	template <typename R = bool> static R HasCoinPrice(Store2DataEntity* e) {
		return ((R (*)(void *, Store2DataEntity*))(Il2CppBase() + 0x1418D40))(0, e);
	}
	template <typename R = Price*> static R GetCurrencyPrice(Store2DataEntity* e, CurrencyType* currency) {
		return ((R (*)(void *, Store2DataEntity*, CurrencyType*))(Il2CppBase() + 0x141F814))(0, e, currency);
	}
	template <typename R = Price*> static R GetItemPrice(Store2DataEntity* e, Il2CppString* itemName) {
		return ((R (*)(void *, Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0x141F964))(0, e, itemName);
	}
	template <typename R = Discount*> static R GetCoinDiscount(Store2DataEntity* e) {
		return ((R (*)(void *, Store2DataEntity*))(Il2CppBase() + 0x141FA44))(0, e);
	}
	template <typename R = Discount*> static R GetCurrencyDiscount(Store2DataEntity* e, CurrencyType* currency) {
		return ((R (*)(void *, Store2DataEntity*, CurrencyType*))(Il2CppBase() + 0x141FA7C))(0, e, currency);
	}
	template <typename R = Discount*> static R GetMaxDiscount(Store2DataEntity* e) {
		return ((R (*)(void *, Store2DataEntity*))(Il2CppBase() + 0x141FBDC))(0, e);
	}
	template <typename R = bool> static R HasAnyDiscount(Store2DataEntity* e) {
		return ((R (*)(void *, Store2DataEntity*))(Il2CppBase() + 0x141FCF0))(0, e);
	}
	template <typename R = bool> static R HasIAPDiscount(Store2DataEntity* e) {
		return ((R (*)(void *, Store2DataEntity*))(Il2CppBase() + 0x141FD0C))(0, e);
	}
	template <typename R = Price*> static R GetIAPPrice(Store2DataEntity* e) {
		return ((R (*)(void *, Store2DataEntity*))(Il2CppBase() + 0x1418F50))(0, e);
	}
	template <typename R = bool> static R HasIAPPrice(Store2DataEntity* e) {
		return ((R (*)(void *, Store2DataEntity*))(Il2CppBase() + 0x1418EB8))(0, e);
	}
	template <typename R = Discount*> static R GetIAPDiscount(Store2DataEntity* e) {
		return ((R (*)(void *, Store2DataEntity*))(Il2CppBase() + 0x141FDE8))(0, e);
	}
	template <typename R = bool> static R HasFreePrice(Store2DataEntity* e) {
		return ((R (*)(void *, Store2DataEntity*))(Il2CppBase() + 0x141FF08))(0, e);
	}
	 static ValueTuple2Price*, Discount*>* GetPriceAndDiscountWithIndex(Store2DataEntity* e, int32_t index) {
		return ((ValueTuple2Price*, Discount*>* (*)(void *, Store2DataEntity*, int32_t))(Il2CppBase() + 0x1419024))(0, e, index);
	}

};

