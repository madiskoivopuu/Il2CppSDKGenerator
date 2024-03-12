#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreExtensions"));
	}


	template <typename T = uintptr_t> static T GetData(uintptr_t e, uintptr_t ctx) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1420124))(0, e, ctx);
	}
	template <typename T = bool> static T IsProductAvailableForPurchase(uintptr_t account, uintptr_t world, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x142015C))(0, account, world, name);
	}

};

}
