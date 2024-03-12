#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CustomStoreProductView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomStoreProductView"));
	}

	template <typename T = uintptr_t> T& IconUnderlay() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& DescriptionPanel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Caption() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Description() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& SelectedImage() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& RarityCommon() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& RarityUncommon() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& RarityRare() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& RarityEpic() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& RarityLegendary() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& RarityBOP() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& Badge() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& TimeLeft() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& TimeLeftText() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ProfitPanel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ProfitText() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& VIPPanel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& VIPText() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& TokensPanel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& TokensImage() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& TokensText() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& LimitedPanel() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& LimitedLabel() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& DiscountPercentPanel() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& DiscountPercentText() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& SoldOutPanel() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& SoldOutTimerImage() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& SoldOutText() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& CommingSoonPanel() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& CommingSoonTimerText() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& CommingSoonText() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& FX_Unlock() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& TooltipTrigger() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& PricesPanel() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& Price1() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& Slash() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& Price2() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = void*> T& _onProductClicked() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = bool> T& _soldOutRequestSent() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = int64_t> T& _storeId() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& _storeCategory() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& _tooltip() {
		return *(T*)((uintptr_t)this + 0x170);
	}

	template <typename T = int64_t> T get_StoreId() {
		return ((T (*)(CustomStoreProductView*))(Il2CppBase() + 0x1BD87B4))(this);
	}
	template <typename T = bool> T get_IsSelected() {
		return ((T (*)(CustomStoreProductView*))(Il2CppBase() + 0x1BD87BC))(this);
	}
	template <typename T = void> T set_IsSelected(bool value) {
		return ((T (*)(CustomStoreProductView*, bool))(Il2CppBase() + 0x1BD87E8))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CustomStoreProductView*))(Il2CppBase() + 0x1BD8824))(this);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(CustomStoreProductView*, uintptr_t))(Il2CppBase() + 0x1BD88D8))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(CustomStoreProductView*, uintptr_t))(Il2CppBase() + 0x1BD88DC))(this, eventData);
	}
	template <typename T = void> T Init(uintptr_t product, uintptr_t storeCategory, uintptr_t category, uintptr_t tooltipView, void* onProductClicked, bool showUnlockFX) {
		return ((T (*)(CustomStoreProductView*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, void*, bool))(Il2CppBase() + 0x1BD8DBC))(this, product, storeCategory, category, tooltipView, onProductClicked, showUnlockFX);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CustomStoreProductView*))(Il2CppBase() + 0x1BDA73C))(this);
	}
	template <typename T = void> T OnProductClicked() {
		return ((T (*)(CustomStoreProductView*))(Il2CppBase() + 0x1BD88E0))(this);
	}

};

}
