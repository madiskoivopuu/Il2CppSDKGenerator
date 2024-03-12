#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDWindowBaseHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDWindowBaseHelper"));
	}


	template <typename T = uintptr_t> static T ShowHud(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x128A3D0))(0, manager);
	}
	template <typename T = uintptr_t> static T GetHUDWindow(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x128A608))(0, manager);
	}
	template <typename T = uintptr_t> static T CloseHud(uintptr_t manager, bool closeCheats) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x128A6F8))(0, manager, closeCheats);
	}

};

}
