#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapHUDWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapHUDWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowMapHUD(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12700E0))(0, manager);
	}
	template <typename T = uintptr_t> static T GetMapHUDWindow(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1270304))(0, manager);
	}

};

}
