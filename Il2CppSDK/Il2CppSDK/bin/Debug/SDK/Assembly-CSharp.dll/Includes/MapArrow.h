#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapArrow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapArrow"));
	}

	template <typename T = uintptr_t> T& markerIcon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& triangleIcon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& playerNameText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _triangleTransform() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& centerButton() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& smoothTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& xOffset() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& yOffset() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& triangleOffset() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& effectPrefab() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& _entityId() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _entity() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _buttonRect() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _transform() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _mainCamera() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppVector3> T& currentVelocity() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppVector3> T& triangleCurrentVelocity() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppList<int32_t>*> T& _playerIds() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& _firstOpen() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _effectInstance() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = void> T Bind(uintptr_t world, void* onClick) {
		return ((T (*)(MapArrow*, uintptr_t, void*))(Il2CppBase() + 0x1267744))(this, world, onClick);
	}
	template <typename T = void> T UpdateView(uintptr_t world, uintptr_t entity, uintptr_t arrowsRect, bool isUnlocked, Il2CppList<int32_t>* playerIds) {
		return ((T (*)(MapArrow*, uintptr_t, uintptr_t, uintptr_t, bool, Il2CppList<int32_t>*))(Il2CppBase() + 0x1267924))(this, world, entity, arrowsRect, isUnlocked, playerIds);
	}
	template <typename T = Il2CppString*> T GetPlayerName(uintptr_t entity) {
		return ((T (*)(MapArrow*, uintptr_t))(Il2CppBase() + 0x1268828))(this, entity);
	}
	template <typename T = void> T UpdateMarker(uintptr_t entity) {
		return ((T (*)(MapArrow*, uintptr_t))(Il2CppBase() + 0x126860C))(this, entity);
	}

};

}
