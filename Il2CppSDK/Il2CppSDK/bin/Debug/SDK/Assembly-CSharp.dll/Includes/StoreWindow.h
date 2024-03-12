#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class StoreWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& StorePanelCoin() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& StorePanelSilver() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& StorePanelInfluence() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& StorePanelTicket() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& StorePanelVIPPoints() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& BestCategory() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& BargainCategory() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& RunesCategory() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& WeaponCategory() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& ArmourCategory() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& BuildingCategory() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& RaidCategory() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& CoinCategory() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& MountsCategory() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& Inbox() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& ProductsContainer() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& ProductViewX1Prefab() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& ProductViewX2Prefab() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& ProductViewX4Prefab() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& RuneViewX2Prefab() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& CategoryContainer() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& ProductContainer() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& ProductsScroll() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& X1BannerContainer() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& _selectedCategory() {
		return *(T*)((uintptr_t)this + 0x140);
	}

	template <typename T = uintptr_t> T get_SelectedCategory() {
		return ((T (*)(StoreWindow*))(Il2CppBase() + 0x184AC78))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(StoreWindow*))(Il2CppBase() + 0x184AC80))(this);
	}
	template <typename T = void> T FillCategory(uintptr_t category, bool resetScroll) {
		return ((T (*)(StoreWindow*, uintptr_t, bool))(Il2CppBase() + 0x184B408))(this, category, resetScroll);
	}
	template <typename T = void> T FillProducts(uintptr_t storeCategory, Il2CppList<void*>* prioritized) {
		return ((T (*)(StoreWindow*, uintptr_t, Il2CppList<void*>*))(Il2CppBase() + 0x184BB7C))(this, storeCategory, prioritized);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(StoreWindow*))(Il2CppBase() + 0x184D724))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(StoreWindow*, float))(Il2CppBase() + 0x184D780))(this, deltaTime);
	}
	template <typename T = bool> T IsTournamentMessage(uintptr_t e) {
		return ((T (*)(StoreWindow*, uintptr_t))(Il2CppBase() + 0x184D990))(this, e);
	}
	template <typename T = bool> T IsExpiredMessage(uintptr_t e) {
		return ((T (*)(StoreWindow*, uintptr_t))(Il2CppBase() + 0x184D9EC))(this, e);
	}
	template <typename T = bool> T IsWindowMessage(uintptr_t e) {
		return ((T (*)(StoreWindow*, uintptr_t))(Il2CppBase() + 0x184DB84))(this, e);
	}
	template <typename T = void> T OnCategoryButtonClick(uintptr_t category) {
		return ((T (*)(StoreWindow*, uintptr_t))(Il2CppBase() + 0x184DBA0))(this, category);
	}
	template <typename T = void> T OnCategoryClick(uintptr_t category, bool resetScroll) {
		return ((T (*)(StoreWindow*, uintptr_t, bool))(Il2CppBase() + 0x184B2EC))(this, category, resetScroll);
	}
	template <typename T = void> T printList(Il2CppList<void*>* list) {
		return ((T (*)(StoreWindow*, Il2CppList<void*>*))(Il2CppBase() + 0x184B928))(this, list);
	}
	template <typename T = uintptr_t> T GetCategoryView(uintptr_t category) {
		return ((T (*)(StoreWindow*, uintptr_t))(Il2CppBase() + 0x184DDF0))(this, category);
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
	template <typename T = bool> T OnUpdateDrawb__33_0(uintptr_t e) {
		return ((T (*)(StoreWindow*, uintptr_t))(Il2CppBase() + 0x184E18C))(this, e);
	}

};

}
