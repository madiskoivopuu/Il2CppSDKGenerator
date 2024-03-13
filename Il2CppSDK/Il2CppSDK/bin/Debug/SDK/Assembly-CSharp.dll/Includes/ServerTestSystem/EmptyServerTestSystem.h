#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ServerTestSystem {

class EmptyServerTestSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ServerTestSystem", "EmptyServerTestSystem"));
	}


	template <typename T = void> T ClearUserMails(int64_t userID) {
		return ((T (*)(EmptyServerTestSystem*, int64_t))(Il2CppBase() + 0x13702FC))(this, userID);
	}
	template <typename T = void> T SetUserCurrency(int64_t userID, CurrencyType* currency, int32_t newValue) {
		return ((T (*)(EmptyServerTestSystem*, int64_t, CurrencyType*, int32_t))(Il2CppBase() + 0x1370300))(this, userID, currency, newValue);
	}
	template <typename T = bool> T CheckUserCurrency(int64_t userID, CurrencyType* currency, int32_t checkValue) {
		return ((T (*)(EmptyServerTestSystem*, int64_t, CurrencyType*, int32_t))(Il2CppBase() + 0x1370304))(this, userID, currency, checkValue);
	}
	template <typename T = void> T TestBuyProductByCoins(int64_t userID, TestProductInfo* product) {
		return ((T (*)(EmptyServerTestSystem*, int64_t, TestProductInfo*))(Il2CppBase() + 0x137030C))(this, userID, product);
	}
	template <typename T = void> T TestBuyProductByCoins_1(int64_t userID) {
		return ((T (*)(EmptyServerTestSystem*, int64_t))(Il2CppBase() + 0x1370310))(this, userID);
	}
	template <typename T = void> T StopBuyProductByCoins(int64_t userID) {
		return ((T (*)(EmptyServerTestSystem*, int64_t))(Il2CppBase() + 0x1370314))(this, userID);
	}
	template <typename T = void> T OnCompleteTransaction(Il2CppString* transactionID, int32_t codeError, Il2CppString* codeMessage) {
		return ((T (*)(EmptyServerTestSystem*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x1370318))(this, transactionID, codeError, codeMessage);
	}

};

}
