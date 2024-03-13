#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RaidBeginAlertHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RaidBeginAlertHelper"));
	}


	template <typename T = RaidBeginAlertWindow*> static T GetRaidBeginAlertWindow(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x170D100))(0, manager);
	}
	template <typename T = void> static T ApplyRaidBegin(UIWindowsManager* manager, GameEntity* entity) {
		return ((T (*)(void *, UIWindowsManager*, GameEntity*))(Il2CppBase() + 0x170D1D4))(0, manager, entity);
	}

};

