#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CampBathWindowWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CampBathWindowWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowCampBath(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x15B548C))(0, manager, targetId);
	}
	template <typename T = void> static T CloseCampBath(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x15B5558))(0, manager, targetId);
	}

};

}
