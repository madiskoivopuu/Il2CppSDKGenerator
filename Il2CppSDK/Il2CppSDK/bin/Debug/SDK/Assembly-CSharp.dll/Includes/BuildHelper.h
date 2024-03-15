#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuildHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuildHelper"));
	}


	template <typename R = bool> static R IsBuilderFurniture(GameDataEntity* entity) {
		return ((R (*)(void *, GameDataEntity*))(Il2CppBase() + 0x15A4604))(0, entity);
	}
	template <typename R = bool> static R IsBuilderFloor(GameDataEntity* entity) {
		return ((R (*)(void *, GameDataEntity*))(Il2CppBase() + 0x15A4658))(0, entity);
	}
	template <typename R = bool> static R IsFloor(BuilderComponent* buildEntityComponent) {
		return ((R (*)(void *, BuilderComponent*))(Il2CppBase() + 0x15A46AC))(0, buildEntityComponent);
	}
	template <typename R = bool> static R IsBuilderDoorOrWall(GameDataEntity* entity) {
		return ((R (*)(void *, GameDataEntity*))(Il2CppBase() + 0x15A46CC))(0, entity);
	}
	template <typename R = bool> static R IsDoorOrWall(BuilderComponent* builderComponent) {
		return ((R (*)(void *, BuilderComponent*))(Il2CppBase() + 0x15A4744))(0, builderComponent);
	}
	template <typename R = bool> static R IsBuilderWall(GameDataEntity* entity) {
		return ((R (*)(void *, GameDataEntity*))(Il2CppBase() + 0x15A4778))(0, entity);
	}
	template <typename R = bool> static R IsWall(BuilderComponent* builderComponent) {
		return ((R (*)(void *, BuilderComponent*))(Il2CppBase() + 0x15A47D0))(0, builderComponent);
	}
	template <typename R = bool> static R IsDoor(BuilderComponent* builderComponent) {
		return ((R (*)(void *, BuilderComponent*))(Il2CppBase() + 0x15A47F4))(0, builderComponent);
	}
	template <typename R = bool> static R CanBuilderUpgrade(GameDataEntity* entityData) {
		return ((R (*)(void *, GameDataEntity*))(Il2CppBase() + 0x15A4814))(0, entityData);
	}
	template <typename R = bool> static R IsBuildBlocked(IArenaWorld* world, float posX, float posY) {
		return ((R (*)(void *, IArenaWorld*, float, float))(Il2CppBase() + 0x15A4878))(0, world, posX, posY);
	}
	template <typename R = BoundsVec2*> static R GetWallBounds(GameDataContext* gameData, GameDataEntity* buildEntity, GameEntity* positionEntity) {
		return ((R (*)(void *, GameDataContext*, GameDataEntity*, GameEntity*))(Il2CppBase() + 0x15A4B28))(0, gameData, buildEntity, positionEntity);
	}
	template <typename R = BoundsVec2*> static R GetObjectBounds(GameDataEntity* buildEntity, GameEntity* positionEntity) {
		return ((R (*)(void *, GameDataEntity*, GameEntity*))(Il2CppBase() + 0x15A4CA8))(0, buildEntity, positionEntity);
	}
	template <typename R = bool> static R IsBuildCompleetItem(GameDataEntity* buildEntity) {
		return ((R (*)(void *, GameDataEntity*))(Il2CppBase() + 0x15A4E38))(0, buildEntity);
	}

};

