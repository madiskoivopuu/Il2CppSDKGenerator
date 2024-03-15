#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ServerTestSystem {

class EmptyServerTestSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ServerTestSystem", "EmptyServerTestSystem"));
	}


	template <typename R = void> R ClearUserMails(int64_t userID) {
		return ((R (*)(EmptyServerTestSystem*, int64_t))(Il2CppBase() + 0x13702FC))(this, userID);
	}
	template <typename R = void> R SetUserCurrency(int64_t userID, CurrencyType currency, int32_t newValue) {
		return ((R (*)(EmptyServerTestSystem*, int64_t, CurrencyType, int32_t))(Il2CppBase() + 0x1370300))(this, userID, currency, newValue);
	}
	template <typename R = bool> R CheckUserCurrency(int64_t userID, CurrencyType currency, int32_t checkValue) {
		return ((R (*)(EmptyServerTestSystem*, int64_t, CurrencyType, int32_t))(Il2CppBase() + 0x1370304))(this, userID, currency, checkValue);
	}
	template <typename R = void> R TestBuyProductByCoins(int64_t userID, ServerTestSystem::TestProductInfo product) {
		return ((R (*)(EmptyServerTestSystem*, int64_t, ServerTestSystem::TestProductInfo))(Il2CppBase() + 0x137030C))(this, userID, product);
	}
	template <typename R = void> R TestBuyProductByCoins_1(int64_t userID) {
		return ((R (*)(EmptyServerTestSystem*, int64_t))(Il2CppBase() + 0x1370310))(this, userID);
	}
	template <typename R = void> R StopBuyProductByCoins(int64_t userID) {
		return ((R (*)(EmptyServerTestSystem*, int64_t))(Il2CppBase() + 0x1370314))(this, userID);
	}
	template <typename R = void> R OnCompleteTransaction(Il2CppString* transactionID, int32_t codeError, Il2CppString* codeMessage) {
		return ((R (*)(EmptyServerTestSystem*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x1370318))(this, transactionID, codeError, codeMessage);
	}

};

}
