#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITransactionContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITransactionContexts"));
	}


	template <typename T = uintptr_t> T get_transactions() {
		return ((T (*)(ITransactionContexts*))(Il2CppBase() + 0x0))(this);
	}

};

}
