#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class NotEnoughTicketsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotEnoughTicketsWindow"));
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
		return ((R (*)(NotEnoughTicketsWindow*))(Il2CppBase() + 0x13B44B8))(this);
	}
	template <typename R = void> R OnBuyClick() {
		return ((R (*)(NotEnoughTicketsWindow*))(Il2CppBase() + 0x13B4594))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(NotEnoughTicketsWindow*))(Il2CppBase() + 0x13B49C4))(this);
	}
	 ValueTuple2<int32_t, Store2DataEntity*>* OnShowg__getBestStoreProduct|8_0(Il2CppList<Store2DataEntity*>* list) {
		return ((ValueTuple2<int32_t, Store2DataEntity*>* (*)(NotEnoughTicketsWindow*, Il2CppList<Store2DataEntity*>*))(Il2CppBase() + 0x13B53C8))(this, list);
	}
	template <typename R = bool> R OnShowb__8_6(Store2DataEntity* i) {
		return ((R (*)(NotEnoughTicketsWindow*, Store2DataEntity*))(Il2CppBase() + 0x13B64E0))(this, i);
	}
	template <typename R = bool> static R OnShowg__isAvailable|8_7(Store2Entity* e) {
		return ((R (*)(void *, Store2Entity*))(Il2CppBase() + 0x13B616C))(0, e);
	}
	template <typename R = bool> static R OnShowg__isEnoughCount|8_8(Store2Entity* e) {
		return ((R (*)(void *, Store2Entity*))(Il2CppBase() + 0x13B633C))(0, e);
	}

};

