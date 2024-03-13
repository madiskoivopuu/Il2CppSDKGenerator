#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemRewardsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemRewardsWindowHelper"));
	}


	template <typename T = ItemRewardsWindow*> static T ShowItemRewardsWindow(UIWindowsManager* manager, int64_t messageId, Il2CppString* windowData) {
		return ((T (*)(void *, UIWindowsManager*, int64_t, Il2CppString*))(Il2CppBase() + 0x14E0950))(0, manager, messageId, windowData);
	}

};

