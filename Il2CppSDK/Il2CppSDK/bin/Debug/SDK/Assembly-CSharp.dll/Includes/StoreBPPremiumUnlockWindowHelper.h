#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreBPPremiumUnlockWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreBPPremiumUnlockWindowHelper"));
	}


	template <typename R = StoreBPPremiumUnlockWindow*> static R ShowUnlockBPPremiumDetailed(UIWindowsManager* manager, CurrencyType currencyType, Il2CppString* windowCaption, uintptr_t onClose) {
		return ((R (*)(void *, UIWindowsManager*, CurrencyType, Il2CppString*, uintptr_t))(Il2CppBase() + 0x14178E8))(0, manager, currencyType, windowCaption, onClose);
	}

};

