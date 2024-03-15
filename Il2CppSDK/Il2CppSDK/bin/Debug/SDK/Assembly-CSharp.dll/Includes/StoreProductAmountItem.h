#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreProductAmountItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreProductAmountItem"));
	}

	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& VIPPanel() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& VIPText() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& TokensPanel() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& TokensImage() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& TokensText() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = TooltipTrigger*> R& TooltipTrigger() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = StandartButton*> R& BuyButton() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppString*> R& _blueprintName() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _onSuccess() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& _onFail() {
		return *(R*)((uintptr_t)this + 0x70);
	}

	template <typename R = void> R OnEnable() {
		return ((R (*)(StoreProductAmountItem*))(Il2CppBase() + 0x182EF6C))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(StoreProductAmountItem*))(Il2CppBase() + 0x182F014))(this);
	}
	template <typename R = void> R Init(Store2Entity* parentEntity, Store2DataEntity* data, TooltipView* tooltip, uintptr_t onBuySuccess, uintptr_t onBuyFail) {
		return ((R (*)(StoreProductAmountItem*, Store2Entity*, Store2DataEntity*, TooltipView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x182F040))(this, parentEntity, data, tooltip, onBuySuccess, onBuyFail);
	}
	template <typename R = void> R OnBuyButtonClick() {
		return ((R (*)(StoreProductAmountItem*))(Il2CppBase() + 0x182F9B0))(this);
	}
	template <typename R = void> R OnEnableb__12_0() {
		return ((R (*)(StoreProductAmountItem*))(Il2CppBase() + 0x1830534))(this);
	}

};

