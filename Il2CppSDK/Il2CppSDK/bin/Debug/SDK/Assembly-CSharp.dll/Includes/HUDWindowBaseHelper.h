#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDWindowBaseHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDWindowBaseHelper"));
	}


	template <typename T = IUIWindow*> static T ShowHud(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x128A3D0))(0, manager);
	}
	template <typename T = IHUDWindow*> static T GetHUDWindow(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x128A608))(0, manager);
	}
	template <typename T = IUIWindow*> static T CloseHud(UIWindowsManager* manager, bool closeCheats) {
		return ((T (*)(void *, UIWindowsManager*, bool))(Il2CppBase() + 0x128A6F8))(0, manager, closeCheats);
	}

};

