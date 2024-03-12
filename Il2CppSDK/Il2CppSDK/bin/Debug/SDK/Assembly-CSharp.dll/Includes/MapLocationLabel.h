#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapLocationLabel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapLocationLabel"));
	}

	template <typename T = uintptr_t> T& RectTransform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Difficulties() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Home() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Enemy() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& EventTimer() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& ClosedTimer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& PhaseTimerText() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& PhaseTimerIcon() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& Lock() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& DebugName() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& Clan() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = void*> T& _entityId() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = void*> T& _difficulty() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& _visible() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& IsUnlocked() {
		return *(T*)((uintptr_t)this + 0x89);
	}
	template <typename T = float> T& tickMultiplier() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _playerNameComparer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& _phaseItemName() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void*> T get_Id() {
		return ((T (*)(MapLocationLabel*))(Il2CppBase() + 0x12BBE54))(this);
	}
	template <typename T = bool> T get_IsUnlocked() {
		return ((T (*)(MapLocationLabel*))(Il2CppBase() + 0x12BBE5C))(this);
	}
	template <typename T = void> T set_IsUnlocked(bool value) {
		return ((T (*)(MapLocationLabel*, bool))(Il2CppBase() + 0x12BBE64))(this, value);
	}
	template <typename T = void> T ShowTimer(float value, bool closed, bool hasDummyLocation) {
		return ((T (*)(MapLocationLabel*, float, bool, bool))(Il2CppBase() + 0x12BBE70))(this, value, closed, hasDummyLocation);
	}
	template <typename T = void> T UpdateView(uintptr_t world, uintptr_t entity) {
		return ((T (*)(MapLocationLabel*, uintptr_t, uintptr_t))(Il2CppBase() + 0x12BC2CC))(this, world, entity);
	}
	template <typename T = void> T UpdateTimer(uintptr_t world, uintptr_t entity, float time, int64_t now) {
		return ((T (*)(MapLocationLabel*, uintptr_t, uintptr_t, float, int64_t))(Il2CppBase() + 0x12BD5FC))(this, world, entity, time, now);
	}
	template <typename T = void> T ShowPhase(uintptr_t world, uintptr_t point, int64_t now) {
		return ((T (*)(MapLocationLabel*, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x12BD8B4))(this, world, point, now);
	}

};

}
