#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimerBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimerBehaviour"));
	}

	template <typename R = uintptr_t> R& closedTimerText() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& openTimerText() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R UpdateView(float seconds, bool closed) {
		return ((R (*)(TimerBehaviour*, float, bool))(Il2CppBase() + 0x14F11C8))(this, seconds, closed);
	}

};

