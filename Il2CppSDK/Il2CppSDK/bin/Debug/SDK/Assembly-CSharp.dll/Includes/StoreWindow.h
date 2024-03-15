#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class StoreWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreWindow"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = HUDStorePanel*> R& StorePanelCoin() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = HUDStorePanel*> R& StorePanelSilver() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = HUDStorePanel*> R& StorePanelInfluence() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = HUDStorePanel*> R& StorePanelTicket() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = HUDStorePanel*> R& StorePanelVIPPoints() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = StoreCategoryView*> R& BestCategory() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = StoreCategoryView*> R& BargainCategory() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = StoreCategoryView*> R& RunesCategory() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = StoreCategoryView*> R& WeaponCategory() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = StoreCategoryView*> R& ArmourCategory() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = StoreCategoryView*> R& BuildingCategory() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = StoreCategoryView*> R& RaidCategory() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = StoreCategoryView*> R& CoinCategory() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = StoreCategoryView*> R& MountsCategory() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = StoreCategoryView*> R& Inbox() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& ProductsContainer() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = StoreProductView*> R& ProductViewX1Prefab() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = StoreProductView*> R& ProductViewX2Prefab() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = StoreProductView*> R& ProductViewX4Prefab() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = StoreProductView*> R& RuneViewX2Prefab() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = StoreCategoryContainerView*> R& CategoryContainer() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = uintptr_t> R& ProductContainer() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = uintptr_t> R& ProductsScroll() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = StoreBannerContainerView*> R& X1BannerContainer() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = StoreCategory> R& _selectedCategory() {
		return *(R*)((uintptr_t)this + 0x140);
	}

	template <typename R = StoreCategory> R get_SelectedCategory() {
		return ((R (*)(StoreWindow*))(Il2CppBase() + 0x184AC78))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(StoreWindow*))(Il2CppBase() + 0x184AC80))(this);
	}
	template <typename R = void> R FillCategory(StoreCategory category, bool resetScroll) {
		return ((R (*)(StoreWindow*, StoreCategory, bool))(Il2CppBase() + 0x184B408))(this, category, resetScroll);
	}
	template <typename R = void> R FillProducts(StoreCategory storeCategory, Il2CppList<ValueTuple2<Store2Entity*, Store2DataEntity*>*>* prioritized) {
		return ((R (*)(StoreWindow*, StoreCategory, Il2CppList<ValueTuple2<Store2Entity*, Store2DataEntity*>*>*))(Il2CppBase() + 0x184BB7C))(this, storeCategory, prioritized);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(StoreWindow*))(Il2CppBase() + 0x184D724))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(StoreWindow*, float))(Il2CppBase() + 0x184D780))(this, deltaTime);
	}
	template <typename R = bool> R IsTournamentMessage(MailEntity* e) {
		return ((R (*)(StoreWindow*, MailEntity*))(Il2CppBase() + 0x184D990))(this, e);
	}
	template <typename R = bool> R IsExpiredMessage(MailEntity* e) {
		return ((R (*)(StoreWindow*, MailEntity*))(Il2CppBase() + 0x184D9EC))(this, e);
	}
	template <typename R = bool> R IsWindowMessage(MailEntity* e) {
		return ((R (*)(StoreWindow*, MailEntity*))(Il2CppBase() + 0x184DB84))(this, e);
	}
	template <typename R = void> R OnCategoryButtonClick(StoreCategory category) {
		return ((R (*)(StoreWindow*, StoreCategory))(Il2CppBase() + 0x184DBA0))(this, category);
	}
	template <typename R = void> R OnCategoryClick(StoreCategory category, bool resetScroll) {
		return ((R (*)(StoreWindow*, StoreCategory, bool))(Il2CppBase() + 0x184B2EC))(this, category, resetScroll);
	}
	template <typename R = void> R printList(Il2CppList<ValueTuple2<Store2Entity*, Store2DataEntity*>*>* list) {
		return ((R (*)(StoreWindow*, Il2CppList<ValueTuple2<Store2Entity*, Store2DataEntity*>*>*))(Il2CppBase() + 0x184B928))(this, list);
	}
	template <typename R = StoreCategoryView*> R GetCategoryView(StoreCategory category) {
		return ((R (*)(StoreWindow*, StoreCategory))(Il2CppBase() + 0x184DDF0))(this, category);
	}
	template <typename R = void> R OnShowb__29_0() {
		return ((R (*)(StoreWindow*))(Il2CppBase() + 0x184DEB8))(this);
	}
	template <typename R = void> R OnShowb__29_1() {
		return ((R (*)(StoreWindow*))(Il2CppBase() + 0x184DEC0))(this);
	}
	template <typename R = void> R OnShowb__29_2() {
		return ((R (*)(StoreWindow*))(Il2CppBase() + 0x184DEC8))(this);
	}
	template <typename R = void> R OnShowb__29_3() {
		return ((R (*)(StoreWindow*))(Il2CppBase() + 0x184DED0))(this);
	}
	template <typename R = void> R OnShowb__29_4() {
		return ((R (*)(StoreWindow*))(Il2CppBase() + 0x184DED8))(this);
	}
	template <typename R = void> R OnShowb__29_5() {
		return ((R (*)(StoreWindow*))(Il2CppBase() + 0x184DEE0))(this);
	}
	template <typename R = void> R OnShowb__29_6() {
		return ((R (*)(StoreWindow*))(Il2CppBase() + 0x184DEE8))(this);
	}
	template <typename R = void> R OnShowb__29_7() {
		return ((R (*)(StoreWindow*))(Il2CppBase() + 0x184DEF0))(this);
	}
	template <typename R = void> R OnShowb__29_8() {
		return ((R (*)(StoreWindow*))(Il2CppBase() + 0x184DEF8))(this);
	}
	template <typename R = void> R OnShowb__29_9() {
		return ((R (*)(StoreWindow*))(Il2CppBase() + 0x184DF00))(this);
	}
	template <typename R = bool> R OnUpdateDrawb__33_0(MailEntity* e) {
		return ((R (*)(StoreWindow*, MailEntity*))(Il2CppBase() + 0x184E18C))(this, e);
	}

};

