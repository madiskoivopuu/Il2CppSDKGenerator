#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class StorePremiumUnlockWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StorePremiumUnlockWindow"));
	}

	template <typename R = uintptr_t> R& CoinsBuyButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& PriceCoinsText() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x88);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(StorePremiumUnlockWindow*))(Il2CppBase() + 0x182DECC))(this);
	}
	template <typename R = void> R OnButtonCloseClick() {
		return ((R (*)(StorePremiumUnlockWindow*))(Il2CppBase() + 0x182E21C))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(StorePremiumUnlockWindow*))(Il2CppBase() + 0x182E288))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(StorePremiumUnlockWindow*, float))(Il2CppBase() + 0x182E2D4))(this, deltaTime);
	}
	template <typename R = void> R OnBuyButtonClick(int32_t buyButtonIndex) {
		return ((R (*)(StorePremiumUnlockWindow*, int32_t))(Il2CppBase() + 0x182E344))(this, buyButtonIndex);
	}
	template <typename R = void> R OnShowb__4_0() {
		return ((R (*)(StorePremiumUnlockWindow*))(Il2CppBase() + 0x182E9C8))(this);
	}

};

