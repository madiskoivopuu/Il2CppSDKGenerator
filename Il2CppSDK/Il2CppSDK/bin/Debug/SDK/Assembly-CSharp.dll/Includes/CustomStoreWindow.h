#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class CustomStoreWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomStoreWindow"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& TraderBackgroundIcon() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& TraderIcon() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& TraderName() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& TraderText() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& TopBackgroundPanel() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& MainColorIcon() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& BottomColorIcon() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& LogoIcon() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& TopBackGroundTiledImages() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& EventTimerPanel() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& TextEventTimer() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& PanelBestRewards() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& ButtonBestRewards() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& CurrencyPanel() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = HUDStorePanelUniversal*> R& CurrencyPrefab() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& ProductsContent() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& x4ContainerVertical() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = uintptr_t> R& x4ContainerHorizontal() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = uintptr_t> R& x2ContainerVertical() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = uintptr_t> R& x2ContainerHorizontal() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = CustomStoreProductView*> R& ProductViewX1Prefab() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = CustomStoreProductView*> R& ProductViewX2VPrefab() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = CustomStoreProductView*> R& ProductViewX2HPrefab() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = CustomStoreProductView*> R& ProductViewX4Prefab() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = uintptr_t> R& ProductViewX1PrefabEmpty() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = int32_t> R& _showUnlockFXIndex() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = StandartButton*> R& ButtonUpdateStore() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = StandartButton*> R& ButtonPrice1() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = StandartButton*> R& ButtonPrice2() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = StandartButton*> R& ButtonBuyMore() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = uintptr_t> R& PanelUpdateStore() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = uintptr_t> R& TextUpdateStoreTimer() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = CustomStoreProductView*> R& _selected() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = int32_t> R& _selectedIndex() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	 Il2CppDictionary<Il2CppString*, HUDStorePanelUniversal*>*& CurrenciesItemsViews() {
		return *(Il2CppDictionary<Il2CppString*, HUDStorePanelUniversal*>**)((uintptr_t)this + 0x190);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(CustomStoreWindow*))(Il2CppBase() + 0x1636114))(this);
	}
	template <typename R = void> R UpdateStore() {
		return ((R (*)(CustomStoreWindow*))(Il2CppBase() + 0x1637920))(this);
	}
	template <typename R = void> R FillCategory(StoreCategory category) {
		return ((R (*)(CustomStoreWindow*, StoreCategory))(Il2CppBase() + 0x1637404))(this, category);
	}
	template <typename R = void> R printList(Il2CppList<ValueTuple2<Store2Entity*, Store2DataEntity*>*>* list) {
		return ((R (*)(CustomStoreWindow*, Il2CppList<ValueTuple2<Store2Entity*, Store2DataEntity*>*>*))(Il2CppBase() + 0x1637970))(this, list);
	}
	template <typename R = void> R FillProducts(StoreCategory storeCategory, Il2CppList<ValueTuple2<Store2Entity*, Store2DataEntity*>*>* prioritized) {
		return ((R (*)(CustomStoreWindow*, StoreCategory, Il2CppList<ValueTuple2<Store2Entity*, Store2DataEntity*>*>*))(Il2CppBase() + 0x1637BC4))(this, storeCategory, prioritized);
	}
	template <typename R = void> R OnProductClickedAction(CustomStoreProductView* productView, int32_t priorityIndex, bool needSendAnalyticsEvent) {
		return ((R (*)(CustomStoreWindow*, CustomStoreProductView*, int32_t, bool))(Il2CppBase() + 0x1639178))(this, productView, priorityIndex, needSendAnalyticsEvent);
	}
	template <typename R = void> R OnButtonPriceClicked(int32_t buttonIndex) {
		return ((R (*)(CustomStoreWindow*, int32_t))(Il2CppBase() + 0x1639960))(this, buttonIndex);
	}
	template <typename R = void> R OnButtonBestRewardsClicked() {
		return ((R (*)(CustomStoreWindow*))(Il2CppBase() + 0x163A370))(this);
	}
	template <typename R = void> R OnButtonUpdateStoreClicked() {
		return ((R (*)(CustomStoreWindow*))(Il2CppBase() + 0x163A744))(this);
	}
	template <typename R = void> R OnButtonBuyMoreClicked() {
		return ((R (*)(CustomStoreWindow*))(Il2CppBase() + 0x163AE2C))(this);
	}
	template <typename R = StandartButton*> R GetPriceButtonWithIndex(int32_t index) {
		return ((R (*)(CustomStoreWindow*, int32_t))(Il2CppBase() + 0x163A348))(this, index);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(CustomStoreWindow*, float))(Il2CppBase() + 0x163AF58))(this, deltaTime);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(CustomStoreWindow*))(Il2CppBase() + 0x163719C))(this);
	}
	template <typename R = void> R OnShowb__37_0() {
		return ((R (*)(CustomStoreWindow*))(Il2CppBase() + 0x163B5E4))(this);
	}
	template <typename R = void> R OnShowb__37_1() {
		return ((R (*)(CustomStoreWindow*))(Il2CppBase() + 0x163B5EC))(this);
	}

};

