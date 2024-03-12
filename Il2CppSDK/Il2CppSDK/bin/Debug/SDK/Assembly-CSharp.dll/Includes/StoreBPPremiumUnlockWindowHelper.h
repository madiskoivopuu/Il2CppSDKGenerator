#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreBPPremiumUnlockWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreBPPremiumUnlockWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowUnlockBPPremiumDetailed(uintptr_t manager, uintptr_t currencyType, Il2CppString* windowCaption, uintptr_t onClose) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x14178E8))(0, manager, currencyType, windowCaption, onClose);
	}

};

}
