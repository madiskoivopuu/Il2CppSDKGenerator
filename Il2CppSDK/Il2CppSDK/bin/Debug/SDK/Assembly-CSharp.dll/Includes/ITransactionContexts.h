#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITransactionContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITransactionContexts"));
	}


	template <typename R = TransactionContext*> R get_transactions() {
		return ((R (*)(ITransactionContexts*))(Il2CppBase() + 0x0))(this);
	}

};

