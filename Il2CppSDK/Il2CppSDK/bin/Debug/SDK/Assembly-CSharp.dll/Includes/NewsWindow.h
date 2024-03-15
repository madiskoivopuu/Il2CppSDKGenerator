#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class NewsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NewsWindow"));
	}

	template <typename R = uintptr_t> R& Title() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& Text() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& LinkButton() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& AcceptButton() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& AcceptButtonText() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& BlockTimer() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& BlockTimerText() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = int32_t> static R& kCloseTimerSecondsLimit() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(NewsWindow*))(Il2CppBase() + 0x13B036C))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(NewsWindow*))(Il2CppBase() + 0x13B0458))(this);
	}
	template <typename R = uintptr_t> R TimerCoroutine() {
		return ((R (*)(NewsWindow*))(Il2CppBase() + 0x13B0DA0))(this);
	}
	template <typename R = void> R CloseWindow() {
		return ((R (*)(NewsWindow*))(Il2CppBase() + 0x13B0E18))(this);
	}
	template <typename R = void> R Awakeb__10_0() {
		return ((R (*)(NewsWindow*))(Il2CppBase() + 0x13B1984))(this);
	}

};

