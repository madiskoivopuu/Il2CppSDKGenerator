#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class PlayerClassesWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassesWindow"));
	}

	template <typename T = uintptr_t> T& _container() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _masteryText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _expertiseText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _ghostyRuneInkesText() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _containerScroll() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _classFilterButtons() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _classLearnedCounterText() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _playerClassViews() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _playerClassViewPrefab() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _ditails() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _backBtn() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& _backLabel() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _closeLabel() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& _activateBtn() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& _fastActivateBtn() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& _activateBtnText() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _activateProgress() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& _classInfoBtn() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& _description() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& _storePanel() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& D_Pad() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& _contentRectTransform() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& _viewportRectTransform() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _classViews() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& _topClassViews() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _classFilters() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppDictionary<uintptr_t, void*>*> T& _classRuneInventories() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& _classRunesInventoryCount() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& ClickableItems() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = int32_t> T& _gridWidth() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = float> T& _gridCellWidthWithSpacing() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _activeFilters() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& _seletedView() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& _activeView() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppString*> T& _activeName() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = int32_t> T& _learnedClassesCount() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = int32_t> T& _classesCount() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = int32_t> T& _currentMasteryPoints() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = int32_t> T& _currentExpertisePoints() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = int32_t> T& _currentGhostyRuneInkes() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = void*> T& OnClassRuneChanged() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = void*> T& OnClassRuneDeactivated() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}

	template <typename T = Il2CppDictionary<uintptr_t, void*>*> T get_ClassRuneInventories() {
		return ((T (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B772B0))(this);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T get_ClassRunesInventoryCount() {
		return ((T (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B772B8))(this);
	}
	template <typename T = int32_t> T GetClassRunesInventoryCount(uintptr_t playerClassType) {
		return ((T (*)(PlayerClassesWindow*, uintptr_t))(Il2CppBase() + 0x1B772C0))(this, playerClassType);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T get_ClickableItems() {
		return ((T (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B7731C))(this);
	}
	template <typename T = void> T set_ClickableItems(Il2CppDictionary<int32_t, uintptr_t>* value) {
		return ((T (*)(PlayerClassesWindow*, Il2CppDictionary<int32_t, uintptr_t>*))(Il2CppBase() + 0x1B77324))(this, value);
	}
	template <typename T = uintptr_t> T get_ContentRectTransform() {
		return ((T (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B77334))(this);
	}
	template <typename T = uintptr_t> T get_ViewportRectTransform() {
		return ((T (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B7733C))(this);
	}
	template <typename T = int32_t> T get_GridWidth() {
		return ((T (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B77344))(this);
	}
	template <typename T = bool> T get__isOverlaped() {
		return ((T (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B773E0))(this);
	}
	template <typename T = uintptr_t> T get_SeletedView() {
		return ((T (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B7740C))(this);
	}
	template <typename T = void> T set_SeletedView(uintptr_t value) {
		return ((T (*)(PlayerClassesWindow*, uintptr_t))(Il2CppBase() + 0x1B77414))(this, value);
	}
	template <typename T = void> T add_OnClassRuneChanged(void* value) {
		return ((T (*)(PlayerClassesWindow*, void*))(Il2CppBase() + 0x1B77630))(this, value);
	}
	template <typename T = void> T remove_OnClassRuneChanged(void* value) {
		return ((T (*)(PlayerClassesWindow*, void*))(Il2CppBase() + 0x1B776D4))(this, value);
	}
	template <typename T = void> T add_OnClassRuneDeactivated(void* value) {
		return ((T (*)(PlayerClassesWindow*, void*))(Il2CppBase() + 0x1B77778))(this, value);
	}
	template <typename T = void> T remove_OnClassRuneDeactivated(void* value) {
		return ((T (*)(PlayerClassesWindow*, void*))(Il2CppBase() + 0x1B7781C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B778C0))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B77A98))(this);
	}
	template <typename T = void> T InitClassRuneInventories(uintptr_t avatar, uintptr_t account, uintptr_t classTypeToReinit) {
		return ((T (*)(PlayerClassesWindow*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B795AC))(this, avatar, account, classTypeToReinit);
	}
	template <typename T = void> T ShowClassInfo() {
		return ((T (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B7A068))(this);
	}
	template <typename T = void> T OnClassViewClick(uintptr_t classView) {
		return ((T (*)(PlayerClassesWindow*, uintptr_t))(Il2CppBase() + 0x1B7A1CC))(this, classView);
	}
	template <typename T = void> T OnClassDetailClick(uintptr_t classView, uintptr_t activeToggle) {
		return ((T (*)(PlayerClassesWindow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B7A0F4))(this, classView, activeToggle);
	}
	template <typename T = bool> T CanDetailOpening(uintptr_t classView) {
		return ((T (*)(PlayerClassesWindow*, uintptr_t))(Il2CppBase() + 0x1B774D8))(this, classView);
	}
	template <typename T = void> T OnFilterButtonClick(uintptr_t filter) {
		return ((T (*)(PlayerClassesWindow*, uintptr_t))(Il2CppBase() + 0x1B7A344))(this, filter);
	}
	template <typename T = void> T OnActivateClick() {
		return ((T (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B7A688))(this);
	}
	template <typename T = void> T OnFastActivateClick() {
		return ((T (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B7B064))(this);
	}
	template <typename T = bool> T CanActivateClass(uintptr_t avatar) {
		return ((T (*)(PlayerClassesWindow*, uintptr_t))(Il2CppBase() + 0x1B7AEA8))(this, avatar);
	}
	template <typename T = void*> T CanProgressClass(uintptr_t avatar) {
		return ((T (*)(PlayerClassesWindow*, uintptr_t))(Il2CppBase() + 0x1B7A900))(this, avatar);
	}
	template <typename T = void> T ShowActiveClass() {
		return ((T (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B79D94))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(PlayerClassesWindow*, float))(Il2CppBase() + 0x1B7B068))(this, deltaTime);
	}
	template <typename T = void> T OnUpdateInput(float deltaTime) {
		return ((T (*)(PlayerClassesWindow*, float))(Il2CppBase() + 0x1B7B8B8))(this, deltaTime);
	}
	template <typename T = void> T UpdateClassRune(uintptr_t data) {
		return ((T (*)(PlayerClassesWindow*, uintptr_t))(Il2CppBase() + 0x1B7B968))(this, data);
	}
	template <typename T = void> T UpdateClassRune_1(uintptr_t data) {
		return ((T (*)(PlayerClassesWindow*, uintptr_t))(Il2CppBase() + 0x1B7BA00))(this, data);
	}
	template <typename T = void> T OnLeft() {
		return ((T (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B7BD9C))(this);
	}
	template <typename T = void> T OnRight() {
		return ((T (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B7C054))(this);
	}
	template <typename T = void> T OnTop() {
		return ((T (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B7C170))(this);
	}
	template <typename T = void> T OnBottom() {
		return ((T (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B7C174))(this);
	}
	template <typename T = void> T ChangeScrollPosition(int32_t nextIndex) {
		return ((T (*)(PlayerClassesWindow*, int32_t))(Il2CppBase() + 0x1B7BEBC))(this, nextIndex);
	}
	template <typename T = bool> T OnLeftb__83_0(void* i) {
		return ((T (*)(PlayerClassesWindow*, void*))(Il2CppBase() + 0x1B7C3EC))(this, i);
	}
	template <typename T = bool> T OnRightb__84_0(void* i) {
		return ((T (*)(PlayerClassesWindow*, void*))(Il2CppBase() + 0x1B7C440))(this, i);
	}

};

}
