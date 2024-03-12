#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientTimeManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientTimeManager"));
	}

	template <typename T = uintptr_t> T& _unixStartTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& DeltaTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& Now() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint64_t> T& FrameNumber() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = float> T get_DeltaTime() {
		return ((T (*)(ClientTimeManager*))(Il2CppBase() + 0xE21DDC))(this);
	}
	template <typename T = void> T set_DeltaTime(float value) {
		return ((T (*)(ClientTimeManager*, float))(Il2CppBase() + 0xE21DE4))(this, value);
	}
	template <typename T = int64_t> T get_Now() {
		return ((T (*)(ClientTimeManager*))(Il2CppBase() + 0xE21DEC))(this);
	}
	template <typename T = void> T set_Now(int64_t value) {
		return ((T (*)(ClientTimeManager*, int64_t))(Il2CppBase() + 0xE21DF4))(this, value);
	}
	template <typename T = uint64_t> T get_FrameNumber() {
		return ((T (*)(ClientTimeManager*))(Il2CppBase() + 0xE21DFC))(this);
	}
	template <typename T = void> T set_FrameNumber(uint64_t value) {
		return ((T (*)(ClientTimeManager*, uint64_t))(Il2CppBase() + 0xE21E04))(this, value);
	}
	template <typename T = void> T Update(int64_t remoteDelta) {
		return ((T (*)(ClientTimeManager*, int64_t))(Il2CppBase() + 0xE21E0C))(this, remoteDelta);
	}
	template <typename T = int64_t> T UnixToTicks(int64_t unixTime) {
		return ((T (*)(ClientTimeManager*, int64_t))(Il2CppBase() + 0xE21F14))(this, unixTime);
	}

};

}
