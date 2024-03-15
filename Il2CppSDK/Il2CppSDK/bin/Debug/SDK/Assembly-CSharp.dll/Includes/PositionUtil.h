#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PositionUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PositionUtil"));
	}

	template <typename R = int32_t> static R& _groundLayerMask() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> static R& _plane() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename R = float> static R& DEFAULT_ROTATION() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = float> static R Snap(float value) {
		return ((R (*)(void *, float))(Il2CppBase() + 0x16D5FC8))(0, value);
	}
	template <typename R = uint8_t> static R ReplacePositionSnapped(GameEntity* entity, float x, float y, BuilderComponent* buildEntityComponent) {
		return ((R (*)(void *, GameEntity*, float, float, BuilderComponent*))(Il2CppBase() + 0x16D60C8))(0, entity, x, y, buildEntityComponent);
	}
	template <typename R = float> static R SqrDistance(IPositionEntity* e1, IPositionEntity* e2) {
		return ((R (*)(void *, IPositionEntity*, IPositionEntity*))(Il2CppBase() + 0x16D62C4))(0, e1, e2);
	}
	template <typename R = Vec2> static R GetPredictedPosition(GameEntity* entity, int64_t time) {
		return ((R (*)(void *, GameEntity*, int64_t))(Il2CppBase() + 0x16D6578))(0, entity, time);
	}
	template <typename R = Vec2> static R GetDirection(float angle) {
		return ((R (*)(void *, float))(Il2CppBase() + 0x16D6798))(0, angle);
	}
	template <typename R = Vec2> static R GetDirection_1(IRotationEntity* rotationEntity) {
		return ((R (*)(void *, IRotationEntity*))(Il2CppBase() + 0x16D684C))(0, rotationEntity);
	}
	template <typename R = Vec2> static R GetDirection_2(GameEntity* gameEntity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x16D6990))(0, gameEntity);
	}
	template <typename R = Vec2> static R GetDirection_3(ActionEntity* actionEntity) {
		return ((R (*)(void *, ActionEntity*))(Il2CppBase() + 0x16D6B1C))(0, actionEntity);
	}
	template <typename R = Vec2> static R GetDirectionTo(Vec2 from, Vec2 to) {
		return ((R (*)(void *, Vec2, Vec2))(Il2CppBase() + 0x16D6BE8))(0, from, to);
	}
	template <typename R = bool> static R InViewAngle(IPositionEntity* e1, IPositionEntity* e2, float rotation, float angle) {
		return ((R (*)(void *, IPositionEntity*, IPositionEntity*, float, float))(Il2CppBase() + 0x16D6C28))(0, e1, e2, rotation, angle);
	}
	template <typename R = bool> static R InViewAngle_1(Vec2 pos1, Vec2 pos2, float rotation, float angle) {
		return ((R (*)(void *, Vec2, Vec2, float, float))(Il2CppBase() + 0x16D6DBC))(0, pos1, pos2, rotation, angle);
	}
	template <typename R = float> static R SqrDistance_1(Vec2 from, Vec2 to) {
		return ((R (*)(void *, Vec2, Vec2))(Il2CppBase() + 0x16D6F0C))(0, from, to);
	}
	template <typename R = float> static R SqrDistance_2(IPositionEntity* e1, float x, float y) {
		return ((R (*)(void *, IPositionEntity*, float, float))(Il2CppBase() + 0x16D6430))(0, e1, x, y);
	}
	template <typename R = GameEntity*> static R GetNearestLeavePoint(GameContext* context, float x, float y, Il2CppList<GameEntity*>* leavepoints) {
		return ((R (*)(void *, GameContext*, float, float, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x16D6F24))(0, context, x, y, leavepoints);
	}
	template <typename R = GameEntity*> static R GetNearestFromGroup(IPositionEntity* center, IGroup1<GameEntity*>* group, Predicate1<GameEntity*>* predicate) {
		return ((R (*)(void *, IPositionEntity*, IGroup1<GameEntity*>*, Predicate1<GameEntity*>*))(Il2CppBase() + 0x16D70C4))(0, center, group, predicate);
	}
	template <typename R = float> static R MaxAxisDistance(IPositionEntity* e1, float x, float y) {
		return ((R (*)(void *, IPositionEntity*, float, float))(Il2CppBase() + 0x16D7400))(0, e1, x, y);
	}
	template <typename R = bool> static R IsInQuad(IPositionEntity* e, int32_t quadId) {
		return ((R (*)(void *, IPositionEntity*, int32_t))(Il2CppBase() + 0x16D7574))(0, e, quadId);
	}
	template <typename R = bool> static R IsInQuadArea(IPositionEntity* e, int32_t quadId) {
		return ((R (*)(void *, IPositionEntity*, int32_t))(Il2CppBase() + 0x16D7814))(0, e, quadId);
	}
	template <typename R = bool> static R IsInQuad_1(float x, float y, int32_t quadId) {
		return ((R (*)(void *, float, float, int32_t))(Il2CppBase() + 0x16D7760))(0, x, y, quadId);
	}
	template <typename R = bool> static R IsInQuadSide(float x, float y, int32_t quadId) {
		return ((R (*)(void *, float, float, int32_t))(Il2CppBase() + 0x16D7A00))(0, x, y, quadId);
	}
	template <typename R = int32_t> static R GetQuadId(IPositionEntity* positionEntity) {
		return ((R (*)(void *, IPositionEntity*))(Il2CppBase() + 0x16D7B40))(0, positionEntity);
	}
	template <typename R = int32_t> static R GetQuadId_1(BasePositionComponent* position) {
		return ((R (*)(void *, BasePositionComponent*))(Il2CppBase() + 0x16D7D28))(0, position);
	}
	template <typename R = int32_t> static R GetQuadId_2(float x, float y) {
		return ((R (*)(void *, float, float))(Il2CppBase() + 0x16D7A90))(0, x, y);
	}
	template <typename R = int32_t> static R GetSimplyQuadId(IPositionEntity* positionEntity) {
		return ((R (*)(void *, IPositionEntity*))(Il2CppBase() + 0x16D7DA0))(0, positionEntity);
	}
	template <typename R = int32_t> static R GetSimplyQuadId_1(BasePositionComponent* position) {
		return ((R (*)(void *, BasePositionComponent*))(Il2CppBase() + 0x16D7C9C))(0, position);
	}
	template <typename R = int32_t> static R GetSimplyQuadId_2(float x, float y) {
		return ((R (*)(void *, float, float))(Il2CppBase() + 0x16D7EFC))(0, x, y);
	}
	template <typename R = Vec2> static R GetNearestQuadPosition(float x, float y, int32_t quadId, float offset) {
		return ((R (*)(void *, float, float, int32_t, float))(Il2CppBase() + 0x16D7F24))(0, x, y, quadId, offset);
	}
	template <typename R = int32_t> static R GetQuadSideId(IPositionEntity* e) {
		return ((R (*)(void *, IPositionEntity*))(Il2CppBase() + 0x16D804C))(0, e);
	}
	template <typename R = int32_t> static R GetQuadSideId_1(float x, float y) {
		return ((R (*)(void *, float, float))(Il2CppBase() + 0x16D7B18))(0, x, y);
	}
	template <typename R = Vec2> static R ToVec2(BasePositionComponent* positionComponent) {
		return ((R (*)(void *, BasePositionComponent*))(Il2CppBase() + 0x16D6728))(0, positionComponent);
	}
	template <typename R = Vec2> static R ToVec2_1(VelocityComponent* velocityComponent) {
		return ((R (*)(void *, VelocityComponent*))(Il2CppBase() + 0x16D6760))(0, velocityComponent);
	}
	template <typename R = void> static R SetWorldToView(uintptr_t CanvasRef, uintptr_t rectTransform, uintptr_t transform, float OffsetY) {
		return ((R (*)(void *, uintptr_t, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x16D8234))(0, CanvasRef, rectTransform, transform, OffsetY);
	}
	template <typename R = void> static R SetWorldToView_1(uintptr_t CanvasRef, uintptr_t rectTransform, uintptr_t worldPos, float OffsetY) {
		return ((R (*)(void *, uintptr_t, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x16D82E4))(0, CanvasRef, rectTransform, worldPos, OffsetY);
	}
	template <typename R = void> static R SetWorldToView_2(uintptr_t rectTransform, uintptr_t worldPos, float OffsetY) {
		return ((R (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x16D83F4))(0, rectTransform, worldPos, OffsetY);
	}
	template <typename R = uintptr_t> static R PositionOnGround(uintptr_t position) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x16D8504))(0, position);
	}
	template <typename R = uintptr_t> static R GetWorldPosition(uintptr_t mousePosition) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x16D8650))(0, mousePosition);
	}
	template <typename R = uintptr_t> static R GetPlanePosition(uintptr_t start) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x16D87BC))(0, start);
	}
	template <typename R = uintptr_t> static R ToVector3(IPositionEntity* entity) {
		return ((R (*)(void *, IPositionEntity*))(Il2CppBase() + 0x16D897C))(0, entity);
	}
	template <typename R = uintptr_t> static R ToVector3_1(BasePositionComponent* position) {
		return ((R (*)(void *, BasePositionComponent*))(Il2CppBase() + 0x16D8AA8))(0, position);
	}
	template <typename R = void> static R ReplacePositionNext(GameEntity* entity, int32_t count, BuildMethod buildMethod) {
		return ((R (*)(void *, GameEntity*, int32_t, BuildMethod))(Il2CppBase() + 0x16D8AC4))(0, entity, count, buildMethod);
	}
	template <typename R = int64_t> static R HashPosition(float x, float y) {
		return ((R (*)(void *, float, float))(Il2CppBase() + 0x16D4CAC))(0, x, y);
	}
	template <typename R = bool> static R CheckCollision(ICommonContexts* world, EntitiesWithPositionNear1<GameEntity*>* obstacles, float radius, Vec2 position, GameEntity* entity) {
		return ((R (*)(void *, ICommonContexts*, EntitiesWithPositionNear1<GameEntity*>*, float, Vec2, GameEntity*))(Il2CppBase() + 0x16D8CF0))(0, world, obstacles, radius, position, entity);
	}
	template <typename R = bool> static R CheckCollision_1(GameEntity* entity, ICommonContexts* world, EntitiesWithPositionNear1<GameEntity*>* obstacles, Vec2 position) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, EntitiesWithPositionNear1<GameEntity*>*, Vec2))(Il2CppBase() + 0x16D9584))(0, entity, world, obstacles, position);
	}
	template <typename R = Vec2> static R GetPushOutPosition(IArenaWorld* world, EntitiesWithPositionNear1<GameEntity*>* obstacles, Vec2 startPosition, Vec2 position, float radius, bool checkWall, GameEntity* entity) {
		return ((R (*)(void *, IArenaWorld*, EntitiesWithPositionNear1<GameEntity*>*, Vec2, Vec2, float, bool, GameEntity*))(Il2CppBase() + 0x16D96B0))(0, world, obstacles, startPosition, position, radius, checkWall, entity);
	}
	template <typename R = Vec2> static R ReplacePushOutPosition(GameEntity* entity, IArenaWorld* world, EntitiesWithPositionNear1<GameEntity*>* obstacles, Vec2 position, bool checkWall) {
		return ((R (*)(void *, GameEntity*, IArenaWorld*, EntitiesWithPositionNear1<GameEntity*>*, Vec2, bool))(Il2CppBase() + 0x16DA984))(0, entity, world, obstacles, position, checkWall);
	}
	template <typename R = bool> static R CheckCircleCollision(GameEntity* obstacle, Vec2 position, float radius) {
		return ((R (*)(void *, GameEntity*, Vec2, float))(Il2CppBase() + 0x16D911C))(0, obstacle, position, radius);
	}
	template <typename R = Vec2> static R GetCircleCollisionPosition(IArenaWorld* world, GameEntity* obstacle, float radius, bool checkWall, Vec2 startPosition, Vec2 endPosition) {
		return ((R (*)(void *, IArenaWorld*, GameEntity*, float, bool, Vec2, Vec2))(Il2CppBase() + 0x16DA2A8))(0, world, obstacle, radius, checkWall, startPosition, endPosition);
	}
	template <typename R = bool> static R CheckBoxCollision(GameEntity* obstacle, GameEntity* entity, Vec2 position, float radius) {
		return ((R (*)(void *, GameEntity*, GameEntity*, Vec2, float))(Il2CppBase() + 0x16D91E0))(0, obstacle, entity, position, radius);
	}
	template <typename R = Vec2> static R GetBoxCollisionPosition(IArenaWorld* world, GameEntity* obstacle, GameEntity* entity, float radius, bool checkWall, Vec2 startPosition, Vec2 endPosition) {
		return ((R (*)(void *, IArenaWorld*, GameEntity*, GameEntity*, float, bool, Vec2, Vec2))(Il2CppBase() + 0x16DA618))(0, world, obstacle, entity, radius, checkWall, startPosition, endPosition);
	}
	template <typename R = bool> static R CheckBoxCollision_1(float obstacleX, float obstacleY, float halfWidth, float halfHeight, Vec2 position, float radius) {
		return ((R (*)(void *, float, float, float, float, Vec2, float))(Il2CppBase() + 0x16DABCC))(0, obstacleX, obstacleY, halfWidth, halfHeight, position, radius);
	}
	template <typename R = Vec2> static R GetBoxCollisionPosition_1(float obstacleX, float obstacleY, float halfWidth, float halfHeight, Vec2 position, float radius) {
		return ((R (*)(void *, float, float, float, float, Vec2, float))(Il2CppBase() + 0x16DAD68))(0, obstacleX, obstacleY, halfWidth, halfHeight, position, radius);
	}
	template <typename R = Coord> static R WorldPositionToCellPosition(float x, float y, int32_t cellId) {
		return ((R (*)(void *, float, float, int32_t))(Il2CppBase() + 0x16DB0B0))(0, x, y, cellId);
	}
	template <typename R = bool> static R IsCellPositionEquals(Vec2 vec1, Vec2 vec2) {
		return ((R (*)(void *, Vec2, Vec2))(Il2CppBase() + 0x16DB1C0))(0, vec1, vec2);
	}
	template <typename R = Coord> static R WorldPositionToCellPosition_1(LocationEntity* worldParams, float x, float y) {
		return ((R (*)(void *, LocationEntity*, float, float))(Il2CppBase() + 0x16DB294))(0, worldParams, x, y);
	}
	template <typename R = Coord> static R WorldPositionToCellPosition_2(LocationEntity* worldParams, Vec2 worldPos) {
		return ((R (*)(void *, LocationEntity*, Vec2))(Il2CppBase() + 0x16DB394))(0, worldParams, worldPos);
	}
	template <typename R = Coord> static R WorldPositionToCellPosition_3(LocationEntity* worldParams, IPositionEntity* entity) {
		return ((R (*)(void *, LocationEntity*, IPositionEntity*))(Il2CppBase() + 0x16DB40C))(0, worldParams, entity);
	}
	template <typename R = Vec2> static R CellPositionToWorldPosition(LocationEntity* worldParams, Coord cellPos) {
		return ((R (*)(void *, LocationEntity*, Coord))(Il2CppBase() + 0x16DB578))(0, worldParams, cellPos);
	}
	template <typename R = Vec2> static R CellPositionToWorldPosition_1(LocationEntity* worldParams, int32_t x, int32_t y) {
		return ((R (*)(void *, LocationEntity*, int32_t, int32_t))(Il2CppBase() + 0x16DB5F0))(0, worldParams, x, y);
	}
	template <typename R = Vec2> static R CellPositionToWorldPosition_2(int32_t quadId, Vec2 pos) {
		return ((R (*)(void *, int32_t, Vec2))(Il2CppBase() + 0x16DB674))(0, quadId, pos);
	}
	template <typename R = Vec2> static R WorldPositionToCellPosition_4(int32_t quadId, Vec2 pos) {
		return ((R (*)(void *, int32_t, Vec2))(Il2CppBase() + 0x16DB6FC))(0, quadId, pos);
	}
	template <typename R = bool> static R SeparatedByWall(IArenaWorld* world, Vec2 start, Vec2 end) {
		return ((R (*)(void *, IArenaWorld*, Vec2, Vec2))(Il2CppBase() + 0x16DB784))(0, world, start, end);
	}
	template <typename R = bool> static R WallTrace(IArenaWorld* world, Vec2 start, float offset, uintptr_t end) {
		return ((R (*)(void *, IArenaWorld*, Vec2, float, uintptr_t))(Il2CppBase() + 0x16D9BE0))(0, world, start, offset, end);
	}
	template <typename R = bool> static R OnBorder(IPositionEntity* entity, IArenaWorld* world) {
		return ((R (*)(void *, IPositionEntity*, IArenaWorld*))(Il2CppBase() + 0x16DB818))(0, entity, world);
	}
	template <typename R = bool> static R OnBorder_1(float x, float y, IArenaWorld* world) {
		return ((R (*)(void *, float, float, IArenaWorld*))(Il2CppBase() + 0x16DBA04))(0, x, y, world);
	}
	template <typename R = bool> static R IsLeaving(GameEntity* entity, IArenaWorld* world) {
		return ((R (*)(void *, GameEntity*, IArenaWorld*))(Il2CppBase() + 0x16DBC90))(0, entity, world);
	}
	template <typename R = bool> static R IsInFrontOf(GameEntity* actor, GameEntity* target) {
		return ((R (*)(void *, GameEntity*, GameEntity*))(Il2CppBase() + 0x16DBD28))(0, actor, target);
	}
	template <typename R = float> static R GetRotationToTarget(IPositionEntity* entity, IPositionEntity* target) {
		return ((R (*)(void *, IPositionEntity*, IPositionEntity*))(Il2CppBase() + 0x16DBDCC))(0, entity, target);
	}
	template <typename R = float> static R GetRotationToTarget_1(float fromX, float fromY, float toX, float toY) {
		return ((R (*)(void *, float, float, float, float))(Il2CppBase() + 0x16DC018))(0, fromX, fromY, toX, toY);
	}
	template <typename R = float> static R GetRotationAngle(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x16D6A84))(0, entity);
	}
	template <typename R = uint8_t> static R RotationToOrientation(float angle) {
		return ((R (*)(void *, float))(Il2CppBase() + 0x16DC210))(0, angle);
	}
	template <typename R = float> static R OrientationToRotation(IOrientationEntity* entity) {
		return ((R (*)(void *, IOrientationEntity*))(Il2CppBase() + 0x16DC0C0))(0, entity);
	}
	template <typename R = float> static R OrientationToRotation_1(uint8_t orientation) {
		return ((R (*)(void *, uint8_t))(Il2CppBase() + 0x16DC324))(0, orientation);
	}
	template <typename R = Vec2> static R GetChildPosition(float positionX, float positionY, float OffsetX, float OffsetY, uint8_t orientation, ICommonLogger* Logger, int32_t WorldId, Il2CppString* blueprint, int32_t entityId) {
		return ((R (*)(void *, float, float, float, float, uint8_t, ICommonLogger*, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x16DC344))(0, positionX, positionY, OffsetX, OffsetY, orientation, Logger, WorldId, blueprint, entityId);
	}

};

