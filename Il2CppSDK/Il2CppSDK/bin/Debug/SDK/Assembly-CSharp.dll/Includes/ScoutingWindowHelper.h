#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScoutingWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScoutingWindowHelper"));
	}


	template <typename R = ScoutingWindow*> static R ShowScouting(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x135B310))(0, manager, targetId);
	}
	template <typename R = ScoutingWindow*> static R GetScouting(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x135B3DC))(0, manager);
	}
	template <typename R = void> static R CloseScouting(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x135B474))(0, manager, targetId);
	}

};

