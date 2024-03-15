#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TextMonoBehaviour.h" 

class NotificationView : public TextMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotificationView"));
	}

	template <typename R = float> R& Time() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& CanvasGroup() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& RectTransform() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& Animator() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = IUIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = float> R& _size() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	 Action1<NotificationView*>*& _callback() {
		return *(Action1<NotificationView*>**)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _redColor() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = void> R Show(IUIWindow* window, Il2CppString* text, Action1<NotificationView*>* callback, bool redText) {
		return ((R (*)(NotificationView*, IUIWindow*, Il2CppString*, Action1<NotificationView*>*, bool))(Il2CppBase() + 0x13B9EB8))(this, window, text, callback, redText);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(NotificationView*, float))(Il2CppBase() + 0x13BA0F8))(this, deltaTime);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(NotificationView*))(Il2CppBase() + 0x13BA340))(this);
	}

};

