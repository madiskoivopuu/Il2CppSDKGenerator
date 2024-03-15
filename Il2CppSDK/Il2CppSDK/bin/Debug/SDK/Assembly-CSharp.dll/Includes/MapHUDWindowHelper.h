#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapHUDWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapHUDWindowHelper"));
	}


	template <typename R = MapHUDWindow*> static R ShowMapHUD(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x12700E0))(0, manager);
	}
	template <typename R = MapHUDWindow*> static R GetMapHUDWindow(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1270304))(0, manager);
	}

};

