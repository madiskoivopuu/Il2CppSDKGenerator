#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreGachaDetailedWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreGachaDetailedWindowHelper"));
	}


	template <typename R = StoreGachaDetailedWindow*> static R ShowStoreGachaDetailed(UIWindowsManager* manager, Il2CppString* blueprintName, Category category, bool isInfoWindow) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*, Category, bool))(Il2CppBase() + 0x1423424))(0, manager, blueprintName, category, isInfoWindow);
	}
	template <typename R = void> static R UpdateStoreGachaDetailedUI(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x14234FC))(0, manager);
	}

};

