#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuildHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuildHelper"));
	}


	template <typename T = bool> static T IsBuilderFurniture(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15A4604))(0, entity);
	}
	template <typename T = bool> static T IsBuilderFloor(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15A4658))(0, entity);
	}
	template <typename T = bool> static T IsFloor(uintptr_t buildEntityComponent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15A46AC))(0, buildEntityComponent);
	}
	template <typename T = bool> static T IsBuilderDoorOrWall(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15A46CC))(0, entity);
	}
	template <typename T = bool> static T IsDoorOrWall(uintptr_t builderComponent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15A4744))(0, builderComponent);
	}
	template <typename T = bool> static T IsBuilderWall(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15A4778))(0, entity);
	}
	template <typename T = bool> static T IsWall(uintptr_t builderComponent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15A47D0))(0, builderComponent);
	}
	template <typename T = bool> static T IsDoor(uintptr_t builderComponent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15A47F4))(0, builderComponent);
	}
	template <typename T = bool> static T CanBuilderUpgrade(uintptr_t entityData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15A4814))(0, entityData);
	}
	template <typename T = bool> static T IsBuildBlocked(uintptr_t world, float posX, float posY) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x15A4878))(0, world, posX, posY);
	}
	template <typename T = uintptr_t> static T GetWallBounds(uintptr_t gameData, uintptr_t buildEntity, uintptr_t positionEntity) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x15A4B28))(0, gameData, buildEntity, positionEntity);
	}
	template <typename T = uintptr_t> static T GetObjectBounds(uintptr_t buildEntity, uintptr_t positionEntity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x15A4CA8))(0, buildEntity, positionEntity);
	}
	template <typename T = bool> static T IsBuildCompleetItem(uintptr_t buildEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15A4E38))(0, buildEntity);
	}

};

}
