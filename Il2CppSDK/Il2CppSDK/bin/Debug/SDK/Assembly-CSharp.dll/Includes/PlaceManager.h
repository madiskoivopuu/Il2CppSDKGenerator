#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlaceManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlaceManager"));
	}

	template <typename T = ICommonLogger*> T& _logger() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _quadId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _placeMask() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _width() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _height() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = Fill*> T get_Item(int32_t x, int32_t y) {
		return ((T (*)(PlaceManager*, int32_t, int32_t))(Il2CppBase() + 0x16F719C))(this, x, y);
	}
	template <typename T = PlaceManagerResultCode*> T CanPlace(GameEntity* entity, GameDataEntity* entityData) {
		return ((T (*)(PlaceManager*, GameEntity*, GameDataEntity*))(Il2CppBase() + 0x16F7324))(this, entity, entityData);
	}
	template <typename T = PlaceManagerResultCode*> T CanPlace_1(float x, float y, GamePlaceComponent* placeComponent, OrientationComponent* orientationComponent) {
		return ((T (*)(PlaceManager*, float, float, GamePlaceComponent*, OrientationComponent*))(Il2CppBase() + 0x16F74F0))(this, x, y, placeComponent, orientationComponent);
	}
	template <typename T = PlaceManagerResultCode*> T CanPlace_2(float x, float y, GamePlaceComponent* placeComponent, uint8_t orientation) {
		return ((T (*)(PlaceManager*, float, float, GamePlaceComponent*, uint8_t))(Il2CppBase() + 0x16F750C))(this, x, y, placeComponent, orientation);
	}
	template <typename T = void> T AddToMask(GameEntity* entity) {
		return ((T (*)(PlaceManager*, GameEntity*))(Il2CppBase() + 0x16F77DC))(this, entity);
	}
	template <typename T = void> T RemoveFromMask(GameEntity* entity) {
		return ((T (*)(PlaceManager*, GameEntity*))(Il2CppBase() + 0x16F7B48))(this, entity);
	}
	template <typename T = void> T AddToMask_1(float x, float y, GamePlaceComponent* placeComponent, OrientationComponent* orientationComponent) {
		return ((T (*)(PlaceManager*, float, float, GamePlaceComponent*, OrientationComponent*))(Il2CppBase() + 0x16F797C))(this, x, y, placeComponent, orientationComponent);
	}
	template <typename T = Fill*> T GetFillByPosition(GameEntity* entity, int32_t cellId) {
		return ((T (*)(PlaceManager*, GameEntity*, int32_t))(Il2CppBase() + 0x16F7E8C))(this, entity, cellId);
	}
	template <typename T = void> T RemoveFromMask_1(float x, float y, GamePlaceComponent* placeComponent, OrientationComponent* orientationComponent) {
		return ((T (*)(PlaceManager*, float, float, GamePlaceComponent*, OrientationComponent*))(Il2CppBase() + 0x16F7C38))(this, x, y, placeComponent, orientationComponent);
	}
	template <typename T = PlaceManagerResultCode*> T CanPlace_3(int32_t x, int32_t y, Fill* required, Fill* none) {
		return ((T (*)(PlaceManager*, int32_t, int32_t, Fill*, Fill*))(Il2CppBase() + 0x16F76E4))(this, x, y, required, none);
	}
	template <typename T = PlaceManagerResultCode*> T CheckFirstCellRequirement(GameEntity* entity, GameDataEntity* buildEntity) {
		return ((T (*)(PlaceManager*, GameEntity*, GameDataEntity*))(Il2CppBase() + 0x16F8238))(this, entity, buildEntity);
	}
	template <typename T = PlaceManagerResultCode*> T WhatNeed(Fill* required) {
		return ((T (*)(PlaceManager*, Fill*))(Il2CppBase() + 0x16F81D0))(this, required);
	}
	template <typename T = void> T AddToMask_2(int32_t x, int32_t y, Fill* fill) {
		return ((T (*)(PlaceManager*, int32_t, int32_t, Fill*))(Il2CppBase() + 0x16F7E04))(this, x, y, fill);
	}
	template <typename T = void> T RemoveFromMask_2(int32_t x, int32_t y, Fill* fill) {
		return ((T (*)(PlaceManager*, int32_t, int32_t, Fill*))(Il2CppBase() + 0x16F8150))(this, x, y, fill);
	}

};

