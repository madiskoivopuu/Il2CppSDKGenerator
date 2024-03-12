#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreVIPChestDetailedWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreVIPChestDetailedWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowStoreVIPChestDetailed(uintptr_t manager, Il2CppString* blueprintName, uintptr_t category, bool isInfoWindow) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x184ABA0))(0, manager, blueprintName, category, isInfoWindow);
	}

};

}
