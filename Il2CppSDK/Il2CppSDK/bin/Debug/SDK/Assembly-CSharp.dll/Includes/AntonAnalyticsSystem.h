#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AntonAnalyticsSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AntonAnalyticsSystem"));
	}

	template <typename R = ICommonClientWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& _timer() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& _total() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = int64_t> R& _totalPing() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(AntonAnalyticsSystem*))(Il2CppBase() + 0x188E858))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(AntonAnalyticsSystem*))(Il2CppBase() + 0x188E860))(this);
	}
	template <typename R = void> R Send(int32_t avgFPS, int32_t avgPing) {
		return ((R (*)(AntonAnalyticsSystem*, int32_t, int32_t))(Il2CppBase() + 0x188EB10))(this, avgFPS, avgPing);
	}

};

