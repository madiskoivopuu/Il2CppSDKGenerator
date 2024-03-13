#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PositionComponentExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PositionComponentExtensions"));
	}


	template <typename T = bool> static T RemoveOrientitionIfNeed(GameEntity* gameEntity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x16D48F0))(0, gameEntity);
	}
	template <typename T = bool> static T ReplaceOrientitionIfNeed(GameEntity* gameEntity, uint8_t newValue) {
		return ((T (*)(void *, GameEntity*, uint8_t))(Il2CppBase() + 0x16D4A6C))(0, gameEntity, newValue);
	}
	template <typename T = bool> static T ReplacePositionAndHashIfNeed(GameEntity* gameEntity, float newX, float newY) {
		return ((T (*)(void *, GameEntity*, float, float))(Il2CppBase() + 0x16D4AF8))(0, gameEntity, newX, newY);
	}
	template <typename T = void> static T UpdateHashPositionAndAABBIfNeed(GameEntity* gameEntity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x16D5018))(0, gameEntity);
	}
	template <typename T = bool> static T ReplaceHashPositionIfNeed(GameEntity* gameEntity, int64_t newHash) {
		return ((T (*)(void *, GameEntity*, int64_t))(Il2CppBase() + 0x16D4FAC))(0, gameEntity, newHash);
	}
	template <typename T = bool> static T UpdateBoxAABBIfNeed(GameEntity* gameEntity, uint8_t newOrientition) {
		return ((T (*)(void *, GameEntity*, uint8_t))(Il2CppBase() + 0x16D4944))(0, gameEntity, newOrientition);
	}
	template <typename T = bool> static T ReplaceAABBIfNeed(GameEntity* gameEntity, float newX, float newY) {
		return ((T (*)(void *, GameEntity*, float, float))(Il2CppBase() + 0x16D4E20))(0, gameEntity, newX, newY);
	}
	template <typename T = bool> static T ReplaceVelocityIfNeed(GameEntity* gameEntity, float newX, float newY) {
		return ((T (*)(void *, GameEntity*, float, float))(Il2CppBase() + 0x16D5120))(0, gameEntity, newX, newY);
	}

};

