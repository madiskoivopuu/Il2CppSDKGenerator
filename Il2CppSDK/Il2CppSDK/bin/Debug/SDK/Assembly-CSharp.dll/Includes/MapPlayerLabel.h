#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapPlayerLabel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapPlayerLabel"));
	}

	template <typename R = uintptr_t> R& Container() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Time() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& RectTransform() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& EnterButton() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& EnterButtonText() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& SpeedButton() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& SpeedButtonText() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& PlayerIcon() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& EffectPrefab() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _effectInstance() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> R& _entityId() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	 Nullable1<bool>*& _isAvatar() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x74);
	}
	template <typename R = Il2CppString*> R& _playerName() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _playerPath() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = Il2CppString*> R& _startId() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = Il2CppString*> R& _endId() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = double> R& revert1e7() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _goRotation() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = bool> R& firstOpen() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = bool> R& cachedArmingMountState() {
		return *(R*)((uintptr_t)this + 0xB1);
	}
	template <typename R = bool> R& initialize() {
		return *(R*)((uintptr_t)this + 0xB2);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(MapPlayerLabel*))(Il2CppBase() + 0x12BF080))(this);
	}
	template <typename R = bool> R IsVisible(GameEntity* entity, HashSet1<Il2CppString*>* visiblePoints) {
		return ((R (*)(MapPlayerLabel*, GameEntity*, HashSet1<Il2CppString*>*))(Il2CppBase() + 0x12BF184))(this, entity, visiblePoints);
	}
	template <typename R = void> R UpdateView(GameEntity* entity, HashSet1<Il2CppString*>* visiblePoints) {
		return ((R (*)(MapPlayerLabel*, GameEntity*, HashSet1<Il2CppString*>*))(Il2CppBase() + 0x12BF29C))(this, entity, visiblePoints);
	}
	template <typename R = void> R TrySpeedUp() {
		return ((R (*)(MapPlayerLabel*))(Il2CppBase() + 0x12C026C))(this);
	}
	template <typename R = void> R TryEnterLocation() {
		return ((R (*)(MapPlayerLabel*))(Il2CppBase() + 0x12C09A8))(this);
	}

};

