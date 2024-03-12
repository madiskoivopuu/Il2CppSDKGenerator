#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MannequinChestWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MannequinChestWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowMannequinChest(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x12619DC))(0, manager, targetId);
	}
	template <typename T = bool> static T CloseMannequinChest(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1261AA8))(0, manager, targetId);
	}

};

}
