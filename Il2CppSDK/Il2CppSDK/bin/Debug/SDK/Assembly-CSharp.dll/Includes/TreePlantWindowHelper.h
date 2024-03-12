#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TreePlantWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TreePlantWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowTreePlant(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1525334))(0, manager, targetId);
	}
	template <typename T = void> static T CloseTreePlant(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x15253DC))(0, manager, targetId);
	}

};

}
