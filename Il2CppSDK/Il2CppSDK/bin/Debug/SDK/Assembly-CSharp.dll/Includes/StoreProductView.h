#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreProductView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreProductView"));
	}

	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& DescriptionSimple() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& DescriptionItems() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& DescriptionItemsLess() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& ClickButton() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = BadgeView*> R& Badge() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& TimeLeft() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& TimeLeftText() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = StandartButton*> R& BuyButton() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = StandartButton*> R& ViewButton() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& ProfitPanel() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& ProfitText() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& VIPPanel() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& VIPText() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& TokensPanel() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& TokensImage() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& TokensText() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& XBonusPanel() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& XBonusText() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& SoldOutPanel() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& SoldOutTimerImage() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& SoldOutText() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& ContentContainerItems() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& ContentContainerItemsLess() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = StoreProductContentSlotView*> R& ProductContentItemPrefab() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	 Action1int64_t>*& _onProductClicked() {
		return *(Action1int64_t>**)((uintptr_t)this + 0xE8);
	}
	template <typename R = int64_t> R& _entityId() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = StoreCategory*> R& _storeCategory() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = bool> R& _soldOutRequestSent() {
		return *(R*)((uintptr_t)this + 0xFC);
	}

	template <typename R = void> R OnEnable() {
		return ((R (*)(StoreProductView*))(Il2CppBase() + 0x1835168))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(StoreProductView*))(Il2CppBase() + 0x183529C))(this);
	}
	template <typename R = void> R Init(Store2Entity* product, StoreCategory* storeCategory, Category* category, Action1int64_t>* onProductClicked) {
		return ((R (*)(StoreProductView*, Store2Entity*, StoreCategory*, Category*, Action1int64_t>*))(Il2CppBase() + 0x1835308))(this, product, storeCategory, category, onProductClicked);
	}
	template <typename R = void> R Update() {
		return ((R (*)(StoreProductView*))(Il2CppBase() + 0x183774C))(this);
	}
	template <typename R = void> R OnProductClicked() {
		return ((R (*)(StoreProductView*))(Il2CppBase() + 0x1838350))(this);
	}

};

