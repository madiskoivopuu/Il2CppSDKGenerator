#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class NotEnoughCoinsWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotEnoughCoinsWindow"));
	}

	template <typename T = uintptr_t> T& _textMsg() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _buyButton() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _priceText() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _VIPPanel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _VIPText() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _TokensPanel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _TokensImage() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _TokensText() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _xBonusPanel() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _xBonusText() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int64_t> T& _storeDataId() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(NotEnoughCoinsWindow*))(Il2CppBase() + 0x13B1EA8))(this);
	}
	template <typename T = void> T OnBuyClick() {
		return ((T (*)(NotEnoughCoinsWindow*))(Il2CppBase() + 0x13B1F84))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(NotEnoughCoinsWindow*))(Il2CppBase() + 0x13B2390))(this);
	}

};

}
