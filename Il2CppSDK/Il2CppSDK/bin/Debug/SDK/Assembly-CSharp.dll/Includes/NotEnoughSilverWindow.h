#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class NotEnoughSilverWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotEnoughSilverWindow"));
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
	template <typename T = int64_t> T& _storeDataId() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(NotEnoughSilverWindow*))(Il2CppBase() + 0x13B355C))(this);
	}
	template <typename T = void> T OnBuyClick() {
		return ((T (*)(NotEnoughSilverWindow*))(Il2CppBase() + 0x13B3638))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(NotEnoughSilverWindow*))(Il2CppBase() + 0x13B3A68))(this);
	}

};

