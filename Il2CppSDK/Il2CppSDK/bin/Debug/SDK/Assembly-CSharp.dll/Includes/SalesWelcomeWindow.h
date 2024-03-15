#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class SalesWelcomeWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SalesWelcomeWindow"));
	}

	template <typename R = uintptr_t> R& Title() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& Text() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& Image() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& TopFrameImage() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& BuyButton() {
		return *(R*)((uintptr_t)this + 0xA0);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(SalesWelcomeWindow*))(Il2CppBase() + 0x13557B0))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(SalesWelcomeWindow*))(Il2CppBase() + 0x135589C))(this);
	}
	template <typename R = void> R ShowStore() {
		return ((R (*)(SalesWelcomeWindow*))(Il2CppBase() + 0x1355C30))(this);
	}
	template <typename R = void> R OnCloseButtonClicked() {
		return ((R (*)(SalesWelcomeWindow*))(Il2CppBase() + 0x1355FA4))(this);
	}

};

