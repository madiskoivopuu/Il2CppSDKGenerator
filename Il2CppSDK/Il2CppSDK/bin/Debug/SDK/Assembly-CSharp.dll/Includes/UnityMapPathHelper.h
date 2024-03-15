#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnityMapPathHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnityMapPathHelper"));
	}


	template <typename R = uintptr_t> static R MoveAlongPath(MapUnityWorld* world, GameEntity* player, int64_t now, uintptr_t* delta) {
		return ((R (*)(void *, MapUnityWorld*, GameEntity*, int64_t, uintptr_t*))(Il2CppBase() + 0x1538AAC))(0, world, player, now, delta);
	}
	template <typename R = void> static R EndMoveAlongPath(GameEntity* player) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x15396F4))(0, player);
	}
	template <typename R = void> static R CreateVisualPath(MapPathViewComponent* mapPathView, Il2CppArray<Vec2*>* pathPoints) {
		return ((R (*)(void *, MapPathViewComponent*, Il2CppArray<Vec2*>*))(Il2CppBase() + 0x1538EF8))(0, mapPathView, pathPoints);
	}
	template <typename R = uintptr_t> static R GetPathPosition(GameEntity* entity, float delta) {
		return ((R (*)(void *, GameEntity*, float))(Il2CppBase() + 0x1539510))(0, entity, delta);
	}

};

