#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AntonAnalyticsSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AntonAnalyticsSystem"));
	}

	template <typename T = ICommonClientWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& _timer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _total() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int64_t> T& _totalPing() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(AntonAnalyticsSystem*))(Il2CppBase() + 0x188E858))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(AntonAnalyticsSystem*))(Il2CppBase() + 0x188E860))(this);
	}
	template <typename T = void> T Send(int32_t avgFPS, int32_t avgPing) {
		return ((T (*)(AntonAnalyticsSystem*, int32_t, int32_t))(Il2CppBase() + 0x188EB10))(this, avgFPS, avgPing);
	}

};

