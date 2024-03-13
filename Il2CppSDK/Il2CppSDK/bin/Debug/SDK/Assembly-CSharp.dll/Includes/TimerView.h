#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimerView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimerView"));
	}

	template <typename T = uintptr_t> T& _timerPanel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _timerText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Nullable1int64_t>*> T& _endTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Init(int64_t endTime) {
		return ((T (*)(TimerView*, int64_t))(Il2CppBase() + 0x14F1684))(this, endTime);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TimerView*))(Il2CppBase() + 0x14F16F8))(this);
	}

};

