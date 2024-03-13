#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NavigationHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NavigationHelper"));
	}


	template <typename T = Vec2*> static T GetAwayPoint(IArenaWorld* world, GameEntity* entity, GameEntity* fromEntity, bool ignoreBorder, bool ignoreDoor) {
		return ((T (*)(void *, IArenaWorld*, GameEntity*, GameEntity*, bool, bool))(Il2CppBase() + 0x155BDA0))(0, world, entity, fromEntity, ignoreBorder, ignoreDoor);
	}
	template <typename T = bool> static T IsValidPoint(IArenaWorld* world, float x, float y) {
		return ((T (*)(void *, IArenaWorld*, float, float))(Il2CppBase() + 0x155CABC))(0, world, x, y);
	}
	template <typename T = void> static T UpdateField(IArenaWorld* world, GameEntity* entity, Vec2* entityPos, Coord* fromCell, int32_t targetDistance, bool ignoreDoor) {
		return ((T (*)(void *, IArenaWorld*, GameEntity*, Vec2*, Coord*, int32_t, bool))(Il2CppBase() + 0x155C1A8))(0, world, entity, entityPos, fromCell, targetDistance, ignoreDoor);
	}
	template <typename T = void> static T SetVector(VectorFieldComponent* vectorField, Coord* coord, uint16_t doorsAndWalls, bool ignoreDoor) {
		return ((T (*)(void *, VectorFieldComponent*, Coord*, uint16_t, bool))(Il2CppBase() + 0x155CD68))(0, vectorField, coord, doorsAndWalls, ignoreDoor);
	}
	template <typename T = Vec2*> static T GetVector(IArenaWorld* world, GameEntity* entity, Vec2* entityPos, Coord* cellPosition, bool ignoreDoor) {
		return ((T (*)(void *, IArenaWorld*, GameEntity*, Vec2*, Coord*, bool))(Il2CppBase() + 0x155D0B8))(0, world, entity, entityPos, cellPosition, ignoreDoor);
	}
	template <typename T = Vec2*> static T GetDirectionToEntity(IArenaWorld* world, GameEntity* entity, Vec2* entityPos, GameEntity* target, Vec2* targetPos, bool ignoreDoor, Nullable1float>* minDistance) {
		return ((T (*)(void *, IArenaWorld*, GameEntity*, Vec2*, GameEntity*, Vec2*, bool, Nullable1float>*))(Il2CppBase() + 0x155D468))(0, world, entity, entityPos, target, targetPos, ignoreDoor, minDistance);
	}
	template <typename T = bool> static T MoveToEntity(IArenaWorld* world, GameEntity* entity, GameEntity* target, int64_t now, bool ignoreDoor, Nullable1float>* minDistance) {
		return ((T (*)(void *, IArenaWorld*, GameEntity*, GameEntity*, int64_t, bool, Nullable1float>*))(Il2CppBase() + 0x155E74C))(0, world, entity, target, now, ignoreDoor, minDistance);
	}
	template <typename T = ValueTuple3Vec2*, Vec2*, bool>*> static T GetMoveToEntity(IArenaWorld* world, GameEntity* entity, int64_t entityTick, Vec2* entityPosition, float entitySpeed, Vec2* entityVelocity, GameEntity* target, Vec2* targetPosition, int64_t now, bool ignoreDoor, Nullable1float>* minDistance) {
		return ((T (*)(void *, IArenaWorld*, GameEntity*, int64_t, Vec2*, float, Vec2*, GameEntity*, Vec2*, int64_t, bool, Nullable1float>*))(Il2CppBase() + 0x155EA5C))(0, world, entity, entityTick, entityPosition, entitySpeed, entityVelocity, target, targetPosition, now, ignoreDoor, minDistance);
	}

};

