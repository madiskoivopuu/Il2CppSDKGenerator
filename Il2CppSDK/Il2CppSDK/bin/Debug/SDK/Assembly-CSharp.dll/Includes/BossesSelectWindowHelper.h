#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossesSelectWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossesSelectWindowHelper"));
	}


	template <typename T = uintptr_t> static T GetSelectBossesWindow(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16D1368))(0, manager);
	}
	template <typename T = uintptr_t> static T ShowSelectBossesWindow(uintptr_t manager, int32_t targetId, Il2CppString* current, void* callback) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppString*, void*))(Il2CppBase() + 0x16D1400))(0, manager, targetId, current, callback);
	}

};

}
