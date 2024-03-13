#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreVIPChestDetailedWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreVIPChestDetailedWindowHelper"));
	}


	template <typename T = StoreVIPChestDetailedWindow*> static T ShowStoreVIPChestDetailed(UIWindowsManager* manager, Il2CppString* blueprintName, Category* category, bool isInfoWindow) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, Category*, bool))(Il2CppBase() + 0x184ABA0))(0, manager, blueprintName, category, isInfoWindow);
	}

};

