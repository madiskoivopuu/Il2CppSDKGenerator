#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StorePremiumUnlockWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StorePremiumUnlockWindowHelper"));
	}


	template <typename R = StorePremiumUnlockWindow*> static R ShowUnlockPremiumDetailed(UIWindowsManager* manager, int64_t storeId) {
		return ((R (*)(void *, UIWindowsManager*, int64_t))(Il2CppBase() + 0x182E9D0))(0, manager, storeId);
	}
	template <typename R = StorePremiumUnlockWindow*> static R ShowActPremiumPass(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x182EA9C))(0, manager);
	}

};

