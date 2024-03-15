#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PositionComponentExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PositionComponentExtensions"));
	}


	template <typename R = bool> static R RemoveOrientitionIfNeed(GameEntity* gameEntity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x16D48F0))(0, gameEntity);
	}
	template <typename R = bool> static R ReplaceOrientitionIfNeed(GameEntity* gameEntity, uint8_t newValue) {
		return ((R (*)(void *, GameEntity*, uint8_t))(Il2CppBase() + 0x16D4A6C))(0, gameEntity, newValue);
	}
	template <typename R = bool> static R ReplacePositionAndHashIfNeed(GameEntity* gameEntity, float newX, float newY) {
		return ((R (*)(void *, GameEntity*, float, float))(Il2CppBase() + 0x16D4AF8))(0, gameEntity, newX, newY);
	}
	template <typename R = void> static R UpdateHashPositionAndAABBIfNeed(GameEntity* gameEntity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x16D5018))(0, gameEntity);
	}
	template <typename R = bool> static R ReplaceHashPositionIfNeed(GameEntity* gameEntity, int64_t newHash) {
		return ((R (*)(void *, GameEntity*, int64_t))(Il2CppBase() + 0x16D4FAC))(0, gameEntity, newHash);
	}
	template <typename R = bool> static R UpdateBoxAABBIfNeed(GameEntity* gameEntity, uint8_t newOrientition) {
		return ((R (*)(void *, GameEntity*, uint8_t))(Il2CppBase() + 0x16D4944))(0, gameEntity, newOrientition);
	}
	template <typename R = bool> static R ReplaceAABBIfNeed(GameEntity* gameEntity, float newX, float newY) {
		return ((R (*)(void *, GameEntity*, float, float))(Il2CppBase() + 0x16D4E20))(0, gameEntity, newX, newY);
	}
	template <typename R = bool> static R ReplaceVelocityIfNeed(GameEntity* gameEntity, float newX, float newY) {
		return ((R (*)(void *, GameEntity*, float, float))(Il2CppBase() + 0x16D5120))(0, gameEntity, newX, newY);
	}

};

