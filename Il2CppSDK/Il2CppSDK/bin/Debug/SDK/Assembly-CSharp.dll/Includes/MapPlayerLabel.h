#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapPlayerLabel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapPlayerLabel"));
	}

	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Time() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& RectTransform() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& EnterButton() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& EnterButtonText() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& SpeedButton() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& SpeedButtonText() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& PlayerIcon() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& EffectPrefab() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _effectInstance() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& _entityId() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = void*> T& _isAvatar() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& _playerName() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _playerPath() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& _startId() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& _endId() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = double> T& revert1e7() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppQuaternion> T& _goRotation() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& firstOpen() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& cachedArmingMountState() {
		return *(T*)((uintptr_t)this + 0xB1);
	}
	template <typename T = bool> T& initialize() {
		return *(T*)((uintptr_t)this + 0xB2);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(MapPlayerLabel*))(Il2CppBase() + 0x12BF080))(this);
	}
	template <typename T = bool> T IsVisible(uintptr_t entity, void* visiblePoints) {
		return ((T (*)(MapPlayerLabel*, uintptr_t, void*))(Il2CppBase() + 0x12BF184))(this, entity, visiblePoints);
	}
	template <typename T = void> T UpdateView(uintptr_t entity, void* visiblePoints) {
		return ((T (*)(MapPlayerLabel*, uintptr_t, void*))(Il2CppBase() + 0x12BF29C))(this, entity, visiblePoints);
	}
	template <typename T = void> T TrySpeedUp() {
		return ((T (*)(MapPlayerLabel*))(Il2CppBase() + 0x12C026C))(this);
	}
	template <typename T = void> T TryEnterLocation() {
		return ((T (*)(MapPlayerLabel*))(Il2CppBase() + 0x12C09A8))(this);
	}

};

}
