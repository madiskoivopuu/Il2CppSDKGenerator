#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AFKEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AFKEntity"));
	}


	template <typename R = CountComponent*> R get_count() {
		return ((R (*)(AFKEntity*))(Il2CppBase() + 0x1D943C0))(this);
	}
	template <typename R = bool> R get_hasCount() {
		return ((R (*)(AFKEntity*))(Il2CppBase() + 0x1D94448))(this);
	}
	template <typename R = void> R AddCount(int32_t newValue) {
		return ((R (*)(AFKEntity*, int32_t))(Il2CppBase() + 0x1D94454))(this, newValue);
	}
	template <typename R = void> R ReplaceCount(int32_t newValue) {
		return ((R (*)(AFKEntity*, int32_t))(Il2CppBase() + 0x1D94558))(this, newValue);
	}
	template <typename R = void> R RemoveCount() {
		return ((R (*)(AFKEntity*))(Il2CppBase() + 0x1D9465C))(this);
	}
	template <typename R = ParentComponent*> R get_parent() {
		return ((R (*)(AFKEntity*))(Il2CppBase() + 0x1D94668))(this);
	}
	template <typename R = bool> R get_hasParent() {
		return ((R (*)(AFKEntity*))(Il2CppBase() + 0x1D946F0))(this);
	}
	template <typename R = void> R AddParent(int32_t newId) {
		return ((R (*)(AFKEntity*, int32_t))(Il2CppBase() + 0x1D946FC))(this, newId);
	}
	template <typename R = void> R ReplaceParent(int32_t newId) {
		return ((R (*)(AFKEntity*, int32_t))(Il2CppBase() + 0x1D94800))(this, newId);
	}
	template <typename R = void> R RemoveParent() {
		return ((R (*)(AFKEntity*))(Il2CppBase() + 0x1D94904))(this);
	}
	template <typename R = TargetComponent*> R get_target() {
		return ((R (*)(AFKEntity*))(Il2CppBase() + 0x1D94910))(this);
	}
	template <typename R = bool> R get_hasTarget() {
		return ((R (*)(AFKEntity*))(Il2CppBase() + 0x1D94998))(this);
	}
	template <typename R = void> R AddTarget(int32_t newId) {
		return ((R (*)(AFKEntity*, int32_t))(Il2CppBase() + 0x1D949A4))(this, newId);
	}
	template <typename R = void> R ReplaceTarget(int32_t newId) {
		return ((R (*)(AFKEntity*, int32_t))(Il2CppBase() + 0x1D94AA8))(this, newId);
	}
	template <typename R = void> R RemoveTarget() {
		return ((R (*)(AFKEntity*))(Il2CppBase() + 0x1D94BAC))(this);
	}
	template <typename R = TickComponent*> R get_tick() {
		return ((R (*)(AFKEntity*))(Il2CppBase() + 0x1D94BB8))(this);
	}
	template <typename R = bool> R get_hasTick() {
		return ((R (*)(AFKEntity*))(Il2CppBase() + 0x1D94C40))(this);
	}
	template <typename R = void> R AddTick(int64_t newValue) {
		return ((R (*)(AFKEntity*, int64_t))(Il2CppBase() + 0x1D94C4C))(this, newValue);
	}
	template <typename R = void> R ReplaceTick(int64_t newValue) {
		return ((R (*)(AFKEntity*, int64_t))(Il2CppBase() + 0x1D94D50))(this, newValue);
	}
	template <typename R = void> R RemoveTick() {
		return ((R (*)(AFKEntity*))(Il2CppBase() + 0x1D94E54))(this);
	}

};

