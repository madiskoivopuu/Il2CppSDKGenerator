#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CustomStoreProductView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomStoreProductView"));
	}

	template <typename R = uintptr_t> R& IconUnderlay() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Icon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& DescriptionPanel() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& Caption() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& Description() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& SelectedImage() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& RarityCommon() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& RarityUncommon() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& RarityRare() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& RarityEpic() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& RarityLegendary() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& RarityBOP() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = BadgeView*> R& Badge() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& TimeLeft() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& TimeLeftText() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& ProfitPanel() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& ProfitText() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& VIPPanel() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& VIPText() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& TokensPanel() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& TokensImage() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& TokensText() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& LimitedPanel() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& LimitedLabel() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& DiscountPercentPanel() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& DiscountPercentText() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& SoldOutPanel() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& SoldOutTimerImage() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& SoldOutText() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = uintptr_t> R& CommingSoonPanel() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = uintptr_t> R& CommingSoonTimerText() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = uintptr_t> R& CommingSoonText() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = uintptr_t> R& FX_Unlock() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = TooltipTrigger*> R& TooltipTrigger() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = uintptr_t> R& PricesPanel() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = CustomStoreProductPriceView*> R& Price1() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = uintptr_t> R& Slash() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = CustomStoreProductPriceView*> R& Price2() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	 Action1<CustomStoreProductView*>*& _onProductClicked() {
		return *(Action1<CustomStoreProductView*>**)((uintptr_t)this + 0x150);
	}
	template <typename R = bool> R& _soldOutRequestSent() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = int64_t> R& _storeId() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = StoreCategory> R& _storeCategory() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = TooltipView*> R& _tooltip() {
		return *(R*)((uintptr_t)this + 0x170);
	}

	template <typename R = int64_t> R get_StoreId() {
		return ((R (*)(CustomStoreProductView*))(Il2CppBase() + 0x1BD87B4))(this);
	}
	template <typename R = bool> R get_IsSelected() {
		return ((R (*)(CustomStoreProductView*))(Il2CppBase() + 0x1BD87BC))(this);
	}
	template <typename R = void> R set_IsSelected(bool value) {
		return ((R (*)(CustomStoreProductView*, bool))(Il2CppBase() + 0x1BD87E8))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(CustomStoreProductView*))(Il2CppBase() + 0x1BD8824))(this);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(CustomStoreProductView*, uintptr_t))(Il2CppBase() + 0x1BD88D8))(this, eventData);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(CustomStoreProductView*, uintptr_t))(Il2CppBase() + 0x1BD88DC))(this, eventData);
	}
	template <typename R = void> R Init(Store2Entity* product, StoreCategory storeCategory, Category category, TooltipView* tooltipView, Action1<CustomStoreProductView*>* onProductClicked, bool showUnlockFX) {
		return ((R (*)(CustomStoreProductView*, Store2Entity*, StoreCategory, Category, TooltipView*, Action1<CustomStoreProductView*>*, bool))(Il2CppBase() + 0x1BD8DBC))(this, product, storeCategory, category, tooltipView, onProductClicked, showUnlockFX);
	}
	template <typename R = void> R Update() {
		return ((R (*)(CustomStoreProductView*))(Il2CppBase() + 0x1BDA73C))(this);
	}
	template <typename R = void> R OnProductClicked() {
		return ((R (*)(CustomStoreProductView*))(Il2CppBase() + 0x1BD88E0))(this);
	}

};

