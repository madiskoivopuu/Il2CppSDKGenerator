#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PvPEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PvPEntity"));
	}

	template <typename R = AvatarComponent*> static R& avatarComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = bool> R get_isAvatar() {
		return ((R (*)(PvPEntity*))(Il2CppBase() + 0x11BD368))(this);
	}
	template <typename R = void> R set_isAvatar(bool value) {
		return ((R (*)(PvPEntity*, bool))(Il2CppBase() + 0x11BD244))(this, value);
	}
	template <typename R = DurationComponent*> R get_duration() {
		return ((R (*)(PvPEntity*))(Il2CppBase() + 0x11BD374))(this);
	}
	template <typename R = bool> R get_hasDuration() {
		return ((R (*)(PvPEntity*))(Il2CppBase() + 0x11BD3FC))(this);
	}
	template <typename R = void> R AddDuration(float newValue) {
		return ((R (*)(PvPEntity*, float))(Il2CppBase() + 0x11BD408))(this, newValue);
	}
	template <typename R = void> R ReplaceDuration(float newValue) {
		return ((R (*)(PvPEntity*, float))(Il2CppBase() + 0x11BD50C))(this, newValue);
	}
	template <typename R = void> R RemoveDuration() {
		return ((R (*)(PvPEntity*))(Il2CppBase() + 0x11BD610))(this);
	}
	template <typename R = PvPComponent*> R get_pvP() {
		return ((R (*)(PvPEntity*))(Il2CppBase() + 0x11BD61C))(this);
	}
	template <typename R = bool> R get_hasPvP() {
		return ((R (*)(PvPEntity*))(Il2CppBase() + 0x11BD6A4))(this);
	}
	template <typename R = void> R AddPvP(int64_t newId) {
		return ((R (*)(PvPEntity*, int64_t))(Il2CppBase() + 0x11BCE20))(this, newId);
	}
	template <typename R = void> R ReplacePvP(int64_t newId) {
		return ((R (*)(PvPEntity*, int64_t))(Il2CppBase() + 0x11BD6B0))(this, newId);
	}
	template <typename R = void> R RemovePvP() {
		return ((R (*)(PvPEntity*))(Il2CppBase() + 0x11BD7B4))(this);
	}
	template <typename R = PvPStateComponent*> R get_pvPState() {
		return ((R (*)(PvPEntity*))(Il2CppBase() + 0x11BD7C0))(this);
	}
	template <typename R = bool> R get_hasPvPState() {
		return ((R (*)(PvPEntity*))(Il2CppBase() + 0x11BD848))(this);
	}
	template <typename R = void> R AddPvPState(PvPState* newType) {
		return ((R (*)(PvPEntity*, PvPState*))(Il2CppBase() + 0x11BD854))(this, newType);
	}
	template <typename R = void> R ReplacePvPState(PvPState* newType) {
		return ((R (*)(PvPEntity*, PvPState*))(Il2CppBase() + 0x11BD958))(this, newType);
	}
	template <typename R = void> R RemovePvPState() {
		return ((R (*)(PvPEntity*))(Il2CppBase() + 0x11BDA5C))(this);
	}
	template <typename R = SearchDurationComponent*> R get_searchDuration() {
		return ((R (*)(PvPEntity*))(Il2CppBase() + 0x11BDA68))(this);
	}
	template <typename R = bool> R get_hasSearchDuration() {
		return ((R (*)(PvPEntity*))(Il2CppBase() + 0x11BDAF0))(this);
	}
	template <typename R = void> R AddSearchDuration(int64_t newValue) {
		return ((R (*)(PvPEntity*, int64_t))(Il2CppBase() + 0x11BDAFC))(this, newValue);
	}
	template <typename R = void> R ReplaceSearchDuration(int64_t newValue) {
		return ((R (*)(PvPEntity*, int64_t))(Il2CppBase() + 0x11BDC00))(this, newValue);
	}
	template <typename R = void> R RemoveSearchDuration() {
		return ((R (*)(PvPEntity*))(Il2CppBase() + 0x11BDD04))(this);
	}
	template <typename R = TickComponent*> R get_tick() {
		return ((R (*)(PvPEntity*))(Il2CppBase() + 0x11BDD10))(this);
	}
	template <typename R = bool> R get_hasTick() {
		return ((R (*)(PvPEntity*))(Il2CppBase() + 0x11BDD98))(this);
	}
	template <typename R = void> R AddTick(int64_t newValue) {
		return ((R (*)(PvPEntity*, int64_t))(Il2CppBase() + 0x11BDDA4))(this, newValue);
	}
	template <typename R = void> R ReplaceTick(int64_t newValue) {
		return ((R (*)(PvPEntity*, int64_t))(Il2CppBase() + 0x11BDEA8))(this, newValue);
	}
	template <typename R = void> R RemoveTick() {
		return ((R (*)(PvPEntity*))(Il2CppBase() + 0x11BDFAC))(this);
	}

};

