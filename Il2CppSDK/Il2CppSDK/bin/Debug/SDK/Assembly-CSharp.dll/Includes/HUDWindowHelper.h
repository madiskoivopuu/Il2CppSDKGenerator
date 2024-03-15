#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDWindowHelper"));
	}


	template <typename R = HUDWindow*> static R ShowArenaHUD(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x128A478))(0, manager);
	}
	template <typename R = IQuestTrackerController*> static R GetQuestsTracker(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x128A888))(0, manager);
	}
	template <typename R = HUDBossTracker*> static R GetBossTracker(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x128A948))(0, manager);
	}
	template <typename R = HUDWindow*> static R GetArenaHUDWindow(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x128A964))(0, manager);
	}

};

