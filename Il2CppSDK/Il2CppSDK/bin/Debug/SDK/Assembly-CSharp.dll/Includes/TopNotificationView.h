#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "NotificationView.h" 

class TopNotificationView : public NotificationView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TopNotificationView"));
	}

	template <typename R = uintptr_t> R& Check() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& Attention() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = float> R& _timer() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = bool> R& _blink() {
		return *(R*)((uintptr_t)this + 0x7C);
	}
	template <typename R = bool> R& _hide() {
		return *(R*)((uintptr_t)this + 0x7D);
	}
	template <typename R = int32_t> static R& _show() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& _blink1() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename R = void> R Show(IUIWindow* window, Il2CppString* text, Action1<NotificationView*>* callback, bool redText) {
		return ((R (*)(TopNotificationView*, IUIWindow*, Il2CppString*, Action1<NotificationView*>*, bool))(Il2CppBase() + 0x14F98EC))(this, window, text, callback, redText);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(TopNotificationView*, float))(Il2CppBase() + 0x14F9BAC))(this, deltaTime);
	}

};

