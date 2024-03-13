#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDWindowHelper"));
	}


	template <typename T = HUDWindow*> static T ShowArenaHUD(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x128A478))(0, manager);
	}
	template <typename T = IQuestTrackerController*> static T GetQuestsTracker(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x128A888))(0, manager);
	}
	template <typename T = HUDBossTracker*> static T GetBossTracker(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x128A948))(0, manager);
	}
	template <typename T = HUDWindow*> static T GetArenaHUDWindow(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x128A964))(0, manager);
	}

};

