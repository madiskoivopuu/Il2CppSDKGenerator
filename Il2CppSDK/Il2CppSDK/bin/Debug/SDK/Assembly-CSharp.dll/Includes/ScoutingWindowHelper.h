#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScoutingWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScoutingWindowHelper"));
	}


	template <typename T = ScoutingWindow*> static T ShowScouting(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x135B310))(0, manager, targetId);
	}
	template <typename T = ScoutingWindow*> static T GetScouting(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x135B3DC))(0, manager);
	}
	template <typename T = void> static T CloseScouting(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x135B474))(0, manager, targetId);
	}

};

