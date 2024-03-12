#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PositionComponentExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PositionComponentExtensions"));
	}


	template <typename T = bool> static T RemoveOrientitionIfNeed(uintptr_t gameEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16D48F0))(0, gameEntity);
	}
	template <typename T = bool> static T ReplaceOrientitionIfNeed(uintptr_t gameEntity, unsigned char newValue) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x16D4A6C))(0, gameEntity, newValue);
	}
	template <typename T = bool> static T ReplacePositionAndHashIfNeed(uintptr_t gameEntity, float newX, float newY) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x16D4AF8))(0, gameEntity, newX, newY);
	}
	template <typename T = void> static T UpdateHashPositionAndAABBIfNeed(uintptr_t gameEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16D5018))(0, gameEntity);
	}
	template <typename T = bool> static T ReplaceHashPositionIfNeed(uintptr_t gameEntity, int64_t newHash) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x16D4FAC))(0, gameEntity, newHash);
	}
	template <typename T = bool> static T UpdateBoxAABBIfNeed(uintptr_t gameEntity, unsigned char newOrientition) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x16D4944))(0, gameEntity, newOrientition);
	}
	template <typename T = bool> static T ReplaceAABBIfNeed(uintptr_t gameEntity, float newX, float newY) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x16D4E20))(0, gameEntity, newX, newY);
	}
	template <typename T = bool> static T ReplaceVelocityIfNeed(uintptr_t gameEntity, float newX, float newY) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x16D5120))(0, gameEntity, newX, newY);
	}

};

}
