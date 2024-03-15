#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RavenNestStatsWindowWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RavenNestStatsWindowWindowHelper"));
	}


	template <typename R = RavenNestStatsWindow*> static R ShowRavenNestStats(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1393044))(0, manager, targetId);
	}
	template <typename R = void> static R CloseRavenNestStats(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1393110))(0, manager, targetId);
	}

};

