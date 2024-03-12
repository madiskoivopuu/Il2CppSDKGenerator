#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KefirIdAccountsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KefirIdAccountsWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowKefirIdAccounts(uintptr_t manager, Il2CppString* kefirId, Il2CppList<uintptr_t>* players, bool isBonusSent) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x14E9924))(0, manager, kefirId, players, isBonusSent);
	}

};

}
