#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDWindowBaseHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDWindowBaseHelper"));
	}


	template <typename R = IUIWindow*> static R ShowHud(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x128A3D0))(0, manager);
	}
	template <typename R = IHUDWindow*> static R GetHUDWindow(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x128A608))(0, manager);
	}
	template <typename R = IUIWindow*> static R CloseHud(UIWindowsManager* manager, bool closeCheats) {
		return ((R (*)(void *, UIWindowsManager*, bool))(Il2CppBase() + 0x128A6F8))(0, manager, closeCheats);
	}

};

