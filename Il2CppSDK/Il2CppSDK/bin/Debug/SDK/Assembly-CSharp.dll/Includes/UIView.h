#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIView"));
	}

	template <typename R = uintptr_t> R& _rectTransform() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _text() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _offset() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = UIViewController*> R& _controller() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R Init(UIViewController* controller, ViewInUI* target) {
		return ((R (*)(UIView*, UIViewController*, ViewInUI*))(Il2CppBase() + 0x152CC20))(this, controller, target);
	}
	template <typename R = void> R UpdateView(ViewInUI* target) {
		return ((R (*)(UIView*, ViewInUI*))(Il2CppBase() + 0x152CE1C))(this, target);
	}

};

