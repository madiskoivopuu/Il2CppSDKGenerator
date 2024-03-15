#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class NotEnoughCoinsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotEnoughCoinsWindow"));
	}

	template <typename R = uintptr_t> R& _textMsg() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _closeButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _buyButton() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _priceText() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _VIPPanel() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _VIPText() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _TokensPanel() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _TokensImage() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& _TokensText() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& _xBonusPanel() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& _xBonusText() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = int64_t> R& _storeDataId() {
		return *(R*)((uintptr_t)this + 0xD0);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(NotEnoughCoinsWindow*))(Il2CppBase() + 0x13B1EA8))(this);
	}
	template <typename R = void> R OnBuyClick() {
		return ((R (*)(NotEnoughCoinsWindow*))(Il2CppBase() + 0x13B1F84))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(NotEnoughCoinsWindow*))(Il2CppBase() + 0x13B2390))(this);
	}

};

