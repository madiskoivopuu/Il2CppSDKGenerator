#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreGachaDetailedWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreGachaDetailedWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowStoreGachaDetailed(uintptr_t manager, Il2CppString* blueprintName, uintptr_t category, bool isInfoWindow) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x1423424))(0, manager, blueprintName, category, isInfoWindow);
	}
	template <typename T = void> static T UpdateStoreGachaDetailedUI(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x14234FC))(0, manager);
	}

};

}
