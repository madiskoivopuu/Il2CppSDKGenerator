#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DailyMessageTypeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DailyMessageTypeView"));
	}

	template <typename T = uintptr_t> T& Background() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Foreground() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ClickBtn() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(DailyMessageTypeView*))(Il2CppBase() + 0x164743C))(this);
	}
	template <typename T = void> T Select(bool toSelect) {
		return ((T (*)(DailyMessageTypeView*, bool))(Il2CppBase() + 0x1647444))(this, toSelect);
	}

};

}
