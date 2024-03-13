#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreGachaDetailedWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreGachaDetailedWindowHelper"));
	}


	template <typename T = StoreGachaDetailedWindow*> static T ShowStoreGachaDetailed(UIWindowsManager* manager, Il2CppString* blueprintName, Category* category, bool isInfoWindow) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, Category*, bool))(Il2CppBase() + 0x1423424))(0, manager, blueprintName, category, isInfoWindow);
	}
	template <typename T = void> static T UpdateStoreGachaDetailedUI(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x14234FC))(0, manager);
	}

};

