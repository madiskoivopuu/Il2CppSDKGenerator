#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StorePremiumUnlockWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StorePremiumUnlockWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowUnlockPremiumDetailed(uintptr_t manager, int64_t storeId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x182E9D0))(0, manager, storeId);
	}
	template <typename T = uintptr_t> static T ShowActPremiumPass(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x182EA9C))(0, manager);
	}

};

}
