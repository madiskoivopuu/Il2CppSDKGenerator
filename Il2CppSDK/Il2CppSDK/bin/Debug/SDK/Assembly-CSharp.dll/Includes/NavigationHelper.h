#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NavigationHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NavigationHelper"));
	}


	template <typename T = uintptr_t> static T GetAwayPoint(uintptr_t world, uintptr_t entity, uintptr_t fromEntity, bool ignoreBorder, bool ignoreDoor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x155BDA0))(0, world, entity, fromEntity, ignoreBorder, ignoreDoor);
	}
	template <typename T = bool> static T IsValidPoint(uintptr_t world, float x, float y) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x155CABC))(0, world, x, y);
	}
	template <typename T = void> static T UpdateField(uintptr_t world, uintptr_t entity, uintptr_t entityPos, uintptr_t fromCell, int32_t targetDistance, bool ignoreDoor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x155C1A8))(0, world, entity, entityPos, fromCell, targetDistance, ignoreDoor);
	}
	template <typename T = void> static T SetVector(uintptr_t vectorField, uintptr_t coord, uint16_t doorsAndWalls, bool ignoreDoor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uint16_t, bool))(Il2CppBase() + 0x155CD68))(0, vectorField, coord, doorsAndWalls, ignoreDoor);
	}
	template <typename T = uintptr_t> static T GetVector(uintptr_t world, uintptr_t entity, uintptr_t entityPos, uintptr_t cellPosition, bool ignoreDoor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x155D0B8))(0, world, entity, entityPos, cellPosition, ignoreDoor);
	}
	template <typename T = uintptr_t> static T GetDirectionToEntity(uintptr_t world, uintptr_t entity, uintptr_t entityPos, uintptr_t target, uintptr_t targetPos, bool ignoreDoor, void* minDistance) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool, void*))(Il2CppBase() + 0x155D468))(0, world, entity, entityPos, target, targetPos, ignoreDoor, minDistance);
	}
	template <typename T = bool> static T MoveToEntity(uintptr_t world, uintptr_t entity, uintptr_t target, int64_t now, bool ignoreDoor, void* minDistance) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int64_t, bool, void*))(Il2CppBase() + 0x155E74C))(0, world, entity, target, now, ignoreDoor, minDistance);
	}
	template <typename T = void*> static T GetMoveToEntity(uintptr_t world, uintptr_t entity, int64_t entityTick, uintptr_t entityPosition, float entitySpeed, uintptr_t entityVelocity, uintptr_t target, uintptr_t targetPosition, int64_t now, bool ignoreDoor, void* minDistance) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t, uintptr_t, float, uintptr_t, uintptr_t, uintptr_t, int64_t, bool, void*))(Il2CppBase() + 0x155EA5C))(0, world, entity, entityTick, entityPosition, entitySpeed, entityVelocity, target, targetPosition, now, ignoreDoor, minDistance);
	}

};

}
