#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventoryChestWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryChestWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowInventoryChestWindow(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x146EC2C))(0, manager, targetId);
	}
	template <typename T = void> static T OnReceivedInventoryContainerResult(uintptr_t manager, uintptr_t result) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x146ECF8))(0, manager, result);
	}

};

}
