#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class StoreWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = HUDStorePanel*> T& StorePanelCoin() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = HUDStorePanel*> T& StorePanelSilver() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = HUDStorePanel*> T& StorePanelInfluence() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = HUDStorePanel*> T& StorePanelTicket() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = HUDStorePanel*> T& StorePanelVIPPoints() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = StoreCategoryView*> T& BestCategory() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = StoreCategoryView*> T& BargainCategory() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = StoreCategoryView*> T& RunesCategory() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = StoreCategoryView*> T& WeaponCategory() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = StoreCategoryView*> T& ArmourCategory() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = StoreCategoryView*> T& BuildingCategory() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = StoreCategoryView*> T& RaidCategory() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = StoreCategoryView*> T& CoinCategory() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = StoreCategoryView*> T& MountsCategory() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = StoreCategoryView*> T& Inbox() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& ProductsContainer() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = StoreProductView*> T& ProductViewX1Prefab() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = StoreProductView*> T& ProductViewX2Prefab() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = StoreProductView*> T& ProductViewX4Prefab() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = StoreProductView*> T& RuneViewX2Prefab() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = StoreCategoryContainerView*> T& CategoryContainer() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& ProductContainer() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& ProductsScroll() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = StoreBannerContainerView*> T& X1BannerContainer() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = StoreCategory*> T& _selectedCategory() {
		return *(T*)((uintptr_t)this + 0x140);
	}

	template <typename T = StoreCategory*> T get_SelectedCategory() {
		return ((T (*)(StoreWindow*))(Il2CppBase() + 0x184AC78))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(StoreWindow*))(Il2CppBase() + 0x184AC80))(this);
	}
	template <typename T = void> T FillCategory(StoreCategory* category, bool resetScroll) {
		return ((T (*)(StoreWindow*, StoreCategory*, bool))(Il2CppBase() + 0x184B408))(this, category, resetScroll);
	}
	template <typename T = void> T FillProducts(StoreCategory* storeCategory, Il2CppList<ValueTuple2Store2Entity*, Store2DataEntity*>*>* prioritized) {
		return ((T (*)(StoreWindow*, StoreCategory*, Il2CppList<ValueTuple2Store2Entity*, Store2DataEntity*>*>*))(Il2CppBase() + 0x184BB7C))(this, storeCategory, prioritized);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(StoreWindow*))(Il2CppBase() + 0x184D724))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(StoreWindow*, float))(Il2CppBase() + 0x184D780))(this, deltaTime);
	}
	template <typename T = bool> T IsTournamentMessage(MailEntity* e) {
		return ((T (*)(StoreWindow*, MailEntity*))(Il2CppBase() + 0x184D990))(this, e);
	}
	template <typename T = bool> T IsExpiredMessage(MailEntity* e) {
		return ((T (*)(StoreWindow*, MailEntity*))(Il2CppBase() + 0x184D9EC))(this, e);
	}
	template <typename T = bool> T IsWindowMessage(MailEntity* e) {
		return ((T (*)(StoreWindow*, MailEntity*))(Il2CppBase() + 0x184DB84))(this, e);
	}
	template <typename T = void> T OnCategoryButtonClick(StoreCategory* category) {
		return ((T (*)(StoreWindow*, StoreCategory*))(Il2CppBase() + 0x184DBA0))(this, category);
	}
	template <typename T = void> T OnCategoryClick(StoreCategory* category, bool resetScroll) {
		return ((T (*)(StoreWindow*, StoreCategory*, bool))(Il2CppBase() + 0x184B2EC))(this, category, resetScroll);
	}
	template <typename T = void> T printList(Il2CppList<ValueTuple2Store2Entity*, Store2DataEntity*>*>* list) {
		return ((T (*)(StoreWindow*, Il2CppList<ValueTuple2Store2Entity*, Store2DataEntity*>*>*))(Il2CppBase() + 0x184B928))(this, list);
	}
	template <typename T = StoreCategoryView*> T GetCategoryView(StoreCategory* category) {
		return ((T (*)(StoreWindow*, StoreCategory*))(Il2CppBase() + 0x184DDF0))(this, category);
	}
	template <typename T = void> T OnShowb__29_0() {
		return ((T (*)(StoreWindow*))(Il2CppBase() + 0x184DEB8))(this);
	}
	template <typename T = void> T OnShowb__29_1() {
		return ((T (*)(StoreWindow*))(Il2CppBase() + 0x184DEC0))(this);
	}
	template <typename T = void> T OnShowb__29_2() {
		return ((T (*)(StoreWindow*))(Il2CppBase() + 0x184DEC8))(this);
	}
	template <typename T = void> T OnShowb__29_3() {
		return ((T (*)(StoreWindow*))(Il2CppBase() + 0x184DED0))(this);
	}
	template <typename T = void> T OnShowb__29_4() {
		return ((T (*)(StoreWindow*))(Il2CppBase() + 0x184DED8))(this);
	}
	template <typename T = void> T OnShowb__29_5() {
		return ((T (*)(StoreWindow*))(Il2CppBase() + 0x184DEE0))(this);
	}
	template <typename T = void> T OnShowb__29_6() {
		return ((T (*)(StoreWindow*))(Il2CppBase() + 0x184DEE8))(this);
	}
	template <typename T = void> T OnShowb__29_7() {
		return ((T (*)(StoreWindow*))(Il2CppBase() + 0x184DEF0))(this);
	}
	template <typename T = void> T OnShowb__29_8() {
		return ((T (*)(StoreWindow*))(Il2CppBase() + 0x184DEF8))(this);
	}
	template <typename T = void> T OnShowb__29_9() {
		return ((T (*)(StoreWindow*))(Il2CppBase() + 0x184DF00))(this);
	}
	template <typename T = bool> T OnUpdateDrawb__33_0(MailEntity* e) {
		return ((T (*)(StoreWindow*, MailEntity*))(Il2CppBase() + 0x184E18C))(this, e);
	}

};

