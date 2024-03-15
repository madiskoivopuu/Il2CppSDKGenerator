#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITimeManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITimeManager"));
	}


	template <typename R = int64_t> R get_Now() {
		return ((R (*)(ITimeManager*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = uint64_t> R get_FrameNumber() {
		return ((R (*)(ITimeManager*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = float> R get_DeltaTime() {
		return ((R (*)(ITimeManager*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Update(int64_t remoteTicks) {
		return ((R (*)(ITimeManager*, int64_t))(Il2CppBase() + 0x0))(this, remoteTicks);
	}
	template <typename R = int64_t> R UnixToTicks(int64_t unixTime) {
		return ((R (*)(ITimeManager*, int64_t))(Il2CppBase() + 0x0))(this, unixTime);
	}

};

