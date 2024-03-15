#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DailyMessageTypeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DailyMessageTypeView"));
	}

	template <typename R = uintptr_t> R& Background() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Foreground() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& ClickBtn() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(DailyMessageTypeView*))(Il2CppBase() + 0x164743C))(this);
	}
	template <typename R = void> R Select(bool toSelect) {
		return ((R (*)(DailyMessageTypeView*, bool))(Il2CppBase() + 0x1647444))(this, toSelect);
	}

};

