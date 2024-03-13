#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TransactionHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TransactionHelper"));
	}


	template <typename T = bool> static T IsTransactionProcessing(ICommonClientWorld* world, TransactionType* type) {
		return ((T (*)(void *, ICommonClientWorld*, TransactionType*))(Il2CppBase() + 0x151DE1C))(0, world, type);
	}
	template <typename T = bool> static T CreateClientTransaction(ICommonClientWorld* world, TransactionType* type) {
		return ((T (*)(void *, ICommonClientWorld*, TransactionType*))(Il2CppBase() + 0x151E030))(0, world, type);
	}
	template <typename T = ValueTuple2Il2CppString*, Il2CppString*>*> static T GetAnalyticsData(TransactionEntity* transaction, Il2CppString* originalLabel, Il2CppString* originalSublabel) {
		return ((T (*)(void *, TransactionEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x151E1CC))(0, transaction, originalLabel, originalSublabel);
	}
	template <typename T = bool> static T IsSuccess(TransactionEntity* transaction) {
		return ((T (*)(void *, TransactionEntity*))(Il2CppBase() + 0x151E6A0))(0, transaction);
	}

};

