#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreSlotsDetailedWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreSlotsDetailedWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowStoreSlotsDetailed(uintptr_t manager, Il2CppString* blueprintName, uintptr_t category) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1848C3C))(0, manager, blueprintName, category);
	}
	template <typename T = void> static T UpdateStoreSlotsDetailedUI(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1848D04))(0, manager);
	}

};

}
