#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimerView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimerView"));
	}

	template <typename R = uintptr_t> R& _timerPanel() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _timerText() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Nullable1int64_t>*& _endTime() {
		return *(Nullable1int64_t>**)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Init(int64_t endTime) {
		return ((R (*)(TimerView*, int64_t))(Il2CppBase() + 0x14F1684))(this, endTime);
	}
	template <typename R = void> R Update() {
		return ((R (*)(TimerView*))(Il2CppBase() + 0x14F16F8))(this);
	}

};

