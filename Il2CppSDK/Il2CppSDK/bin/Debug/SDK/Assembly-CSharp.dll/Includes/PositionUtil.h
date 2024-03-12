#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PositionUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PositionUtil"));
	}

	template <typename T = int32_t> static T& _groundLayerMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _plane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& DEFAULT_ROTATION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> static T Snap(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x16D5FC8))(0, value);
	}
	template <typename T = unsigned char> static T ReplacePositionSnapped(uintptr_t entity, float x, float y, uintptr_t buildEntityComponent) {
		return ((T (*)(void *, uintptr_t, float, float, uintptr_t))(Il2CppBase() + 0x16D60C8))(0, entity, x, y, buildEntityComponent);
	}
	template <typename T = float> static T SqrDistance(uintptr_t e1, uintptr_t e2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16D62C4))(0, e1, e2);
	}
	template <typename T = uintptr_t> static T GetPredictedPosition(uintptr_t entity, int64_t time) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x16D6578))(0, entity, time);
	}
	template <typename T = uintptr_t> static T GetDirection(float angle) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x16D6798))(0, angle);
	}
	template <typename T = uintptr_t> static T GetDirection_1(uintptr_t rotationEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16D684C))(0, rotationEntity);
	}
	template <typename T = uintptr_t> static T GetDirection_2(uintptr_t gameEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16D6990))(0, gameEntity);
	}
	template <typename T = uintptr_t> static T GetDirection_3(uintptr_t actionEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16D6B1C))(0, actionEntity);
	}
	template <typename T = uintptr_t> static T GetDirectionTo(uintptr_t from, uintptr_t to) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16D6BE8))(0, from, to);
	}
	template <typename T = bool> static T InViewAngle(uintptr_t e1, uintptr_t e2, float rotation, float angle) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, float))(Il2CppBase() + 0x16D6C28))(0, e1, e2, rotation, angle);
	}
	template <typename T = bool> static T InViewAngle_1(uintptr_t pos1, uintptr_t pos2, float rotation, float angle) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, float))(Il2CppBase() + 0x16D6DBC))(0, pos1, pos2, rotation, angle);
	}
	template <typename T = float> static T SqrDistance_1(uintptr_t from, uintptr_t to) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16D6F0C))(0, from, to);
	}
	template <typename T = float> static T SqrDistance_2(uintptr_t e1, float x, float y) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x16D6430))(0, e1, x, y);
	}
	template <typename T = uintptr_t> static T GetNearestLeavePoint(uintptr_t context, float x, float y, Il2CppList<uintptr_t>* leavepoints) {
		return ((T (*)(void *, uintptr_t, float, float, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x16D6F24))(0, context, x, y, leavepoints);
	}
	template <typename T = uintptr_t> static T GetNearestFromGroup(uintptr_t center, void* group, void* predicate) {
		return ((T (*)(void *, uintptr_t, void*, void*))(Il2CppBase() + 0x16D70C4))(0, center, group, predicate);
	}
	template <typename T = float> static T MaxAxisDistance(uintptr_t e1, float x, float y) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x16D7400))(0, e1, x, y);
	}
	template <typename T = bool> static T IsInQuad(uintptr_t e, int32_t quadId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x16D7574))(0, e, quadId);
	}
	template <typename T = bool> static T IsInQuadArea(uintptr_t e, int32_t quadId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x16D7814))(0, e, quadId);
	}
	template <typename T = bool> static T IsInQuad_1(float x, float y, int32_t quadId) {
		return ((T (*)(void *, float, float, int32_t))(Il2CppBase() + 0x16D7760))(0, x, y, quadId);
	}
	template <typename T = bool> static T IsInQuadSide(float x, float y, int32_t quadId) {
		return ((T (*)(void *, float, float, int32_t))(Il2CppBase() + 0x16D7A00))(0, x, y, quadId);
	}
	template <typename T = int32_t> static T GetQuadId(uintptr_t positionEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16D7B40))(0, positionEntity);
	}
	template <typename T = int32_t> static T GetQuadId_1(uintptr_t position) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16D7D28))(0, position);
	}
	template <typename T = int32_t> static T GetQuadId_2(float x, float y) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x16D7A90))(0, x, y);
	}
	template <typename T = int32_t> static T GetSimplyQuadId(uintptr_t positionEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16D7DA0))(0, positionEntity);
	}
	template <typename T = int32_t> static T GetSimplyQuadId_1(uintptr_t position) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16D7C9C))(0, position);
	}
	template <typename T = int32_t> static T GetSimplyQuadId_2(float x, float y) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x16D7EFC))(0, x, y);
	}
	template <typename T = uintptr_t> static T GetNearestQuadPosition(float x, float y, int32_t quadId, float offset) {
		return ((T (*)(void *, float, float, int32_t, float))(Il2CppBase() + 0x16D7F24))(0, x, y, quadId, offset);
	}
	template <typename T = int32_t> static T GetQuadSideId(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16D804C))(0, e);
	}
	template <typename T = int32_t> static T GetQuadSideId_1(float x, float y) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x16D7B18))(0, x, y);
	}
	template <typename T = uintptr_t> static T ToVec2(uintptr_t positionComponent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16D6728))(0, positionComponent);
	}
	template <typename T = uintptr_t> static T ToVec2_1(uintptr_t velocityComponent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16D6760))(0, velocityComponent);
	}
	template <typename T = void> static T SetWorldToView(uintptr_t CanvasRef, uintptr_t rectTransform, uintptr_t transform, float OffsetY) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x16D8234))(0, CanvasRef, rectTransform, transform, OffsetY);
	}
	template <typename T = void> static T SetWorldToView_1(uintptr_t CanvasRef, uintptr_t rectTransform, Il2CppVector3 worldPos, float OffsetY) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x16D82E4))(0, CanvasRef, rectTransform, worldPos, OffsetY);
	}
	template <typename T = void> static T SetWorldToView_2(uintptr_t rectTransform, Il2CppVector3 worldPos, float OffsetY) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x16D83F4))(0, rectTransform, worldPos, OffsetY);
	}
	template <typename T = Il2CppVector3> static T PositionOnGround(Il2CppVector3 position) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x16D8504))(0, position);
	}
	template <typename T = Il2CppVector2> static T GetWorldPosition(Il2CppVector2 mousePosition) {
		return ((T (*)(void *, Il2CppVector2))(Il2CppBase() + 0x16D8650))(0, mousePosition);
	}
	template <typename T = Il2CppVector3> static T GetPlanePosition(Il2CppVector3 start) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x16D87BC))(0, start);
	}
	template <typename T = Il2CppVector3> static T ToVector3(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16D897C))(0, entity);
	}
	template <typename T = Il2CppVector3> static T ToVector3_1(uintptr_t position) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16D8AA8))(0, position);
	}
	template <typename T = void> static T ReplacePositionNext(uintptr_t entity, int32_t count, uintptr_t buildMethod) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x16D8AC4))(0, entity, count, buildMethod);
	}
	template <typename T = int64_t> static T HashPosition(float x, float y) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x16D4CAC))(0, x, y);
	}
	template <typename T = bool> static T CheckCollision(uintptr_t world, void* obstacles, float radius, uintptr_t position, uintptr_t entity) {
		return ((T (*)(void *, uintptr_t, void*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x16D8CF0))(0, world, obstacles, radius, position, entity);
	}
	template <typename T = bool> static T CheckCollision_1(uintptr_t entity, uintptr_t world, void* obstacles, uintptr_t position) {
		return ((T (*)(void *, uintptr_t, uintptr_t, void*, uintptr_t))(Il2CppBase() + 0x16D9584))(0, entity, world, obstacles, position);
	}
	template <typename T = uintptr_t> static T GetPushOutPosition(uintptr_t world, void* obstacles, uintptr_t startPosition, uintptr_t position, float radius, bool checkWall, uintptr_t entity) {
		return ((T (*)(void *, uintptr_t, void*, uintptr_t, uintptr_t, float, bool, uintptr_t))(Il2CppBase() + 0x16D96B0))(0, world, obstacles, startPosition, position, radius, checkWall, entity);
	}
	template <typename T = uintptr_t> static T ReplacePushOutPosition(uintptr_t entity, uintptr_t world, void* obstacles, uintptr_t position, bool checkWall) {
		return ((T (*)(void *, uintptr_t, uintptr_t, void*, uintptr_t, bool))(Il2CppBase() + 0x16DA984))(0, entity, world, obstacles, position, checkWall);
	}
	template <typename T = bool> static T CheckCircleCollision(uintptr_t obstacle, uintptr_t position, float radius) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x16D911C))(0, obstacle, position, radius);
	}
	template <typename T = uintptr_t> static T GetCircleCollisionPosition(uintptr_t world, uintptr_t obstacle, float radius, bool checkWall, uintptr_t startPosition, uintptr_t endPosition) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x16DA2A8))(0, world, obstacle, radius, checkWall, startPosition, endPosition);
	}
	template <typename T = bool> static T CheckBoxCollision(uintptr_t obstacle, uintptr_t entity, uintptr_t position, float radius) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x16D91E0))(0, obstacle, entity, position, radius);
	}
	template <typename T = uintptr_t> static T GetBoxCollisionPosition(uintptr_t world, uintptr_t obstacle, uintptr_t entity, float radius, bool checkWall, uintptr_t startPosition, uintptr_t endPosition) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, float, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x16DA618))(0, world, obstacle, entity, radius, checkWall, startPosition, endPosition);
	}
	template <typename T = bool> static T CheckBoxCollision_1(float obstacleX, float obstacleY, float halfWidth, float halfHeight, uintptr_t position, float radius) {
		return ((T (*)(void *, float, float, float, float, uintptr_t, float))(Il2CppBase() + 0x16DABCC))(0, obstacleX, obstacleY, halfWidth, halfHeight, position, radius);
	}
	template <typename T = uintptr_t> static T GetBoxCollisionPosition_1(float obstacleX, float obstacleY, float halfWidth, float halfHeight, uintptr_t position, float radius) {
		return ((T (*)(void *, float, float, float, float, uintptr_t, float))(Il2CppBase() + 0x16DAD68))(0, obstacleX, obstacleY, halfWidth, halfHeight, position, radius);
	}
	template <typename T = uintptr_t> static T WorldPositionToCellPosition(float x, float y, int32_t cellId) {
		return ((T (*)(void *, float, float, int32_t))(Il2CppBase() + 0x16DB0B0))(0, x, y, cellId);
	}
	template <typename T = bool> static T IsCellPositionEquals(uintptr_t vec1, uintptr_t vec2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16DB1C0))(0, vec1, vec2);
	}
	template <typename T = uintptr_t> static T WorldPositionToCellPosition_1(uintptr_t worldParams, float x, float y) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x16DB294))(0, worldParams, x, y);
	}
	template <typename T = uintptr_t> static T WorldPositionToCellPosition_2(uintptr_t worldParams, uintptr_t worldPos) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16DB394))(0, worldParams, worldPos);
	}
	template <typename T = uintptr_t> static T WorldPositionToCellPosition_3(uintptr_t worldParams, uintptr_t entity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16DB40C))(0, worldParams, entity);
	}
	template <typename T = uintptr_t> static T CellPositionToWorldPosition(uintptr_t worldParams, uintptr_t cellPos) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16DB578))(0, worldParams, cellPos);
	}
	template <typename T = uintptr_t> static T CellPositionToWorldPosition_1(uintptr_t worldParams, int32_t x, int32_t y) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x16DB5F0))(0, worldParams, x, y);
	}
	template <typename T = uintptr_t> static T CellPositionToWorldPosition_2(int32_t quadId, uintptr_t pos) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x16DB674))(0, quadId, pos);
	}
	template <typename T = uintptr_t> static T WorldPositionToCellPosition_4(int32_t quadId, uintptr_t pos) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x16DB6FC))(0, quadId, pos);
	}
	template <typename T = bool> static T SeparatedByWall(uintptr_t world, uintptr_t start, uintptr_t end) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x16DB784))(0, world, start, end);
	}
	template <typename T = bool> static T WallTrace(uintptr_t world, uintptr_t start, float offset, uintptr_t end) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x16D9BE0))(0, world, start, offset, end);
	}
	template <typename T = bool> static T OnBorder(uintptr_t entity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16DB818))(0, entity, world);
	}
	template <typename T = bool> static T OnBorder_1(float x, float y, uintptr_t world) {
		return ((T (*)(void *, float, float, uintptr_t))(Il2CppBase() + 0x16DBA04))(0, x, y, world);
	}
	template <typename T = bool> static T IsLeaving(uintptr_t entity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16DBC90))(0, entity, world);
	}
	template <typename T = bool> static T IsInFrontOf(uintptr_t actor, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16DBD28))(0, actor, target);
	}
	template <typename T = float> static T GetRotationToTarget(uintptr_t entity, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16DBDCC))(0, entity, target);
	}
	template <typename T = float> static T GetRotationToTarget_1(float fromX, float fromY, float toX, float toY) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x16DC018))(0, fromX, fromY, toX, toY);
	}
	template <typename T = float> static T GetRotationAngle(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16D6A84))(0, entity);
	}
	template <typename T = unsigned char> static T RotationToOrientation(float angle) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x16DC210))(0, angle);
	}
	template <typename T = float> static T OrientationToRotation(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16DC0C0))(0, entity);
	}
	template <typename T = float> static T OrientationToRotation_1(unsigned char orientation) {
		return ((T (*)(void *, unsigned char))(Il2CppBase() + 0x16DC324))(0, orientation);
	}
	template <typename T = uintptr_t> static T GetChildPosition(float positionX, float positionY, float OffsetX, float OffsetY, unsigned char orientation, uintptr_t Logger, int32_t WorldId, Il2CppString* blueprint, int32_t entityId) {
		return ((T (*)(void *, float, float, float, float, unsigned char, uintptr_t, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x16DC344))(0, positionX, positionY, OffsetX, OffsetY, orientation, Logger, WorldId, blueprint, entityId);
	}

};

}
