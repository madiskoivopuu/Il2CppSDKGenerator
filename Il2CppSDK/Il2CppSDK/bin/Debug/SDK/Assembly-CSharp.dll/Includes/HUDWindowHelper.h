#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowArenaHUD(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x128A478))(0, manager);
	}
	template <typename T = uintptr_t> static T GetQuestsTracker(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x128A888))(0, manager);
	}
	template <typename T = uintptr_t> static T GetBossTracker(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x128A948))(0, manager);
	}
	template <typename T = uintptr_t> static T GetArenaHUDWindow(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x128A964))(0, manager);
	}

};

}
