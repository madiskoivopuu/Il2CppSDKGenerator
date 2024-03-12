#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ServerTestSystem {

class IServerTestSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ServerTestSystem", "IServerTestSystem"));
	}


	template <typename T = void> T ClearUserMails(int64_t userID) {
		return ((T (*)(IServerTestSystem*, int64_t))(Il2CppBase() + 0x0))(this, userID);
	}
	template <typename T = void> T SetUserCurrency(int64_t userID, uintptr_t currency, int32_t newValue) {
		return ((T (*)(IServerTestSystem*, int64_t, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, userID, currency, newValue);
	}
	template <typename T = bool> T CheckUserCurrency(int64_t userID, uintptr_t currency, int32_t checkValue) {
		return ((T (*)(IServerTestSystem*, int64_t, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, userID, currency, checkValue);
	}
	template <typename T = void> T TestBuyProductByCoins(int64_t userID, uintptr_t product) {
		return ((T (*)(IServerTestSystem*, int64_t, uintptr_t))(Il2CppBase() + 0x0))(this, userID, product);
	}
	template <typename T = void> T TestBuyProductByCoins_1(int64_t userID) {
		return ((T (*)(IServerTestSystem*, int64_t))(Il2CppBase() + 0x0))(this, userID);
	}
	template <typename T = void> T StopBuyProductByCoins(int64_t userID) {
		return ((T (*)(IServerTestSystem*, int64_t))(Il2CppBase() + 0x0))(this, userID);
	}
	template <typename T = void> T OnCompleteTransaction(Il2CppString* transactionID, int32_t codeError, Il2CppString* codeMessage) {
		return ((T (*)(IServerTestSystem*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x0))(this, transactionID, codeError, codeMessage);
	}

};

}
