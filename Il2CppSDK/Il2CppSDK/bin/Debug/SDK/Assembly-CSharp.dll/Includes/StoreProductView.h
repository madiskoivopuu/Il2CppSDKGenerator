#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreProductView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreProductView"));
	}

	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& DescriptionSimple() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& DescriptionItems() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& DescriptionItemsLess() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& ClickButton() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& Badge() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& TimeLeft() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& TimeLeftText() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& BuyButton() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& ViewButton() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& ProfitPanel() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& ProfitText() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& VIPPanel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& VIPText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& TokensPanel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& TokensImage() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& TokensText() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& XBonusPanel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& XBonusText() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& SoldOutPanel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& SoldOutTimerImage() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& SoldOutText() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& ContentContainerItems() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& ContentContainerItemsLess() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& ProductContentItemPrefab() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = void*> T& _onProductClicked() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int64_t> T& _entityId() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _storeCategory() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = bool> T& _soldOutRequestSent() {
		return *(T*)((uintptr_t)this + 0xFC);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(StoreProductView*))(Il2CppBase() + 0x1835168))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(StoreProductView*))(Il2CppBase() + 0x183529C))(this);
	}
	template <typename T = void> T Init(uintptr_t product, uintptr_t storeCategory, uintptr_t category, void* onProductClicked) {
		return ((T (*)(StoreProductView*, uintptr_t, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x1835308))(this, product, storeCategory, category, onProductClicked);
	}
	template <typename T = void> T Update() {
		return ((T (*)(StoreProductView*))(Il2CppBase() + 0x183774C))(this);
	}
	template <typename T = void> T OnProductClicked() {
		return ((T (*)(StoreProductView*))(Il2CppBase() + 0x1838350))(this);
	}

};

}
