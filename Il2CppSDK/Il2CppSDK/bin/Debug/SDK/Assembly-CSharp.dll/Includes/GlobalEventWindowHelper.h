#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GlobalEventWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GlobalEventWindowHelper"));
	}


	template <typename T = uintptr_t> static T GetGlobalEvent(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1774E8C))(0, manager);
	}
	template <typename T = uintptr_t> static T ShowGlobalEvent(uintptr_t manager, uintptr_t dialogue) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1774F00))(0, manager, dialogue);
	}

};

}
