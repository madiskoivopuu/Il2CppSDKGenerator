#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TextMonoBehaviour.h" 

class NotificationView : public TextMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotificationView"));
	}

	template <typename T = float> T& Time() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& CanvasGroup() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& RectTransform() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Animator() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = IUIWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& _size() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Action1NotificationView*>*> T& _callback() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _redColor() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Show(IUIWindow* window, Il2CppString* text, Action1NotificationView*>* callback, bool redText) {
		return ((T (*)(NotificationView*, IUIWindow*, Il2CppString*, Action1NotificationView*>*, bool))(Il2CppBase() + 0x13B9EB8))(this, window, text, callback, redText);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(NotificationView*, float))(Il2CppBase() + 0x13BA0F8))(this, deltaTime);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(NotificationView*))(Il2CppBase() + 0x13BA340))(this);
	}

};

