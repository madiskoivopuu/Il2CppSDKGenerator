#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RaidBeginAlertHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RaidBeginAlertHelper"));
	}


	template <typename R = RaidBeginAlertWindow*> static R GetRaidBeginAlertWindow(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x170D100))(0, manager);
	}
	template <typename R = void> static R ApplyRaidBegin(UIWindowsManager* manager, GameEntity* entity) {
		return ((R (*)(void *, UIWindowsManager*, GameEntity*))(Il2CppBase() + 0x170D1D4))(0, manager, entity);
	}

};

