#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class StorePremiumUnlockWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StorePremiumUnlockWindow"));
	}

	template <typename T = uintptr_t> T& CoinsBuyButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& PriceCoinsText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(StorePremiumUnlockWindow*))(Il2CppBase() + 0x182DECC))(this);
	}
	template <typename T = void> T OnButtonCloseClick() {
		return ((T (*)(StorePremiumUnlockWindow*))(Il2CppBase() + 0x182E21C))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(StorePremiumUnlockWindow*))(Il2CppBase() + 0x182E288))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(StorePremiumUnlockWindow*, float))(Il2CppBase() + 0x182E2D4))(this, deltaTime);
	}
	template <typename T = void> T OnBuyButtonClick(int32_t buyButtonIndex) {
		return ((T (*)(StorePremiumUnlockWindow*, int32_t))(Il2CppBase() + 0x182E344))(this, buyButtonIndex);
	}
	template <typename T = void> T OnShowb__4_0() {
		return ((T (*)(StorePremiumUnlockWindow*))(Il2CppBase() + 0x182E9C8))(this);
	}

};

}
