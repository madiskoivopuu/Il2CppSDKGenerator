#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AFKEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AFKEntity"));
	}


	template <typename T = uintptr_t> T get_count() {
		return ((T (*)(AFKEntity*))(Il2CppBase() + 0x1D943C0))(this);
	}
	template <typename T = bool> T get_hasCount() {
		return ((T (*)(AFKEntity*))(Il2CppBase() + 0x1D94448))(this);
	}
	template <typename T = void> T AddCount(int32_t newValue) {
		return ((T (*)(AFKEntity*, int32_t))(Il2CppBase() + 0x1D94454))(this, newValue);
	}
	template <typename T = void> T ReplaceCount(int32_t newValue) {
		return ((T (*)(AFKEntity*, int32_t))(Il2CppBase() + 0x1D94558))(this, newValue);
	}
	template <typename T = void> T RemoveCount() {
		return ((T (*)(AFKEntity*))(Il2CppBase() + 0x1D9465C))(this);
	}
	template <typename T = uintptr_t> T get_parent() {
		return ((T (*)(AFKEntity*))(Il2CppBase() + 0x1D94668))(this);
	}
	template <typename T = bool> T get_hasParent() {
		return ((T (*)(AFKEntity*))(Il2CppBase() + 0x1D946F0))(this);
	}
	template <typename T = void> T AddParent(int32_t newId) {
		return ((T (*)(AFKEntity*, int32_t))(Il2CppBase() + 0x1D946FC))(this, newId);
	}
	template <typename T = void> T ReplaceParent(int32_t newId) {
		return ((T (*)(AFKEntity*, int32_t))(Il2CppBase() + 0x1D94800))(this, newId);
	}
	template <typename T = void> T RemoveParent() {
		return ((T (*)(AFKEntity*))(Il2CppBase() + 0x1D94904))(this);
	}
	template <typename T = uintptr_t> T get_target() {
		return ((T (*)(AFKEntity*))(Il2CppBase() + 0x1D94910))(this);
	}
	template <typename T = bool> T get_hasTarget() {
		return ((T (*)(AFKEntity*))(Il2CppBase() + 0x1D94998))(this);
	}
	template <typename T = void> T AddTarget(int32_t newId) {
		return ((T (*)(AFKEntity*, int32_t))(Il2CppBase() + 0x1D949A4))(this, newId);
	}
	template <typename T = void> T ReplaceTarget(int32_t newId) {
		return ((T (*)(AFKEntity*, int32_t))(Il2CppBase() + 0x1D94AA8))(this, newId);
	}
	template <typename T = void> T RemoveTarget() {
		return ((T (*)(AFKEntity*))(Il2CppBase() + 0x1D94BAC))(this);
	}
	template <typename T = uintptr_t> T get_tick() {
		return ((T (*)(AFKEntity*))(Il2CppBase() + 0x1D94BB8))(this);
	}
	template <typename T = bool> T get_hasTick() {
		return ((T (*)(AFKEntity*))(Il2CppBase() + 0x1D94C40))(this);
	}
	template <typename T = void> T AddTick(int64_t newValue) {
		return ((T (*)(AFKEntity*, int64_t))(Il2CppBase() + 0x1D94C4C))(this, newValue);
	}
	template <typename T = void> T ReplaceTick(int64_t newValue) {
		return ((T (*)(AFKEntity*, int64_t))(Il2CppBase() + 0x1D94D50))(this, newValue);
	}
	template <typename T = void> T RemoveTick() {
		return ((T (*)(AFKEntity*))(Il2CppBase() + 0x1D94E54))(this);
	}

};

}
