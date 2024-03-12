#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScoutingWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScoutingWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowScouting(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x135B310))(0, manager, targetId);
	}
	template <typename T = uintptr_t> static T GetScouting(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x135B3DC))(0, manager);
	}
	template <typename T = void> static T CloseScouting(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x135B474))(0, manager, targetId);
	}

};

}
