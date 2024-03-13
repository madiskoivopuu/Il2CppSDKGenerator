#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class CustomStoreWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomStoreWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& TraderBackgroundIcon() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& TraderIcon() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& TraderName() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& TraderText() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& TopBackgroundPanel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& MainColorIcon() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& BottomColorIcon() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& LogoIcon() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& TopBackGroundTiledImages() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& EventTimerPanel() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& TextEventTimer() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& PanelBestRewards() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& ButtonBestRewards() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& CurrencyPanel() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = HUDStorePanelUniversal*> T& CurrencyPrefab() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& ProductsContent() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& x4ContainerVertical() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& x4ContainerHorizontal() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& x2ContainerVertical() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& x2ContainerHorizontal() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = CustomStoreProductView*> T& ProductViewX1Prefab() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = CustomStoreProductView*> T& ProductViewX2VPrefab() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = CustomStoreProductView*> T& ProductViewX2HPrefab() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = CustomStoreProductView*> T& ProductViewX4Prefab() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& ProductViewX1PrefabEmpty() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = int32_t> T& _showUnlockFXIndex() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = StandartButton*> T& ButtonUpdateStore() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = StandartButton*> T& ButtonPrice1() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = StandartButton*> T& ButtonPrice2() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = StandartButton*> T& ButtonBuyMore() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& PanelUpdateStore() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& TextUpdateStoreTimer() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = CustomStoreProductView*> T& _selected() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = int32_t> T& _selectedIndex() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, HUDStorePanelUniversal*>*> T& CurrenciesItemsViews() {
		return *(T*)((uintptr_t)this + 0x190);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(CustomStoreWindow*))(Il2CppBase() + 0x1636114))(this);
	}
	template <typename T = void> T UpdateStore() {
		return ((T (*)(CustomStoreWindow*))(Il2CppBase() + 0x1637920))(this);
	}
	template <typename T = void> T FillCategory(StoreCategory* category) {
		return ((T (*)(CustomStoreWindow*, StoreCategory*))(Il2CppBase() + 0x1637404))(this, category);
	}
	template <typename T = void> T printList(Il2CppList<ValueTuple2Store2Entity*, Store2DataEntity*>*>* list) {
		return ((T (*)(CustomStoreWindow*, Il2CppList<ValueTuple2Store2Entity*, Store2DataEntity*>*>*))(Il2CppBase() + 0x1637970))(this, list);
	}
	template <typename T = void> T FillProducts(StoreCategory* storeCategory, Il2CppList<ValueTuple2Store2Entity*, Store2DataEntity*>*>* prioritized) {
		return ((T (*)(CustomStoreWindow*, StoreCategory*, Il2CppList<ValueTuple2Store2Entity*, Store2DataEntity*>*>*))(Il2CppBase() + 0x1637BC4))(this, storeCategory, prioritized);
	}
	template <typename T = void> T OnProductClickedAction(CustomStoreProductView* productView, int32_t priorityIndex, bool needSendAnalyticsEvent) {
		return ((T (*)(CustomStoreWindow*, CustomStoreProductView*, int32_t, bool))(Il2CppBase() + 0x1639178))(this, productView, priorityIndex, needSendAnalyticsEvent);
	}
	template <typename T = void> T OnButtonPriceClicked(int32_t buttonIndex) {
		return ((T (*)(CustomStoreWindow*, int32_t))(Il2CppBase() + 0x1639960))(this, buttonIndex);
	}
	template <typename T = void> T OnButtonBestRewardsClicked() {
		return ((T (*)(CustomStoreWindow*))(Il2CppBase() + 0x163A370))(this);
	}
	template <typename T = void> T OnButtonUpdateStoreClicked() {
		return ((T (*)(CustomStoreWindow*))(Il2CppBase() + 0x163A744))(this);
	}
	template <typename T = void> T OnButtonBuyMoreClicked() {
		return ((T (*)(CustomStoreWindow*))(Il2CppBase() + 0x163AE2C))(this);
	}
	template <typename T = StandartButton*> T GetPriceButtonWithIndex(int32_t index) {
		return ((T (*)(CustomStoreWindow*, int32_t))(Il2CppBase() + 0x163A348))(this, index);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(CustomStoreWindow*, float))(Il2CppBase() + 0x163AF58))(this, deltaTime);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(CustomStoreWindow*))(Il2CppBase() + 0x163719C))(this);
	}
	template <typename T = void> T OnShowb__37_0() {
		return ((T (*)(CustomStoreWindow*))(Il2CppBase() + 0x163B5E4))(this);
	}
	template <typename T = void> T OnShowb__37_1() {
		return ((T (*)(CustomStoreWindow*))(Il2CppBase() + 0x163B5EC))(this);
	}

};

