#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RavenNestWindowWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RavenNestWindowWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowRavenNest(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x13944E4))(0, manager, targetId);
	}
	template <typename T = void> static T CloseRavenNest(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x13945B0))(0, manager, targetId);
	}

};

}
