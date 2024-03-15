#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapArrow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapArrow"));
	}

	template <typename R = uintptr_t> R& markerIcon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& triangleIcon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& playerNameText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _triangleTransform() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& centerButton() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = float> R& smoothTime() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = float> R& xOffset() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = float> R& yOffset() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = float> R& triangleOffset() {
		return *(R*)((uintptr_t)this + 0x4C);
	}
	template <typename R = uintptr_t> R& effectPrefab() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	 Nullable1<int32_t>*& _entityId() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x58);
	}
	template <typename R = MapUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = GameEntity*> R& _entity() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& _buttonRect() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& _transform() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _mainCamera() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& currentVelocity() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& triangleCurrentVelocity() {
		return *(R*)((uintptr_t)this + 0x94);
	}
	 Il2CppList<int32_t>*& _playerIds() {
		return *(Il2CppList<int32_t>**)((uintptr_t)this + 0xA0);
	}
	template <typename R = bool> R& _firstOpen() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _effectInstance() {
		return *(R*)((uintptr_t)this + 0xB0);
	}

	template <typename R = void> R Bind(MapUnityWorld* world, Action1<GameEntity*>* onClick) {
		return ((R (*)(MapArrow*, MapUnityWorld*, Action1<GameEntity*>*))(Il2CppBase() + 0x1267744))(this, world, onClick);
	}
	template <typename R = void> R UpdateView(MapUnityWorld* world, GameEntity* entity, uintptr_t arrowsRect, bool isUnlocked, Il2CppList<int32_t>* playerIds) {
		return ((R (*)(MapArrow*, MapUnityWorld*, GameEntity*, uintptr_t, bool, Il2CppList<int32_t>*))(Il2CppBase() + 0x1267924))(this, world, entity, arrowsRect, isUnlocked, playerIds);
	}
	template <typename R = Il2CppString*> R GetPlayerName(GameEntity* entity) {
		return ((R (*)(MapArrow*, GameEntity*))(Il2CppBase() + 0x1268828))(this, entity);
	}
	template <typename R = void> R UpdateMarker(GameEntity* entity) {
		return ((R (*)(MapArrow*, GameEntity*))(Il2CppBase() + 0x126860C))(this, entity);
	}

};

