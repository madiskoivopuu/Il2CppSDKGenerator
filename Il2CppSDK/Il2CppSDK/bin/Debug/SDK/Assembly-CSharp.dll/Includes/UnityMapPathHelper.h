#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnityMapPathHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnityMapPathHelper"));
	}


	template <typename T = uintptr_t> static T MoveAlongPath(MapUnityWorld* world, GameEntity* player, int64_t now, uintptr_t* delta) {
		return ((T (*)(void *, MapUnityWorld*, GameEntity*, int64_t, uintptr_t*))(Il2CppBase() + 0x1538AAC))(0, world, player, now, delta);
	}
	template <typename T = void> static T EndMoveAlongPath(GameEntity* player) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x15396F4))(0, player);
	}
	template <typename T = void> static T CreateVisualPath(MapPathViewComponent* mapPathView, Il2CppArray<uintptr_t>* pathPoints) {
		return ((T (*)(void *, MapPathViewComponent*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1538EF8))(0, mapPathView, pathPoints);
	}
	template <typename T = uintptr_t> static T GetPathPosition(GameEntity* entity, float delta) {
		return ((T (*)(void *, GameEntity*, float))(Il2CppBase() + 0x1539510))(0, entity, delta);
	}

};

