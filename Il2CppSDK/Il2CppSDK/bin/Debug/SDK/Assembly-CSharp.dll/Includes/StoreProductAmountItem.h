#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreProductAmountItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreProductAmountItem"));
	}

	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& VIPPanel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& VIPText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& TokensPanel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& TokensImage() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& TokensText() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& TooltipTrigger() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& BuyButton() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& _blueprintName() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _onSuccess() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _onFail() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(StoreProductAmountItem*))(Il2CppBase() + 0x182EF6C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(StoreProductAmountItem*))(Il2CppBase() + 0x182F014))(this);
	}
	template <typename T = void> T Init(uintptr_t parentEntity, uintptr_t data, uintptr_t tooltip, uintptr_t onBuySuccess, uintptr_t onBuyFail) {
		return ((T (*)(StoreProductAmountItem*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x182F040))(this, parentEntity, data, tooltip, onBuySuccess, onBuyFail);
	}
	template <typename T = void> T OnBuyButtonClick() {
		return ((T (*)(StoreProductAmountItem*))(Il2CppBase() + 0x182F9B0))(this);
	}
	template <typename T = void> T OnEnableb__12_0() {
		return ((T (*)(StoreProductAmountItem*))(Il2CppBase() + 0x1830534))(this);
	}

};

}
