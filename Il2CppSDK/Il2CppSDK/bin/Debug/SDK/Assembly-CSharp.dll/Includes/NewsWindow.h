#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class NewsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NewsWindow"));
	}

	template <typename T = uintptr_t> T& Title() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& Text() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& LinkButton() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& AcceptButton() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& AcceptButtonText() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& BlockTimer() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& BlockTimerText() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> static T& kCloseTimerSecondsLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(NewsWindow*))(Il2CppBase() + 0x13B036C))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(NewsWindow*))(Il2CppBase() + 0x13B0458))(this);
	}
	template <typename T = uintptr_t> T TimerCoroutine() {
		return ((T (*)(NewsWindow*))(Il2CppBase() + 0x13B0DA0))(this);
	}
	template <typename T = void> T CloseWindow() {
		return ((T (*)(NewsWindow*))(Il2CppBase() + 0x13B0E18))(this);
	}
	template <typename T = void> T Awakeb__10_0() {
		return ((T (*)(NewsWindow*))(Il2CppBase() + 0x13B1984))(this);
	}

};

