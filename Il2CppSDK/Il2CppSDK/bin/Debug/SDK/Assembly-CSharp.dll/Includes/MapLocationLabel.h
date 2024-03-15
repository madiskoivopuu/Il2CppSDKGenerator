#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapLocationLabel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapLocationLabel"));
	}

	template <typename R = uintptr_t> R& RectTransform() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& Difficulties() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Home() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& Enemy() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& EventTimer() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& ClosedTimer() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& PhaseTimerText() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& PhaseTimerIcon() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& Lock() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& DebugName() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& Clan() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	 Il2CppList<uintptr_t>*& Names() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x70);
	}
	 Nullable1<int32_t>*& _entityId() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x78);
	}
	 Nullable1<Difficulty>*& _difficulty() {
		return *(Nullable1<Difficulty>**)((uintptr_t)this + 0x80);
	}
	template <typename R = bool> R& _visible() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = bool> R& IsUnlocked() {
		return *(R*)((uintptr_t)this + 0x89);
	}
	template <typename R = float> R& tickMultiplier() {
		return *(R*)((uintptr_t)this + 0x8C);
	}
	template <typename R = PlayerNameComparer*> static R& _playerNameComparer() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& _phaseItemName() {
		return *(R*)((uintptr_t)this + 0x90);
	}

	 Nullable1<int32_t>* get_Id() {
		return ((Nullable1<int32_t>* (*)(MapLocationLabel*))(Il2CppBase() + 0x12BBE54))(this);
	}
	template <typename R = bool> R get_IsUnlocked() {
		return ((R (*)(MapLocationLabel*))(Il2CppBase() + 0x12BBE5C))(this);
	}
	template <typename R = void> R set_IsUnlocked(bool value) {
		return ((R (*)(MapLocationLabel*, bool))(Il2CppBase() + 0x12BBE64))(this, value);
	}
	template <typename R = void> R ShowTimer(float value, bool closed, bool hasDummyLocation) {
		return ((R (*)(MapLocationLabel*, float, bool, bool))(Il2CppBase() + 0x12BBE70))(this, value, closed, hasDummyLocation);
	}
	template <typename R = void> R UpdateView(MapUnityWorld* world, GameEntity* entity) {
		return ((R (*)(MapLocationLabel*, MapUnityWorld*, GameEntity*))(Il2CppBase() + 0x12BC2CC))(this, world, entity);
	}
	template <typename R = void> R UpdateTimer(MapUnityWorld* world, GameEntity* entity, float time, int64_t now) {
		return ((R (*)(MapLocationLabel*, MapUnityWorld*, GameEntity*, float, int64_t))(Il2CppBase() + 0x12BD5FC))(this, world, entity, time, now);
	}
	template <typename R = void> R ShowPhase(MapUnityWorld* world, GameEntity* point, int64_t now) {
		return ((R (*)(MapLocationLabel*, MapUnityWorld*, GameEntity*, int64_t))(Il2CppBase() + 0x12BD8B4))(this, world, point, now);
	}

};

