#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlaceManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlaceManager"));
	}

	template <typename R = ICommonLogger*> R& _logger() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& _quadId() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _placeMask() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& _width() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& _height() {
		return *(R*)((uintptr_t)this + 0x2C);
	}

	template <typename R = Fill*> R get_Item(int32_t x, int32_t y) {
		return ((R (*)(PlaceManager*, int32_t, int32_t))(Il2CppBase() + 0x16F719C))(this, x, y);
	}
	template <typename R = PlaceManagerResultCode*> R CanPlace(GameEntity* entity, GameDataEntity* entityData) {
		return ((R (*)(PlaceManager*, GameEntity*, GameDataEntity*))(Il2CppBase() + 0x16F7324))(this, entity, entityData);
	}
	template <typename R = PlaceManagerResultCode*> R CanPlace_1(float x, float y, GamePlaceComponent* placeComponent, OrientationComponent* orientationComponent) {
		return ((R (*)(PlaceManager*, float, float, GamePlaceComponent*, OrientationComponent*))(Il2CppBase() + 0x16F74F0))(this, x, y, placeComponent, orientationComponent);
	}
	template <typename R = PlaceManagerResultCode*> R CanPlace_2(float x, float y, GamePlaceComponent* placeComponent, uint8_t orientation) {
		return ((R (*)(PlaceManager*, float, float, GamePlaceComponent*, uint8_t))(Il2CppBase() + 0x16F750C))(this, x, y, placeComponent, orientation);
	}
	template <typename R = void> R AddToMask(GameEntity* entity) {
		return ((R (*)(PlaceManager*, GameEntity*))(Il2CppBase() + 0x16F77DC))(this, entity);
	}
	template <typename R = void> R RemoveFromMask(GameEntity* entity) {
		return ((R (*)(PlaceManager*, GameEntity*))(Il2CppBase() + 0x16F7B48))(this, entity);
	}
	template <typename R = void> R AddToMask_1(float x, float y, GamePlaceComponent* placeComponent, OrientationComponent* orientationComponent) {
		return ((R (*)(PlaceManager*, float, float, GamePlaceComponent*, OrientationComponent*))(Il2CppBase() + 0x16F797C))(this, x, y, placeComponent, orientationComponent);
	}
	template <typename R = Fill*> R GetFillByPosition(GameEntity* entity, int32_t cellId) {
		return ((R (*)(PlaceManager*, GameEntity*, int32_t))(Il2CppBase() + 0x16F7E8C))(this, entity, cellId);
	}
	template <typename R = void> R RemoveFromMask_1(float x, float y, GamePlaceComponent* placeComponent, OrientationComponent* orientationComponent) {
		return ((R (*)(PlaceManager*, float, float, GamePlaceComponent*, OrientationComponent*))(Il2CppBase() + 0x16F7C38))(this, x, y, placeComponent, orientationComponent);
	}
	template <typename R = PlaceManagerResultCode*> R CanPlace_3(int32_t x, int32_t y, Fill* required, Fill* none) {
		return ((R (*)(PlaceManager*, int32_t, int32_t, Fill*, Fill*))(Il2CppBase() + 0x16F76E4))(this, x, y, required, none);
	}
	template <typename R = PlaceManagerResultCode*> R CheckFirstCellRequirement(GameEntity* entity, GameDataEntity* buildEntity) {
		return ((R (*)(PlaceManager*, GameEntity*, GameDataEntity*))(Il2CppBase() + 0x16F8238))(this, entity, buildEntity);
	}
	template <typename R = PlaceManagerResultCode*> R WhatNeed(Fill* required) {
		return ((R (*)(PlaceManager*, Fill*))(Il2CppBase() + 0x16F81D0))(this, required);
	}
	template <typename R = void> R AddToMask_2(int32_t x, int32_t y, Fill* fill) {
		return ((R (*)(PlaceManager*, int32_t, int32_t, Fill*))(Il2CppBase() + 0x16F7E04))(this, x, y, fill);
	}
	template <typename R = void> R RemoveFromMask_2(int32_t x, int32_t y, Fill* fill) {
		return ((R (*)(PlaceManager*, int32_t, int32_t, Fill*))(Il2CppBase() + 0x16F8150))(this, x, y, fill);
	}

};

