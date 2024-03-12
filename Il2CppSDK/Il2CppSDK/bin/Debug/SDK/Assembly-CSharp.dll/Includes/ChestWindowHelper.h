#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChestWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowChest(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x17467F0))(0, manager, targetId);
	}
	template <typename T = void> static T CloseChest(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x17468BC))(0, manager, targetId);
	}

};

}
