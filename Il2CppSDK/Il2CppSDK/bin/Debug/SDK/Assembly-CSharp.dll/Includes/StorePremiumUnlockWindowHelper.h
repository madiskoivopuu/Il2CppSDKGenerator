#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StorePremiumUnlockWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StorePremiumUnlockWindowHelper"));
	}


	template <typename T = StorePremiumUnlockWindow*> static T ShowUnlockPremiumDetailed(UIWindowsManager* manager, int64_t storeId) {
		return ((T (*)(void *, UIWindowsManager*, int64_t))(Il2CppBase() + 0x182E9D0))(0, manager, storeId);
	}
	template <typename T = StorePremiumUnlockWindow*> static T ShowActPremiumPass(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x182EA9C))(0, manager);
	}

};

