#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArenaWorld
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArenaWorld"));
	}


	template <typename R = bool> R QuadIsEmpty(int32_t quadId) {
		return ((R (*)(IArenaWorld*, int32_t))(Il2CppBase() + 0x0))(this, quadId);
	}
	template <typename R = bool> R get_IsActiveShield() {
		return ((R (*)(IArenaWorld*))(Il2CppBase() + 0x0))(this);
	}
	 EntitiesWithPositionNear1<GameEntity*>* GetEntitiesWithPositionNear(float x, float y, float radius) {
		return ((EntitiesWithPositionNear1<GameEntity*>* (*)(IArenaWorld*, float, float, float))(Il2CppBase() + 0x0))(this, x, y, radius);
	}
	 EntitiesWithPositionNear1<GameEntity*>* GetTargetsWithPositionNear(float x, float y, float radius) {
		return ((EntitiesWithPositionNear1<GameEntity*>* (*)(IArenaWorld*, float, float, float))(Il2CppBase() + 0x0))(this, x, y, radius);
	}
	 EntitiesWithPositionNear1<GameEntity*>* GetObstaclesWithPositionNear(float x, float y, float radius) {
		return ((EntitiesWithPositionNear1<GameEntity*>* (*)(IArenaWorld*, float, float, float))(Il2CppBase() + 0x0))(this, x, y, radius);
	}

};

