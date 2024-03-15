#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SystemTimeManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SystemTimeManager"));
	}

	template <typename R = int64_t> R& _now() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& _deltaTime() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int64_t> R& _correction() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int64_t> R& _minRtt() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _unixStartTime() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uint64_t> R& FrameNumber() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = int64_t> R get_Now() {
		return ((R (*)(SystemTimeManager*))(Il2CppBase() + 0x16A2F44))(this);
	}
	template <typename R = int64_t> R GetExactNow() {
		return ((R (*)(SystemTimeManager*))(Il2CppBase() + 0x16A2F4C))(this);
	}
	template <typename R = float> R get_DeltaTime() {
		return ((R (*)(SystemTimeManager*))(Il2CppBase() + 0x16A2FC0))(this);
	}
	template <typename R = uint64_t> R get_FrameNumber() {
		return ((R (*)(SystemTimeManager*))(Il2CppBase() + 0x16A2FC8))(this);
	}
	template <typename R = void> R set_FrameNumber(uint64_t value) {
		return ((R (*)(SystemTimeManager*, uint64_t))(Il2CppBase() + 0x16A2FD0))(this, value);
	}
	template <typename R = void> R Update(int64_t remoteTicks) {
		return ((R (*)(SystemTimeManager*, int64_t))(Il2CppBase() + 0x16A2FD8))(this, remoteTicks);
	}
	template <typename R = void> R Correct(int64_t rtt, int64_t correction) {
		return ((R (*)(SystemTimeManager*, int64_t, int64_t))(Il2CppBase() + 0x16A3094))(this, rtt, correction);
	}
	template <typename R = int64_t> R UnixToTicks(int64_t unixTime) {
		return ((R (*)(SystemTimeManager*, int64_t))(Il2CppBase() + 0x16A30A8))(this, unixTime);
	}
	template <typename R = void> R Correct_1(int64_t ticks) {
		return ((R (*)(SystemTimeManager*, int64_t))(Il2CppBase() + 0x16A30E8))(this, ticks);
	}

};

