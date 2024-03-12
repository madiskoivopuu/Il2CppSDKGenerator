#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RepairWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RepairWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowRepair(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x11919F0))(0, manager, targetId);
	}
	template <typename T = void> static T CloseRepair(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1191ABC))(0, manager, targetId);
	}

};

}
