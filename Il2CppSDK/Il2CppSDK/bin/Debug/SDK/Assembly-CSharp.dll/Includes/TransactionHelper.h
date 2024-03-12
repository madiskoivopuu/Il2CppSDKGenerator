#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TransactionHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TransactionHelper"));
	}


	template <typename T = bool> static T IsTransactionProcessing(uintptr_t world, uintptr_t type) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x151DE1C))(0, world, type);
	}
	template <typename T = bool> static T CreateClientTransaction(uintptr_t world, uintptr_t type) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x151E030))(0, world, type);
	}
	template <typename T = void*> static T GetAnalyticsData(uintptr_t transaction, Il2CppString* originalLabel, Il2CppString* originalSublabel) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x151E1CC))(0, transaction, originalLabel, originalSublabel);
	}
	template <typename T = bool> static T IsSuccess(uintptr_t transaction) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x151E6A0))(0, transaction);
	}

};

}
