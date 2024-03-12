#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemRewardsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemRewardsWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowItemRewardsWindow(uintptr_t manager, int64_t messageId, Il2CppString* windowData) {
		return ((T (*)(void *, uintptr_t, int64_t, Il2CppString*))(Il2CppBase() + 0x14E0950))(0, manager, messageId, windowData);
	}

};

}
