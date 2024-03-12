#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CyclicEnterWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CyclicEnterWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowCyclicEnterWindow(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1644DC0))(0, manager, targetId);
	}
	template <typename T = void> static T OnCyclicResponse(uintptr_t manager, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1644F1C))(0, manager, data);
	}

};

}
