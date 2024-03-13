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
	template <typename T = uint8_t> static T ReplacePositionSnapped(GameEntity* entity, float x, float y, BuilderComponent* buildEntityComponent) {
		return ((T (*)(void *, GameEntity*, float, float, BuilderComponent*))(Il2CppBase() + 0x16D60C8))(0, entity, x, y, buildEntityComponent);
	}
	template <typename T = float> static T SqrDistance(IPositionEntity* e1, IPositionEntity* e2) {
		return ((T (*)(void *, IPositionEntity*, IPositionEntity*))(Il2CppBase() + 0x16D62C4))(0, e1, e2);
	}
	template <typename T = Vec2*> static T GetPredictedPosition(GameEntity* entity, int64_t time) {
		return ((T (*)(void *, GameEntity*, int64_t))(Il2CppBase() + 0x16D6578))(0, entity, time);
	}
	template <typename T = Vec2*> static T GetDirection(float angle) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x16D6798))(0, angle);
	}
	template <typename T = Vec2*> static T GetDirection_1(IRotationEntity* rotationEntity) {
		return ((T (*)(void *, IRotationEntity*))(Il2CppBase() + 0x16D684C))(0, rotationEntity);
	}
	template <typename T = Vec2*> static T GetDirection_2(GameEntity* gameEntity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x16D6990))(0, gameEntity);
	}
	template <typename T = Vec2*> static T GetDirection_3(ActionEntity* actionEntity) {
		return ((T (*)(void *, ActionEntity*))(Il2CppBase() + 0x16D6B1C))(0, actionEntity);
	}
	template <typename T = Vec2*> static T GetDirectionTo(Vec2* from, Vec2* to) {
		return ((T (*)(void *, Vec2*, Vec2*))(Il2CppBase() + 0x16D6BE8))(0, from, to);
	}
	template <typename T = bool> static T InViewAngle(IPositionEntity* e1, IPositionEntity* e2, float rotation, float angle) {
		return ((T (*)(void *, IPositionEntity*, IPositionEntity*, float, float))(Il2CppBase() + 0x16D6C28))(0, e1, e2, rotation, angle);
	}
	template <typename T = bool> static T InViewAngle_1(Vec2* pos1, Vec2* pos2, float rotation, float angle) {
		return ((T (*)(void *, Vec2*, Vec2*, float, float))(Il2CppBase() + 0x16D6DBC))(0, pos1, pos2, rotation, angle);
	}
	template <typename T = float> static T SqrDistance_1(Vec2* from, Vec2* to) {
		return ((T (*)(void *, Vec2*, Vec2*))(Il2CppBase() + 0x16D6F0C))(0, from, to);
	}
	template <typename T = float> static T SqrDistance_2(IPositionEntity* e1, float x, float y) {
		return ((T (*)(void *, IPositionEntity*, float, float))(Il2CppBase() + 0x16D6430))(0, e1, x, y);
	}
	template <typename T = GameEntity*> static T GetNearestLeavePoint(GameContext* context, float x, float y, Il2CppList<GameEntity*>* leavepoints) {
		return ((T (*)(void *, GameContext*, float, float, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x16D6F24))(0, context, x, y, leavepoints);
	}
	template <typename T = GameEntity*> static T GetNearestFromGroup(IPositionEntity* center, IGroup1GameEntity*>* group, Predicate1GameEntity*>* predicate) {
		return ((T (*)(void *, IPositionEntity*, IGroup1GameEntity*>*, Predicate1GameEntity*>*))(Il2CppBase() + 0x16D70C4))(0, center, group, predicate);
	}
	template <typename T = float> static T MaxAxisDistance(IPositionEntity* e1, float x, float y) {
		return ((T (*)(void *, IPositionEntity*, float, float))(Il2CppBase() + 0x16D7400))(0, e1, x, y);
	}
	template <typename T = bool> static T IsInQuad(IPositionEntity* e, int32_t quadId) {
		return ((T (*)(void *, IPositionEntity*, int32_t))(Il2CppBase() + 0x16D7574))(0, e, quadId);
	}
	template <typename T = bool> static T IsInQuadArea(IPositionEntity* e, int32_t quadId) {
		return ((T (*)(void *, IPositionEntity*, int32_t))(Il2CppBase() + 0x16D7814))(0, e, quadId);
	}
	template <typename T = bool> static T IsInQuad_1(float x, float y, int32_t quadId) {
		return ((T (*)(void *, float, float, int32_t))(Il2CppBase() + 0x16D7760))(0, x, y, quadId);
	}
	template <typename T = bool> static T IsInQuadSide(float x, float y, int32_t quadId) {
		return ((T (*)(void *, float, float, int32_t))(Il2CppBase() + 0x16D7A00))(0, x, y, quadId);
	}
	template <typename T = int32_t> static T GetQuadId(IPositionEntity* positionEntity) {
		return ((T (*)(void *, IPositionEntity*))(Il2CppBase() + 0x16D7B40))(0, positionEntity);
	}
	template <typename T = int32_t> static T GetQuadId_1(BasePositionComponent* position) {
		return ((T (*)(void *, BasePositionComponent*))(Il2CppBase() + 0x16D7D28))(0, position);
	}
	template <typename T = int32_t> static T GetQuadId_2(float x, float y) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x16D7A90))(0, x, y);
	}
	template <typename T = int32_t> static T GetSimplyQuadId(IPositionEntity* positionEntity) {
		return ((T (*)(void *, IPositionEntity*))(Il2CppBase() + 0x16D7DA0))(0, positionEntity);
	}
	template <typename T = int32_t> static T GetSimplyQuadId_1(BasePositionComponent* position) {
		return ((T (*)(void *, BasePositionComponent*))(Il2CppBase() + 0x16D7C9C))(0, position);
	}
	template <typename T = int32_t> static T GetSimplyQuadId_2(float x, float y) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x16D7EFC))(0, x, y);
	}
	template <typename T = Vec2*> static T GetNearestQuadPosition(float x, float y, int32_t quadId, float offset) {
		return ((T (*)(void *, float, float, int32_t, float))(Il2CppBase() + 0x16D7F24))(0, x, y, quadId, offset);
	}
	template <typename T = int32_t> static T GetQuadSideId(IPositionEntity* e) {
		return ((T (*)(void *, IPositionEntity*))(Il2CppBase() + 0x16D804C))(0, e);
	}
	template <typename T = int32_t> static T GetQuadSideId_1(float x, float y) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x16D7B18))(0, x, y);
	}
	template <typename T = Vec2*> static T ToVec2(BasePositionComponent* positionComponent) {
		return ((T (*)(void *, BasePositionComponent*))(Il2CppBase() + 0x16D6728))(0, positionComponent);
	}
	template <typename T = Vec2*> static T ToVec2_1(VelocityComponent* velocityComponent) {
		return ((T (*)(void *, VelocityComponent*))(Il2CppBase() + 0x16D6760))(0, velocityComponent);
	}
	template <typename T = void> static T SetWorldToView(uintptr_t CanvasRef, uintptr_t rectTransform, uintptr_t transform, float OffsetY) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x16D8234))(0, CanvasRef, rectTransform, transform, OffsetY);
	}
	template <typename T = void> static T SetWorldToView_1(uintptr_t CanvasRef, uintptr_t rectTransform, uintptr_t worldPos, float OffsetY) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x16D82E4))(0, CanvasRef, rectTransform, worldPos, OffsetY);
	}
	template <typename T = void> static T SetWorldToView_2(uintptr_t rectTransform, uintptr_t worldPos, float OffsetY) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x16D83F4))(0, rectTransform, worldPos, OffsetY);
	}
	template <typename T = uintptr_t> static T PositionOnGround(uintptr_t position) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16D8504))(0, position);
	}
	template <typename T = uintptr_t> static T GetWorldPosition(uintptr_t mousePosition) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16D8650))(0, mousePosition);
	}
	template <typename T = uintptr_t> static T GetPlanePosition(uintptr_t start) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16D87BC))(0, start);
	}
	template <typename T = uintptr_t> static T ToVector3(IPositionEntity* entity) {
		return ((T (*)(void *, IPositionEntity*))(Il2CppBase() + 0x16D897C))(0, entity);
	}
	template <typename T = uintptr_t> static T ToVector3_1(BasePositionComponent* position) {
		return ((T (*)(void *, BasePositionComponent*))(Il2CppBase() + 0x16D8AA8))(0, position);
	}
	template <typename T = void> static T ReplacePositionNext(GameEntity* entity, int32_t count, BuildMethod* buildMethod) {
		return ((T (*)(void *, GameEntity*, int32_t, BuildMethod*))(Il2CppBase() + 0x16D8AC4))(0, entity, count, buildMethod);
	}
	template <typename T = int64_t> static T HashPosition(float x, float y) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x16D4CAC))(0, x, y);
	}
	template <typename T = bool> static T CheckCollision(ICommonContexts* world, EntitiesWithPositionNear1GameEntity*>* obstacles, float radius, Vec2* position, GameEntity* entity) {
		return ((T (*)(void *, ICommonContexts*, EntitiesWithPositionNear1GameEntity*>*, float, Vec2*, GameEntity*))(Il2CppBase() + 0x16D8CF0))(0, world, obstacles, radius, position, entity);
	}
	template <typename T = bool> static T CheckCollision_1(GameEntity* entity, ICommonContexts* world, EntitiesWithPositionNear1GameEntity*>* obstacles, Vec2* position) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, EntitiesWithPositionNear1GameEntity*>*, Vec2*))(Il2CppBase() + 0x16D9584))(0, entity, world, obstacles, position);
	}
	template <typename T = Vec2*> static T GetPushOutPosition(IArenaWorld* world, EntitiesWithPositionNear1GameEntity*>* obstacles, Vec2* startPosition, Vec2* position, float radius, bool checkWall, GameEntity* entity) {
		return ((T (*)(void *, IArenaWorld*, EntitiesWithPositionNear1GameEntity*>*, Vec2*, Vec2*, float, bool, GameEntity*))(Il2CppBase() + 0x16D96B0))(0, world, obstacles, startPosition, position, radius, checkWall, entity);
	}
	template <typename T = Vec2*> static T ReplacePushOutPosition(GameEntity* entity, IArenaWorld* world, EntitiesWithPositionNear1GameEntity*>* obstacles, Vec2* position, bool checkWall) {
		return ((T (*)(void *, GameEntity*, IArenaWorld*, EntitiesWithPositionNear1GameEntity*>*, Vec2*, bool))(Il2CppBase() + 0x16DA984))(0, entity, world, obstacles, position, checkWall);
	}
	template <typename T = bool> static T CheckCircleCollision(GameEntity* obstacle, Vec2* position, float radius) {
		return ((T (*)(void *, GameEntity*, Vec2*, float))(Il2CppBase() + 0x16D911C))(0, obstacle, position, radius);
	}
	template <typename T = Vec2*> static T GetCircleCollisionPosition(IArenaWorld* world, GameEntity* obstacle, float radius, bool checkWall, Vec2* startPosition, Vec2* endPosition) {
		return ((T (*)(void *, IArenaWorld*, GameEntity*, float, bool, Vec2*, Vec2*))(Il2CppBase() + 0x16DA2A8))(0, world, obstacle, radius, checkWall, startPosition, endPosition);
	}
	template <typename T = bool> static T CheckBoxCollision(GameEntity* obstacle, GameEntity* entity, Vec2* position, float radius) {
		return ((T (*)(void *, GameEntity*, GameEntity*, Vec2*, float))(Il2CppBase() + 0x16D91E0))(0, obstacle, entity, position, radius);
	}
	template <typename T = Vec2*> static T GetBoxCollisionPosition(IArenaWorld* world, GameEntity* obstacle, GameEntity* entity, float radius, bool checkWall, Vec2* startPosition, Vec2* endPosition) {
		return ((T (*)(void *, IArenaWorld*, GameEntity*, GameEntity*, float, bool, Vec2*, Vec2*))(Il2CppBase() + 0x16DA618))(0, world, obstacle, entity, radius, checkWall, startPosition, endPosition);
	}
	template <typename T = bool> static T CheckBoxCollision_1(float obstacleX, float obstacleY, float halfWidth, float halfHeight, Vec2* position, float radius) {
		return ((T (*)(void *, float, float, float, float, Vec2*, float))(Il2CppBase() + 0x16DABCC))(0, obstacleX, obstacleY, halfWidth, halfHeight, position, radius);
	}
	template <typename T = Vec2*> static T GetBoxCollisionPosition_1(float obstacleX, float obstacleY, float halfWidth, float halfHeight, Vec2* position, float radius) {
		return ((T (*)(void *, float, float, float, float, Vec2*, float))(Il2CppBase() + 0x16DAD68))(0, obstacleX, obstacleY, halfWidth, halfHeight, position, radius);
	}
	template <typename T = Coord*> static T WorldPositionToCellPosition(float x, float y, int32_t cellId) {
		return ((T (*)(void *, float, float, int32_t))(Il2CppBase() + 0x16DB0B0))(0, x, y, cellId);
	}
	template <typename T = bool> static T IsCellPositionEquals(Vec2* vec1, Vec2* vec2) {
		return ((T (*)(void *, Vec2*, Vec2*))(Il2CppBase() + 0x16DB1C0))(0, vec1, vec2);
	}
	template <typename T = Coord*> static T WorldPositionToCellPosition_1(LocationEntity* worldParams, float x, float y) {
		return ((T (*)(void *, LocationEntity*, float, float))(Il2CppBase() + 0x16DB294))(0, worldParams, x, y);
	}
	template <typename T = Coord*> static T WorldPositionToCellPosition_2(LocationEntity* worldParams, Vec2* worldPos) {
		return ((T (*)(void *, LocationEntity*, Vec2*))(Il2CppBase() + 0x16DB394))(0, worldParams, worldPos);
	}
	template <typename T = Coord*> static T WorldPositionToCellPosition_3(LocationEntity* worldParams, IPositionEntity* entity) {
		return ((T (*)(void *, LocationEntity*, IPositionEntity*))(Il2CppBase() + 0x16DB40C))(0, worldParams, entity);
	}
	template <typename T = Vec2*> static T CellPositionToWorldPosition(LocationEntity* worldParams, Coord* cellPos) {
		return ((T (*)(void *, LocationEntity*, Coord*))(Il2CppBase() + 0x16DB578))(0, worldParams, cellPos);
	}
	template <typename T = Vec2*> static T CellPositionToWorldPosition_1(LocationEntity* worldParams, int32_t x, int32_t y) {
		return ((T (*)(void *, LocationEntity*, int32_t, int32_t))(Il2CppBase() + 0x16DB5F0))(0, worldParams, x, y);
	}
	template <typename T = Vec2*> static T CellPositionToWorldPosition_2(int32_t quadId, Vec2* pos) {
		return ((T (*)(void *, int32_t, Vec2*))(Il2CppBase() + 0x16DB674))(0, quadId, pos);
	}
	template <typename T = Vec2*> static T WorldPositionToCellPosition_4(int32_t quadId, Vec2* pos) {
		return ((T (*)(void *, int32_t, Vec2*))(Il2CppBase() + 0x16DB6FC))(0, quadId, pos);
	}
	template <typename T = bool> static T SeparatedByWall(IArenaWorld* world, Vec2* start, Vec2* end) {
		return ((T (*)(void *, IArenaWorld*, Vec2*, Vec2*))(Il2CppBase() + 0x16DB784))(0, world, start, end);
	}
	template <typename T = bool> static T WallTrace(IArenaWorld* world, Vec2* start, float offset, uintptr_t end) {
		return ((T (*)(void *, IArenaWorld*, Vec2*, float, uintptr_t))(Il2CppBase() + 0x16D9BE0))(0, world, start, offset, end);
	}
	template <typename T = bool> static T OnBorder(IPositionEntity* entity, IArenaWorld* world) {
		return ((T (*)(void *, IPositionEntity*, IArenaWorld*))(Il2CppBase() + 0x16DB818))(0, entity, world);
	}
	template <typename T = bool> static T OnBorder_1(float x, float y, IArenaWorld* world) {
		return ((T (*)(void *, float, float, IArenaWorld*))(Il2CppBase() + 0x16DBA04))(0, x, y, world);
	}
	template <typename T = bool> static T IsLeaving(GameEntity* entity, IArenaWorld* world) {
		return ((T (*)(void *, GameEntity*, IArenaWorld*))(Il2CppBase() + 0x16DBC90))(0, entity, world);
	}
	template <typename T = bool> static T IsInFrontOf(GameEntity* actor, GameEntity* target) {
		return ((T (*)(void *, GameEntity*, GameEntity*))(Il2CppBase() + 0x16DBD28))(0, actor, target);
	}
	template <typename T = float> static T GetRotationToTarget(IPositionEntity* entity, IPositionEntity* target) {
		return ((T (*)(void *, IPositionEntity*, IPositionEntity*))(Il2CppBase() + 0x16DBDCC))(0, entity, target);
	}
	template <typename T = float> static T GetRotationToTarget_1(float fromX, float fromY, float toX, float toY) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x16DC018))(0, fromX, fromY, toX, toY);
	}
	template <typename T = float> static T GetRotationAngle(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x16D6A84))(0, entity);
	}
	template <typename T = uint8_t> static T RotationToOrientation(float angle) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x16DC210))(0, angle);
	}
	template <typename T = float> static T OrientationToRotation(IOrientationEntity* entity) {
		return ((T (*)(void *, IOrientationEntity*))(Il2CppBase() + 0x16DC0C0))(0, entity);
	}
	template <typename T = float> static T OrientationToRotation_1(uint8_t orientation) {
		return ((T (*)(void *, uint8_t))(Il2CppBase() + 0x16DC324))(0, orientation);
	}
	template <typename T = Vec2*> static T GetChildPosition(float positionX, float positionY, float OffsetX, float OffsetY, uint8_t orientation, ICommonLogger* Logger, int32_t WorldId, Il2CppString* blueprint, int32_t entityId) {
		return ((T (*)(void *, float, float, float, float, uint8_t, ICommonLogger*, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x16DC344))(0, positionX, positionY, OffsetX, OffsetY, orientation, Logger, WorldId, blueprint, entityId);
	}

};

