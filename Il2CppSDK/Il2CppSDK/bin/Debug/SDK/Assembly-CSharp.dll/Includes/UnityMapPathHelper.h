#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnityMapPathHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnityMapPathHelper"));
	}


	template <typename T = Il2CppVector3> static T MoveAlongPath(uintptr_t world, uintptr_t player, int64_t now, uintptr_t* delta) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t, uintptr_t*))(Il2CppBase() + 0x1538AAC))(0, world, player, now, delta);
	}
	template <typename T = void> static T EndMoveAlongPath(uintptr_t player) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15396F4))(0, player);
	}
	template <typename T = void> static T CreateVisualPath(uintptr_t mapPathView, Il2CppArray<uintptr_t>* pathPoints) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1538EF8))(0, mapPathView, pathPoints);
	}
	template <typename T = Il2CppVector3> static T GetPathPosition(uintptr_t entity, float delta) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x1539510))(0, entity, delta);
	}

};

}
