#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class BossesSelectWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossesSelectWindow"));
	}

	template <typename T = uintptr_t> T& _container() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _containerScroll() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _backBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _selectBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _bossViews() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _bossViewPrefab() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _bossDetailView() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& D_Pad() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _contentRectTransform() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _viewportRectTransform() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& ClickableItems() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& _gridWidth() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& _gridCellWidthWithSpacing() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& _selectedView() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& _activeView() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppString*> T& _activeName() {
		return *(T*)((uintptr_t)this + 0xE8);
	}

	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T get_ClickableItems() {
		return ((T (*)(BossesSelectWindow*))(Il2CppBase() + 0x16CF470))(this);
	}
	template <typename T = void> T set_ClickableItems(Il2CppDictionary<int32_t, uintptr_t>* value) {
		return ((T (*)(BossesSelectWindow*, Il2CppDictionary<int32_t, uintptr_t>*))(Il2CppBase() + 0x16CF478))(this, value);
	}
	template <typename T = uintptr_t> T get_ContentRectTransform() {
		return ((T (*)(BossesSelectWindow*))(Il2CppBase() + 0x16CF480))(this);
	}
	template <typename T = uintptr_t> T get_ViewportRectTransform() {
		return ((T (*)(BossesSelectWindow*))(Il2CppBase() + 0x16CF488))(this);
	}
	template <typename T = int32_t> T get_GridWidth() {
		return ((T (*)(BossesSelectWindow*))(Il2CppBase() + 0x16CF490))(this);
	}
	template <typename T = bool> T get__isOverlaped() {
		return ((T (*)(BossesSelectWindow*))(Il2CppBase() + 0x16CF52C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BossesSelectWindow*))(Il2CppBase() + 0x16CF558))(this);
	}
	template <typename T = void> T BackButtonClicked() {
		return ((T (*)(BossesSelectWindow*))(Il2CppBase() + 0x16CF644))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(BossesSelectWindow*))(Il2CppBase() + 0x16CF6BC))(this);
	}
	template <typename T = void> T OnBossViewClick(uintptr_t bossView) {
		return ((T (*)(BossesSelectWindow*, uintptr_t))(Il2CppBase() + 0x16D05B0))(this, bossView);
	}
	template <typename T = void> T OnBossInfoViewClick(uintptr_t bossView) {
		return ((T (*)(BossesSelectWindow*, uintptr_t))(Il2CppBase() + 0x16D06FC))(this, bossView);
	}
	template <typename T = void> T OnFilterButtonClick(void* filter) {
		return ((T (*)(BossesSelectWindow*, void*))(Il2CppBase() + 0x16D07F8))(this, filter);
	}
	template <typename T = void> T OnSelectClick() {
		return ((T (*)(BossesSelectWindow*))(Il2CppBase() + 0x16D0A00))(this);
	}
	template <typename T = bool> T CanActivateBoss(uintptr_t avatar) {
		return ((T (*)(BossesSelectWindow*, uintptr_t))(Il2CppBase() + 0x16D0AB0))(this, avatar);
	}
	template <typename T = void> T ShowActiveBoss() {
		return ((T (*)(BossesSelectWindow*))(Il2CppBase() + 0x16D0308))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(BossesSelectWindow*, float))(Il2CppBase() + 0x16D0B84))(this, deltaTime);
	}
	template <typename T = void> T OnUpdateInput(float deltaTime) {
		return ((T (*)(BossesSelectWindow*, float))(Il2CppBase() + 0x16D0C98))(this, deltaTime);
	}
	template <typename T = void> T OnLeft() {
		return ((T (*)(BossesSelectWindow*))(Il2CppBase() + 0x16D0D44))(this);
	}
	template <typename T = void> T OnRight() {
		return ((T (*)(BossesSelectWindow*))(Il2CppBase() + 0x16D0FFC))(this);
	}
	template <typename T = void> T OnTop() {
		return ((T (*)(BossesSelectWindow*))(Il2CppBase() + 0x16D1118))(this);
	}
	template <typename T = void> T OnBottom() {
		return ((T (*)(BossesSelectWindow*))(Il2CppBase() + 0x16D111C))(this);
	}
	template <typename T = void> T ChangeScrollPosition(int32_t nextIndex) {
		return ((T (*)(BossesSelectWindow*, int32_t))(Il2CppBase() + 0x16D0E64))(this, nextIndex);
	}
	template <typename T = bool> T OnLeftb__39_0(void* i) {
		return ((T (*)(BossesSelectWindow*, void*))(Il2CppBase() + 0x16D11B8))(this, i);
	}
	template <typename T = bool> T OnRightb__40_0(void* i) {
		return ((T (*)(BossesSelectWindow*, void*))(Il2CppBase() + 0x16D1290))(this, i);
	}

};

}
