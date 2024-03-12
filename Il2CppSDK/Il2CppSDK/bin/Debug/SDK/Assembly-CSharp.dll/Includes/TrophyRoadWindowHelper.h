#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TrophyRoadWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrophyRoadWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowTrophyRoad(uintptr_t manager, uintptr_t dialogueEntity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x102C010))(0, manager, dialogueEntity);
	}
	template <typename T = uintptr_t> static T GetTrophyRoad(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x102C130))(0, manager);
	}

};

}
