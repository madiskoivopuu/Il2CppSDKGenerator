#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SystemTimeManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SystemTimeManager"));
	}

	template <typename T = int64_t> T& _now() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& _deltaTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& _correction() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& _minRtt() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _unixStartTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint64_t> T& FrameNumber() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = int64_t> T get_Now() {
		return ((T (*)(SystemTimeManager*))(Il2CppBase() + 0x16A2F44))(this);
	}
	template <typename T = int64_t> T GetExactNow() {
		return ((T (*)(SystemTimeManager*))(Il2CppBase() + 0x16A2F4C))(this);
	}
	template <typename T = float> T get_DeltaTime() {
		return ((T (*)(SystemTimeManager*))(Il2CppBase() + 0x16A2FC0))(this);
	}
	template <typename T = uint64_t> T get_FrameNumber() {
		return ((T (*)(SystemTimeManager*))(Il2CppBase() + 0x16A2FC8))(this);
	}
	template <typename T = void> T set_FrameNumber(uint64_t value) {
		return ((T (*)(SystemTimeManager*, uint64_t))(Il2CppBase() + 0x16A2FD0))(this, value);
	}
	template <typename T = void> T Update(int64_t remoteTicks) {
		return ((T (*)(SystemTimeManager*, int64_t))(Il2CppBase() + 0x16A2FD8))(this, remoteTicks);
	}
	template <typename T = void> T Correct(int64_t rtt, int64_t correction) {
		return ((T (*)(SystemTimeManager*, int64_t, int64_t))(Il2CppBase() + 0x16A3094))(this, rtt, correction);
	}
	template <typename T = int64_t> T UnixToTicks(int64_t unixTime) {
		return ((T (*)(SystemTimeManager*, int64_t))(Il2CppBase() + 0x16A30A8))(this, unixTime);
	}
	template <typename T = void> T Correct_1(int64_t ticks) {
		return ((T (*)(SystemTimeManager*, int64_t))(Il2CppBase() + 0x16A30E8))(this, ticks);
	}

};

}
