#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class SalesWelcomeWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SalesWelcomeWindow"));
	}

	template <typename T = uintptr_t> T& Title() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& Text() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Image() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& TopFrameImage() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& BuyButton() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SalesWelcomeWindow*))(Il2CppBase() + 0x13557B0))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(SalesWelcomeWindow*))(Il2CppBase() + 0x135589C))(this);
	}
	template <typename T = void> T ShowStore() {
		return ((T (*)(SalesWelcomeWindow*))(Il2CppBase() + 0x1355C30))(this);
	}
	template <typename T = void> T OnCloseButtonClicked() {
		return ((T (*)(SalesWelcomeWindow*))(Il2CppBase() + 0x1355FA4))(this);
	}

};

