#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class NotEnoughTicketsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotEnoughTicketsWindow"));
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
		return ((T (*)(NotEnoughTicketsWindow*))(Il2CppBase() + 0x13B44B8))(this);
	}
	template <typename T = void> T OnBuyClick() {
		return ((T (*)(NotEnoughTicketsWindow*))(Il2CppBase() + 0x13B4594))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(NotEnoughTicketsWindow*))(Il2CppBase() + 0x13B49C4))(this);
	}
	template <typename T = ValueTuple2int32_t, Store2DataEntity*>*> T OnShowg__getBestStoreProduct|8_0(Il2CppList<Store2DataEntity*>* list) {
		return ((T (*)(NotEnoughTicketsWindow*, Il2CppList<Store2DataEntity*>*))(Il2CppBase() + 0x13B53C8))(this, list);
	}
	template <typename T = bool> T OnShowb__8_6(Store2DataEntity* i) {
		return ((T (*)(NotEnoughTicketsWindow*, Store2DataEntity*))(Il2CppBase() + 0x13B64E0))(this, i);
	}
	template <typename T = bool> static T OnShowg__isAvailable|8_7(Store2Entity* e) {
		return ((T (*)(void *, Store2Entity*))(Il2CppBase() + 0x13B616C))(0, e);
	}
	template <typename T = bool> static T OnShowg__isEnoughCount|8_8(Store2Entity* e) {
		return ((T (*)(void *, Store2Entity*))(Il2CppBase() + 0x13B633C))(0, e);
	}

};

