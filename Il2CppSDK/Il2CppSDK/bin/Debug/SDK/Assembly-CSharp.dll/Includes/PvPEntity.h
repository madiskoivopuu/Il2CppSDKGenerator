#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PvPEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PvPEntity"));
	}

	template <typename T = uintptr_t> static T& avatarComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_isAvatar() {
		return ((T (*)(PvPEntity*))(Il2CppBase() + 0x11BD368))(this);
	}
	template <typename T = void> T set_isAvatar(bool value) {
		return ((T (*)(PvPEntity*, bool))(Il2CppBase() + 0x11BD244))(this, value);
	}
	template <typename T = uintptr_t> T get_duration() {
		return ((T (*)(PvPEntity*))(Il2CppBase() + 0x11BD374))(this);
	}
	template <typename T = bool> T get_hasDuration() {
		return ((T (*)(PvPEntity*))(Il2CppBase() + 0x11BD3FC))(this);
	}
	template <typename T = void> T AddDuration(float newValue) {
		return ((T (*)(PvPEntity*, float))(Il2CppBase() + 0x11BD408))(this, newValue);
	}
	template <typename T = void> T ReplaceDuration(float newValue) {
		return ((T (*)(PvPEntity*, float))(Il2CppBase() + 0x11BD50C))(this, newValue);
	}
	template <typename T = void> T RemoveDuration() {
		return ((T (*)(PvPEntity*))(Il2CppBase() + 0x11BD610))(this);
	}
	template <typename T = uintptr_t> T get_pvP() {
		return ((T (*)(PvPEntity*))(Il2CppBase() + 0x11BD61C))(this);
	}
	template <typename T = bool> T get_hasPvP() {
		return ((T (*)(PvPEntity*))(Il2CppBase() + 0x11BD6A4))(this);
	}
	template <typename T = void> T AddPvP(int64_t newId) {
		return ((T (*)(PvPEntity*, int64_t))(Il2CppBase() + 0x11BCE20))(this, newId);
	}
	template <typename T = void> T ReplacePvP(int64_t newId) {
		return ((T (*)(PvPEntity*, int64_t))(Il2CppBase() + 0x11BD6B0))(this, newId);
	}
	template <typename T = void> T RemovePvP() {
		return ((T (*)(PvPEntity*))(Il2CppBase() + 0x11BD7B4))(this);
	}
	template <typename T = uintptr_t> T get_pvPState() {
		return ((T (*)(PvPEntity*))(Il2CppBase() + 0x11BD7C0))(this);
	}
	template <typename T = bool> T get_hasPvPState() {
		return ((T (*)(PvPEntity*))(Il2CppBase() + 0x11BD848))(this);
	}
	template <typename T = void> T AddPvPState(uintptr_t newType) {
		return ((T (*)(PvPEntity*, uintptr_t))(Il2CppBase() + 0x11BD854))(this, newType);
	}
	template <typename T = void> T ReplacePvPState(uintptr_t newType) {
		return ((T (*)(PvPEntity*, uintptr_t))(Il2CppBase() + 0x11BD958))(this, newType);
	}
	template <typename T = void> T RemovePvPState() {
		return ((T (*)(PvPEntity*))(Il2CppBase() + 0x11BDA5C))(this);
	}
	template <typename T = uintptr_t> T get_searchDuration() {
		return ((T (*)(PvPEntity*))(Il2CppBase() + 0x11BDA68))(this);
	}
	template <typename T = bool> T get_hasSearchDuration() {
		return ((T (*)(PvPEntity*))(Il2CppBase() + 0x11BDAF0))(this);
	}
	template <typename T = void> T AddSearchDuration(int64_t newValue) {
		return ((T (*)(PvPEntity*, int64_t))(Il2CppBase() + 0x11BDAFC))(this, newValue);
	}
	template <typename T = void> T ReplaceSearchDuration(int64_t newValue) {
		return ((T (*)(PvPEntity*, int64_t))(Il2CppBase() + 0x11BDC00))(this, newValue);
	}
	template <typename T = void> T RemoveSearchDuration() {
		return ((T (*)(PvPEntity*))(Il2CppBase() + 0x11BDD04))(this);
	}
	template <typename T = uintptr_t> T get_tick() {
		return ((T (*)(PvPEntity*))(Il2CppBase() + 0x11BDD10))(this);
	}
	template <typename T = bool> T get_hasTick() {
		return ((T (*)(PvPEntity*))(Il2CppBase() + 0x11BDD98))(this);
	}
	template <typename T = void> T AddTick(int64_t newValue) {
		return ((T (*)(PvPEntity*, int64_t))(Il2CppBase() + 0x11BDDA4))(this, newValue);
	}
	template <typename T = void> T ReplaceTick(int64_t newValue) {
		return ((T (*)(PvPEntity*, int64_t))(Il2CppBase() + 0x11BDEA8))(this, newValue);
	}
	template <typename T = void> T RemoveTick() {
		return ((T (*)(PvPEntity*))(Il2CppBase() + 0x11BDFAC))(this);
	}

};

}
