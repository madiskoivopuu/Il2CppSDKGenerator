#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientTimeManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientTimeManager"));
	}

	template <typename R = uintptr_t> R& _unixStartTime() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& DeltaTime() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int64_t> R& Now() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uint64_t> R& FrameNumber() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = float> R get_DeltaTime() {
		return ((R (*)(ClientTimeManager*))(Il2CppBase() + 0xE21DDC))(this);
	}
	template <typename R = void> R set_DeltaTime(float value) {
		return ((R (*)(ClientTimeManager*, float))(Il2CppBase() + 0xE21DE4))(this, value);
	}
	template <typename R = int64_t> R get_Now() {
		return ((R (*)(ClientTimeManager*))(Il2CppBase() + 0xE21DEC))(this);
	}
	template <typename R = void> R set_Now(int64_t value) {
		return ((R (*)(ClientTimeManager*, int64_t))(Il2CppBase() + 0xE21DF4))(this, value);
	}
	template <typename R = uint64_t> R get_FrameNumber() {
		return ((R (*)(ClientTimeManager*))(Il2CppBase() + 0xE21DFC))(this);
	}
	template <typename R = void> R set_FrameNumber(uint64_t value) {
		return ((R (*)(ClientTimeManager*, uint64_t))(Il2CppBase() + 0xE21E04))(this, value);
	}
	template <typename R = void> R Update(int64_t remoteDelta) {
		return ((R (*)(ClientTimeManager*, int64_t))(Il2CppBase() + 0xE21E0C))(this, remoteDelta);
	}
	template <typename R = int64_t> R UnixToTicks(int64_t unixTime) {
		return ((R (*)(ClientTimeManager*, int64_t))(Il2CppBase() + 0xE21F14))(this, unixTime);
	}

};

