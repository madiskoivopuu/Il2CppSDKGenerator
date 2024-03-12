#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITimeManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITimeManager"));
	}


	template <typename T = int64_t> T get_Now() {
		return ((T (*)(ITimeManager*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uint64_t> T get_FrameNumber() {
		return ((T (*)(ITimeManager*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T get_DeltaTime() {
		return ((T (*)(ITimeManager*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Update(int64_t remoteTicks) {
		return ((T (*)(ITimeManager*, int64_t))(Il2CppBase() + 0x0))(this, remoteTicks);
	}
	template <typename T = int64_t> T UnixToTicks(int64_t unixTime) {
		return ((T (*)(ITimeManager*, int64_t))(Il2CppBase() + 0x0))(this, unixTime);
	}

};

}
