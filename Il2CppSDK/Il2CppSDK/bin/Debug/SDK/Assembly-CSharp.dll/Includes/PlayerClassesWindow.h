#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class PlayerClassesWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassesWindow"));
	}

	template <typename R = uintptr_t> R& _container() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _masteryText() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _expertiseText() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _ghostyRuneInkesText() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _containerScroll() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = Il2CppArray<ClassFilterButton*>*> R& _classFilterButtons() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _classLearnedCounterText() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	 Il2CppList<PlayerClassView*>*& _playerClassViews() {
		return *(Il2CppList<PlayerClassView*>**)((uintptr_t)this + 0xB0);
	}
	template <typename R = PlayerClassView*> R& _playerClassViewPrefab() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = PlayerClassDetails*> R& _ditails() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& _backBtn() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& _backLabel() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& _closeLabel() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& _activateBtn() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& _fastActivateBtn() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = LocalizedText*> R& _activateBtnText() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& _activateProgress() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& _classInfoBtn() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = LocalizedText*> R& _description() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = HUDStorePanel*> R& _storePanel() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = JoystickDPad*> R& D_Pad() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = uintptr_t> R& _contentRectTransform() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = uintptr_t> R& _viewportRectTransform() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	 Il2CppDictionary<Il2CppString*, PlayerClassView*>*& _classViews() {
		return *(Il2CppDictionary<Il2CppString*, PlayerClassView*>**)((uintptr_t)this + 0x130);
	}
	 Il2CppDictionary<int32_t, int32_t>*& _topClassViews() {
		return *(Il2CppDictionary<int32_t, int32_t>**)((uintptr_t)this + 0x138);
	}
	 Il2CppDictionary<Il2CppString*, ClassFilterButton*>*& _classFilters() {
		return *(Il2CppDictionary<Il2CppString*, ClassFilterButton*>**)((uintptr_t)this + 0x140);
	}
	 Il2CppDictionary<PlayerClassType*, HashSet1InventorySlotEntity*>*>*& _classRuneInventories() {
		return *(Il2CppDictionary<PlayerClassType*, HashSet1InventorySlotEntity*>*>**)((uintptr_t)this + 0x148);
	}
	 Il2CppDictionary<PlayerClassType*, int32_t>*& _classRunesInventoryCount() {
		return *(Il2CppDictionary<PlayerClassType*, int32_t>**)((uintptr_t)this + 0x150);
	}
	 Il2CppDictionary<int32_t, IClickable*>*& ClickableItems() {
		return *(Il2CppDictionary<int32_t, IClickable*>**)((uintptr_t)this + 0x158);
	}
	template <typename R = int32_t> R& _gridWidth() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = float> R& _gridCellWidthWithSpacing() {
		return *(R*)((uintptr_t)this + 0x164);
	}
	 Il2CppList<Il2CppString*>*& _activeFilters() {
		return *(Il2CppList<Il2CppString*>**)((uintptr_t)this + 0x168);
	}
	template <typename R = PlayerClassView*> R& _seletedView() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = PlayerClassView*> R& _activeView() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = Il2CppString*> R& _activeName() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = int32_t> R& _learnedClassesCount() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = int32_t> R& _classesCount() {
		return *(R*)((uintptr_t)this + 0x18C);
	}
	template <typename R = int32_t> R& _currentMasteryPoints() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = int32_t> R& _currentExpertisePoints() {
		return *(R*)((uintptr_t)this + 0x194);
	}
	template <typename R = int32_t> R& _currentGhostyRuneInkes() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	 Action1ClassRuneChangedData*>*& OnClassRuneChanged() {
		return *(Action1ClassRuneChangedData*>**)((uintptr_t)this + 0x1A0);
	}
	 Action2HashSet1PlayerClassType*>*, ClassRuneDeactivatedData*>*& OnClassRuneDeactivated() {
		return *(Action2HashSet1PlayerClassType*>*, ClassRuneDeactivatedData*>**)((uintptr_t)this + 0x1A8);
	}

	 Il2CppDictionary<PlayerClassType*, HashSet1InventorySlotEntity*>*>* get_ClassRuneInventories() {
		return ((Il2CppDictionary<PlayerClassType*, HashSet1InventorySlotEntity*>*>* (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B772B0))(this);
	}
	 Il2CppDictionary<PlayerClassType*, int32_t>* get_ClassRunesInventoryCount() {
		return ((Il2CppDictionary<PlayerClassType*, int32_t>* (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B772B8))(this);
	}
	template <typename R = int32_t> R GetClassRunesInventoryCount(PlayerClassType* playerClassType) {
		return ((R (*)(PlayerClassesWindow*, PlayerClassType*))(Il2CppBase() + 0x1B772C0))(this, playerClassType);
	}
	 Il2CppDictionary<int32_t, IClickable*>* get_ClickableItems() {
		return ((Il2CppDictionary<int32_t, IClickable*>* (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B7731C))(this);
	}
	template <typename R = void> R set_ClickableItems(Il2CppDictionary<int32_t, IClickable*>* value) {
		return ((R (*)(PlayerClassesWindow*, Il2CppDictionary<int32_t, IClickable*>*))(Il2CppBase() + 0x1B77324))(this, value);
	}
	template <typename R = uintptr_t> R get_ContentRectTransform() {
		return ((R (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B77334))(this);
	}
	template <typename R = uintptr_t> R get_ViewportRectTransform() {
		return ((R (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B7733C))(this);
	}
	template <typename R = int32_t> R get_GridWidth() {
		return ((R (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B77344))(this);
	}
	template <typename R = bool> R get__isOverlaped() {
		return ((R (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B773E0))(this);
	}
	template <typename R = PlayerClassView*> R get_SeletedView() {
		return ((R (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B7740C))(this);
	}
	template <typename R = void> R set_SeletedView(PlayerClassView* value) {
		return ((R (*)(PlayerClassesWindow*, PlayerClassView*))(Il2CppBase() + 0x1B77414))(this, value);
	}
	template <typename R = void> R add_OnClassRuneChanged(Action1ClassRuneChangedData*>* value) {
		return ((R (*)(PlayerClassesWindow*, Action1ClassRuneChangedData*>*))(Il2CppBase() + 0x1B77630))(this, value);
	}
	template <typename R = void> R remove_OnClassRuneChanged(Action1ClassRuneChangedData*>* value) {
		return ((R (*)(PlayerClassesWindow*, Action1ClassRuneChangedData*>*))(Il2CppBase() + 0x1B776D4))(this, value);
	}
	template <typename R = void> R add_OnClassRuneDeactivated(Action2HashSet1PlayerClassType*>*, ClassRuneDeactivatedData*>* value) {
		return ((R (*)(PlayerClassesWindow*, Action2HashSet1PlayerClassType*>*, ClassRuneDeactivatedData*>*))(Il2CppBase() + 0x1B77778))(this, value);
	}
	template <typename R = void> R remove_OnClassRuneDeactivated(Action2HashSet1PlayerClassType*>*, ClassRuneDeactivatedData*>* value) {
		return ((R (*)(PlayerClassesWindow*, Action2HashSet1PlayerClassType*>*, ClassRuneDeactivatedData*>*))(Il2CppBase() + 0x1B7781C))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B778C0))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B77A98))(this);
	}
	template <typename R = void> R InitClassRuneInventories(GameEntity* avatar, AccountEntity* account, PlayerClassType* classTypeToReinit) {
		return ((R (*)(PlayerClassesWindow*, GameEntity*, AccountEntity*, PlayerClassType*))(Il2CppBase() + 0x1B795AC))(this, avatar, account, classTypeToReinit);
	}
	template <typename R = void> R ShowClassInfo() {
		return ((R (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B7A068))(this);
	}
	template <typename R = void> R OnClassViewClick(PlayerClassView* classView) {
		return ((R (*)(PlayerClassesWindow*, PlayerClassView*))(Il2CppBase() + 0x1B7A1CC))(this, classView);
	}
	template <typename R = void> R OnClassDetailClick(PlayerClassView* classView, ActiveClassDetailsToggle* activeToggle) {
		return ((R (*)(PlayerClassesWindow*, PlayerClassView*, ActiveClassDetailsToggle*))(Il2CppBase() + 0x1B7A0F4))(this, classView, activeToggle);
	}
	template <typename R = bool> R CanDetailOpening(PlayerClassView* classView) {
		return ((R (*)(PlayerClassesWindow*, PlayerClassView*))(Il2CppBase() + 0x1B774D8))(this, classView);
	}
	template <typename R = void> R OnFilterButtonClick(ClassFilterButton* filter) {
		return ((R (*)(PlayerClassesWindow*, ClassFilterButton*))(Il2CppBase() + 0x1B7A344))(this, filter);
	}
	template <typename R = void> R OnActivateClick() {
		return ((R (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B7A688))(this);
	}
	template <typename R = void> R OnFastActivateClick() {
		return ((R (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B7B064))(this);
	}
	template <typename R = bool> R CanActivateClass(GameEntity* avatar) {
		return ((R (*)(PlayerClassesWindow*, GameEntity*))(Il2CppBase() + 0x1B7AEA8))(this, avatar);
	}
	 ValueTuple2bool, Il2CppString*>* CanProgressClass(GameEntity* avatar) {
		return ((ValueTuple2bool, Il2CppString*>* (*)(PlayerClassesWindow*, GameEntity*))(Il2CppBase() + 0x1B7A900))(this, avatar);
	}
	template <typename R = void> R ShowActiveClass() {
		return ((R (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B79D94))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(PlayerClassesWindow*, float))(Il2CppBase() + 0x1B7B068))(this, deltaTime);
	}
	template <typename R = void> R OnUpdateInput(float deltaTime) {
		return ((R (*)(PlayerClassesWindow*, float))(Il2CppBase() + 0x1B7B8B8))(this, deltaTime);
	}
	template <typename R = void> R UpdateClassRune(ClassRuneChangedData* data) {
		return ((R (*)(PlayerClassesWindow*, ClassRuneChangedData*))(Il2CppBase() + 0x1B7B968))(this, data);
	}
	template <typename R = void> R UpdateClassRune_1(ClassRuneDeactivatedData* data) {
		return ((R (*)(PlayerClassesWindow*, ClassRuneDeactivatedData*))(Il2CppBase() + 0x1B7BA00))(this, data);
	}
	template <typename R = void> R OnLeft() {
		return ((R (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B7BD9C))(this);
	}
	template <typename R = void> R OnRight() {
		return ((R (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B7C054))(this);
	}
	template <typename R = void> R OnTop() {
		return ((R (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B7C170))(this);
	}
	template <typename R = void> R OnBottom() {
		return ((R (*)(PlayerClassesWindow*))(Il2CppBase() + 0x1B7C174))(this);
	}
	template <typename R = void> R ChangeScrollPosition(int32_t nextIndex) {
		return ((R (*)(PlayerClassesWindow*, int32_t))(Il2CppBase() + 0x1B7BEBC))(this, nextIndex);
	}
	template <typename R = bool> R OnLeftb__83_0(KeyValuePair2int32_t, IClickable*>* i) {
		return ((R (*)(PlayerClassesWindow*, KeyValuePair2int32_t, IClickable*>*))(Il2CppBase() + 0x1B7C3EC))(this, i);
	}
	template <typename R = bool> R OnRightb__84_0(KeyValuePair2int32_t, IClickable*>* i) {
		return ((R (*)(PlayerClassesWindow*, KeyValuePair2int32_t, IClickable*>*))(Il2CppBase() + 0x1B7C440))(this, i);
	}

};

