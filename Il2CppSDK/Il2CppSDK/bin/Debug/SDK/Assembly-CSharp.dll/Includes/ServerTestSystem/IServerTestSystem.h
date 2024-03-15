#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ServerTestSystem {

class IServerTestSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ServerTestSystem", "IServerTestSystem"));
	}


	template <typename R = void> R ClearUserMails(int64_t userID) {
		return ((R (*)(IServerTestSystem*, int64_t))(Il2CppBase() + 0x0))(this, userID);
	}
	template <typename R = void> R SetUserCurrency(int64_t userID, CurrencyType* currency, int32_t newValue) {
		return ((R (*)(IServerTestSystem*, int64_t, CurrencyType*, int32_t))(Il2CppBase() + 0x0))(this, userID, currency, newValue);
	}
	template <typename R = bool> R CheckUserCurrency(int64_t userID, CurrencyType* currency, int32_t checkValue) {
		return ((R (*)(IServerTestSystem*, int64_t, CurrencyType*, int32_t))(Il2CppBase() + 0x0))(this, userID, currency, checkValue);
	}
	template <typename R = void> R TestBuyProductByCoins(int64_t userID, ServerTestSystem::TestProductInfo* product) {
		return ((R (*)(IServerTestSystem*, int64_t, ServerTestSystem::TestProductInfo*))(Il2CppBase() + 0x0))(this, userID, product);
	}
	template <typename R = void> R TestBuyProductByCoins_1(int64_t userID) {
		return ((R (*)(IServerTestSystem*, int64_t))(Il2CppBase() + 0x0))(this, userID);
	}
	template <typename R = void> R StopBuyProductByCoins(int64_t userID) {
		return ((R (*)(IServerTestSystem*, int64_t))(Il2CppBase() + 0x0))(this, userID);
	}
	template <typename R = void> R OnCompleteTransaction(Il2CppString* transactionID, int32_t codeError, Il2CppString* codeMessage) {
		return ((R (*)(IServerTestSystem*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, transactionID, codeError, codeMessage);
	}

};

}
