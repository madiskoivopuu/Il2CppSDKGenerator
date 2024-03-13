#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuildHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuildHelper"));
	}


	template <typename T = bool> static T IsBuilderFurniture(GameDataEntity* entity) {
		return ((T (*)(void *, GameDataEntity*))(Il2CppBase() + 0x15A4604))(0, entity);
	}
	template <typename T = bool> static T IsBuilderFloor(GameDataEntity* entity) {
		return ((T (*)(void *, GameDataEntity*))(Il2CppBase() + 0x15A4658))(0, entity);
	}
	template <typename T = bool> static T IsFloor(BuilderComponent* buildEntityComponent) {
		return ((T (*)(void *, BuilderComponent*))(Il2CppBase() + 0x15A46AC))(0, buildEntityComponent);
	}
	template <typename T = bool> static T IsBuilderDoorOrWall(GameDataEntity* entity) {
		return ((T (*)(void *, GameDataEntity*))(Il2CppBase() + 0x15A46CC))(0, entity);
	}
	template <typename T = bool> static T IsDoorOrWall(BuilderComponent* builderComponent) {
		return ((T (*)(void *, BuilderComponent*))(Il2CppBase() + 0x15A4744))(0, builderComponent);
	}
	template <typename T = bool> static T IsBuilderWall(GameDataEntity* entity) {
		return ((T (*)(void *, GameDataEntity*))(Il2CppBase() + 0x15A4778))(0, entity);
	}
	template <typename T = bool> static T IsWall(BuilderComponent* builderComponent) {
		return ((T (*)(void *, BuilderComponent*))(Il2CppBase() + 0x15A47D0))(0, builderComponent);
	}
	template <typename T = bool> static T IsDoor(BuilderComponent* builderComponent) {
		return ((T (*)(void *, BuilderComponent*))(Il2CppBase() + 0x15A47F4))(0, builderComponent);
	}
	template <typename T = bool> static T CanBuilderUpgrade(GameDataEntity* entityData) {
		return ((T (*)(void *, GameDataEntity*))(Il2CppBase() + 0x15A4814))(0, entityData);
	}
	template <typename T = bool> static T IsBuildBlocked(IArenaWorld* world, float posX, float posY) {
		return ((T (*)(void *, IArenaWorld*, float, float))(Il2CppBase() + 0x15A4878))(0, world, posX, posY);
	}
	template <typename T = BoundsVec2*> static T GetWallBounds(GameDataContext* gameData, GameDataEntity* buildEntity, GameEntity* positionEntity) {
		return ((T (*)(void *, GameDataContext*, GameDataEntity*, GameEntity*))(Il2CppBase() + 0x15A4B28))(0, gameData, buildEntity, positionEntity);
	}
	template <typename T = BoundsVec2*> static T GetObjectBounds(GameDataEntity* buildEntity, GameEntity* positionEntity) {
		return ((T (*)(void *, GameDataEntity*, GameEntity*))(Il2CppBase() + 0x15A4CA8))(0, buildEntity, positionEntity);
	}
	template <typename T = bool> static T IsBuildCompleetItem(GameDataEntity* buildEntity) {
		return ((T (*)(void *, GameDataEntity*))(Il2CppBase() + 0x15A4E38))(0, buildEntity);
	}

};

