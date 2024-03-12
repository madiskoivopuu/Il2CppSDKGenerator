#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimerBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimerBehaviour"));
	}

	template <typename T = uintptr_t> T& closedTimerText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& openTimerText() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T UpdateView(float seconds, bool closed) {
		return ((T (*)(TimerBehaviour*, float, bool))(Il2CppBase() + 0x14F11C8))(this, seconds, closed);
	}

};

}
