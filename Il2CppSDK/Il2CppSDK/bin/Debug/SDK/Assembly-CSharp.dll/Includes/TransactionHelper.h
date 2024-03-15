#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TransactionHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TransactionHelper"));
	}


	template <typename R = bool> static R IsTransactionProcessing(ICommonClientWorld* world, TransactionType* type) {
		return ((R (*)(void *, ICommonClientWorld*, TransactionType*))(Il2CppBase() + 0x151DE1C))(0, world, type);
	}
	template <typename R = bool> static R CreateClientTransaction(ICommonClientWorld* world, TransactionType* type) {
		return ((R (*)(void *, ICommonClientWorld*, TransactionType*))(Il2CppBase() + 0x151E030))(0, world, type);
	}
	 static ValueTuple2Il2CppString*, Il2CppString*>* GetAnalyticsData(TransactionEntity* transaction, Il2CppString* originalLabel, Il2CppString* originalSublabel) {
		return ((ValueTuple2Il2CppString*, Il2CppString*>* (*)(void *, TransactionEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x151E1CC))(0, transaction, originalLabel, originalSublabel);
	}
	template <typename R = bool> static R IsSuccess(TransactionEntity* transaction) {
		return ((R (*)(void *, TransactionEntity*))(Il2CppBase() + 0x151E6A0))(0, transaction);
	}

};

