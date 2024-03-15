#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class NotEnoughSilverWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotEnoughSilverWindow"));
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
	template <typename R = int64_t> R& _storeDataId() {
		return *(R*)((uintptr_t)this + 0x98);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(NotEnoughSilverWindow*))(Il2CppBase() + 0x13B355C))(this);
	}
	template <typename R = void> R OnBuyClick() {
		return ((R (*)(NotEnoughSilverWindow*))(Il2CppBase() + 0x13B3638))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(NotEnoughSilverWindow*))(Il2CppBase() + 0x13B3A68))(this);
	}

};

