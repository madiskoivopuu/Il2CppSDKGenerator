#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowCraft(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1348F3C))(0, manager, targetId);
	}
	template <typename T = void> static T CloseCraft(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1349008))(0, manager, targetId);
	}

};

}
