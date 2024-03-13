#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "NotificationView.h" 

class TopNotificationView : public NotificationView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TopNotificationView"));
	}

	template <typename T = uintptr_t> T& Check() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& Attention() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& _timer() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& _blink() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& _hide() {
		return *(T*)((uintptr_t)this + 0x7D);
	}
	template <typename T = int32_t> static T& _show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& _blink1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Show(IUIWindow* window, Il2CppString* text, Action1NotificationView*>* callback, bool redText) {
		return ((T (*)(TopNotificationView*, IUIWindow*, Il2CppString*, Action1NotificationView*>*, bool))(Il2CppBase() + 0x14F98EC))(this, window, text, callback, redText);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(TopNotificationView*, float))(Il2CppBase() + 0x14F9BAC))(this, deltaTime);
	}

};

