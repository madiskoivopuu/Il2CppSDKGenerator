#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreSlotsDetailedWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreSlotsDetailedWindowHelper"));
	}


	template <typename T = StoreSlotsDetailedWindow*> static T ShowStoreSlotsDetailed(UIWindowsManager* manager, Il2CppString* blueprintName, Category* category) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, Category*))(Il2CppBase() + 0x1848C3C))(0, manager, blueprintName, category);
	}
	template <typename T = void> static T UpdateStoreSlotsDetailedUI(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1848D04))(0, manager);
	}

};

