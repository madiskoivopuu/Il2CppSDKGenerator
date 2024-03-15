#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuneItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneItem"));
	}

	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _gradeText() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _countText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& GrayMaterial() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _rarityViews() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _canvasGroup() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> R& _minCountToView() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = float> R& _sqrDistanceToGlow() {
		return *(R*)((uintptr_t)this + 0x4C);
	}
	template <typename R = bool> R& Permanent() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x54);
	}
	template <typename R = RuneItemState*> R& RuneItemState() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = bool> R& DragEnable() {
		return *(R*)((uintptr_t)this + 0x5C);
	}
	template <typename R = bool> R& ScrollEnable() {
		return *(R*)((uintptr_t)this + 0x5D);
	}
	template <typename R = bool> R& IsScrolling() {
		return *(R*)((uintptr_t)this + 0x5E);
	}
	template <typename R = bool> R& Locked() {
		return *(R*)((uintptr_t)this + 0x5F);
	}
	template <typename R = bool> R& IsRuneItem() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = bool> R& IsMaxGrade() {
		return *(R*)((uintptr_t)this + 0x61);
	}
	template <typename R = uintptr_t> R& RectTransform() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> R& _index() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = InventorySlot*> R& _slot() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = int32_t> R& _parentId() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = int32_t> R& _parentRuneInventoryId() {
		return *(R*)((uintptr_t)this + 0x84);
	}
	template <typename R = Il2CppString*> R& _runeBlueprint() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = Il2CppString*> R& _runeBaseBlueprint() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = int32_t> R& _grade() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = int32_t> R& _count() {
		return *(R*)((uintptr_t)this + 0x9C);
	}
	 IItemEventHandler1RuneItem*>*& _handler() {
		return *(IItemEventHandler1RuneItem*>**)((uintptr_t)this + 0xA0);
	}
	template <typename R = IUIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = IRuneInventoryPanel*> R& _runePanel() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = RuneItemEffect*> R& _runeItemEffect() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& _clickStartTime() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& _doubleClickThreshold() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = int32_t> R& _clickCount() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = bool> R& _isPressed() {
		return *(R*)((uintptr_t)this + 0xD4);
	}
	template <typename R = bool> R& _isShowed() {
		return *(R*)((uintptr_t)this + 0xD5);
	}
	template <typename R = bool> R& _isDragged() {
		return *(R*)((uintptr_t)this + 0xD6);
	}
	template <typename R = bool> R& _forceUpdate() {
		return *(R*)((uintptr_t)this + 0xD7);
	}
	template <typename R = bool> R& _isInited() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = float> R& _startDistanceToMerge() {
		return *(R*)((uintptr_t)this + 0xDC);
	}
	template <typename R = float> R& _startDistanceToMergeRevert() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	 Action1RuneItem*>*& OnSlotEmpty() {
		return *(Action1RuneItem*>**)((uintptr_t)this + 0xE8);
	}
	 Action1RuneItem*>*& OnSlotNotEmpty() {
		return *(Action1RuneItem*>**)((uintptr_t)this + 0xF0);
	}
	 Action1RuneItem*>*& OnSlotChanged() {
		return *(Action1RuneItem*>**)((uintptr_t)this + 0xF8);
	}

	template <typename R = bool> R get_Permanent() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x134F660))(this);
	}
	template <typename R = void> R set_Permanent(bool value) {
		return ((R (*)(RuneItem*, bool))(Il2CppBase() + 0x134F668))(this, value);
	}
	template <typename R = ItemEntity*> R get_Item() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x134F674))(this);
	}
	template <typename R = InventorySlotEntity*> R get_SlotEntity() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x134F778))(this);
	}
	template <typename R = InventorySlot*> R get_Slot() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x134F87C))(this);
	}
	template <typename R = GameEntity*> R get_ParentEntity() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x134F884))(this);
	}
	template <typename R = int32_t> R get_Id() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x134F980))(this);
	}
	template <typename R = void> R set_Id(int32_t value) {
		return ((R (*)(RuneItem*, int32_t))(Il2CppBase() + 0x134F988))(this, value);
	}
	template <typename R = int32_t> R get_Index() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x134F990))(this);
	}
	template <typename R = bool> R get_IsEmptySlot() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x134F998))(this);
	}
	template <typename R = RuneItemState*> R get_RuneItemState() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x134FA1C))(this);
	}
	template <typename R = void> R set_RuneItemState(RuneItemState* value) {
		return ((R (*)(RuneItem*, RuneItemState*))(Il2CppBase() + 0x134FA24))(this, value);
	}
	template <typename R = bool> R get_DragEnable() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x134FA2C))(this);
	}
	template <typename R = void> R set_DragEnable(bool value) {
		return ((R (*)(RuneItem*, bool))(Il2CppBase() + 0x134FA34))(this, value);
	}
	template <typename R = bool> R get_ScrollEnable() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x134FA40))(this);
	}
	template <typename R = void> R set_ScrollEnable(bool value) {
		return ((R (*)(RuneItem*, bool))(Il2CppBase() + 0x134FA48))(this, value);
	}
	template <typename R = bool> R get_IsScrolling() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x134FA54))(this);
	}
	template <typename R = void> R set_IsScrolling(bool value) {
		return ((R (*)(RuneItem*, bool))(Il2CppBase() + 0x134FA5C))(this, value);
	}
	template <typename R = bool> R get_Locked() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x134FA68))(this);
	}
	template <typename R = void> R set_Locked(bool value) {
		return ((R (*)(RuneItem*, bool))(Il2CppBase() + 0x134FA70))(this, value);
	}
	template <typename R = bool> R get_IsRuneItem() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x134FA7C))(this);
	}
	template <typename R = void> R set_IsRuneItem(bool value) {
		return ((R (*)(RuneItem*, bool))(Il2CppBase() + 0x134FA84))(this, value);
	}
	template <typename R = bool> R get_IsMaxGrade() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x134FA90))(this);
	}
	template <typename R = void> R set_IsMaxGrade(bool value) {
		return ((R (*)(RuneItem*, bool))(Il2CppBase() + 0x134FA98))(this, value);
	}
	template <typename R = uintptr_t> R get_RectTransform() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x134FAA4))(this);
	}
	template <typename R = void> R set_RectTransform(uintptr_t value) {
		return ((R (*)(RuneItem*, uintptr_t))(Il2CppBase() + 0x134FAAC))(this, value);
	}
	template <typename R = Il2CppString*> R get_RuneBlueprint() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x134FAB4))(this);
	}
	template <typename R = int32_t> R get_RuneCount() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x134FABC))(this);
	}
	template <typename R = void> R add_OnSlotEmpty(Action1RuneItem*>* value) {
		return ((R (*)(RuneItem*, Action1RuneItem*>*))(Il2CppBase() + 0x134FAC4))(this, value);
	}
	template <typename R = void> R remove_OnSlotEmpty(Action1RuneItem*>* value) {
		return ((R (*)(RuneItem*, Action1RuneItem*>*))(Il2CppBase() + 0x134FB64))(this, value);
	}
	template <typename R = void> R add_OnSlotNotEmpty(Action1RuneItem*>* value) {
		return ((R (*)(RuneItem*, Action1RuneItem*>*))(Il2CppBase() + 0x134FC04))(this, value);
	}
	template <typename R = void> R remove_OnSlotNotEmpty(Action1RuneItem*>* value) {
		return ((R (*)(RuneItem*, Action1RuneItem*>*))(Il2CppBase() + 0x134FCA4))(this, value);
	}
	template <typename R = void> R add_OnSlotChanged(Action1RuneItem*>* value) {
		return ((R (*)(RuneItem*, Action1RuneItem*>*))(Il2CppBase() + 0x134FD44))(this, value);
	}
	template <typename R = void> R remove_OnSlotChanged(Action1RuneItem*>* value) {
		return ((R (*)(RuneItem*, Action1RuneItem*>*))(Il2CppBase() + 0x134FDE4))(this, value);
	}
	template <typename R = void> R Bind(IRuneInventoryPanel* runePanel, GameEntity* entity, int32_t index, InventorySlot* slot, Il2CppString* blueprint) {
		return ((R (*)(RuneItem*, IRuneInventoryPanel*, GameEntity*, int32_t, InventorySlot*, Il2CppString*))(Il2CppBase() + 0x134FE84))(this, runePanel, entity, index, slot, blueprint);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x13501FC))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x135020C))(this);
	}
	template <typename R = void> R AddListeners() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x135021C))(this);
	}
	template <typename R = void> R RemoveListeners() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x135043C))(this);
	}
	template <typename R = void> R SetIcon(ItemEntity* item) {
		return ((R (*)(RuneItem*, ItemEntity*))(Il2CppBase() + 0x1350658))(this, item);
	}
	template <typename R = void> R InitItem() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x1350770))(this);
	}
	template <typename R = bool> R get_NeedShowGrade() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x1350D28))(this);
	}
	template <typename R = void> R Hide() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x1350BEC))(this);
	}
	template <typename R = void> R Show() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x1350B24))(this);
	}
	template <typename R = void> R OnClick() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x1350D30))(this);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(RuneItem*, uintptr_t))(Il2CppBase() + 0x1350D74))(this, eventData);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(RuneItem*, uintptr_t))(Il2CppBase() + 0x1350F80))(this, eventData);
	}
	template <typename R = void> R OnBeginDrag(uintptr_t eventData) {
		return ((R (*)(RuneItem*, uintptr_t))(Il2CppBase() + 0x1351040))(this, eventData);
	}
	template <typename R = void> R OnDrag(uintptr_t eventData) {
		return ((R (*)(RuneItem*, uintptr_t))(Il2CppBase() + 0x1351360))(this, eventData);
	}
	template <typename R = void> R OnEndDrag(uintptr_t eventData) {
		return ((R (*)(RuneItem*, uintptr_t))(Il2CppBase() + 0x1351438))(this, eventData);
	}
	template <typename R = void> R OnDrop(uintptr_t eventData) {
		return ((R (*)(RuneItem*, uintptr_t))(Il2CppBase() + 0x13515F8))(this, eventData);
	}
	template <typename R = void> R Lock(bool visual) {
		return ((R (*)(RuneItem*, bool))(Il2CppBase() + 0x13516B4))(this, visual);
	}
	template <typename R = void> R Unlock(bool visual) {
		return ((R (*)(RuneItem*, bool))(Il2CppBase() + 0x13517A0))(this, visual);
	}
	template <typename R = void> R ChangeSlot(InventorySlot* slot) {
		return ((R (*)(RuneItem*, InventorySlot*))(Il2CppBase() + 0x135187C))(this, slot);
	}
	template <typename R = void> R ChangeCountText(int32_t value, uintptr_t color) {
		return ((R (*)(RuneItem*, int32_t, uintptr_t))(Il2CppBase() + 0x13518C8))(this, value, color);
	}
	template <typename R = uintptr_t> R GetCountTextColor() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x13519A8))(this);
	}
	template <typename R = void> R SlotChanged() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x13519CC))(this);
	}
	template <typename R = void> R SlotNotEmpty() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x1351A2C))(this);
	}
	template <typename R = void> R SlotEmpty() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x1351A8C))(this);
	}
	template <typename R = void> R Clear() {
		return ((R (*)(RuneItem*))(Il2CppBase() + 0x1351AEC))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(RuneItem*, float))(Il2CppBase() + 0x1351B3C))(this, deltaTime);
	}
	template <typename R = void> R OnUpdateInput(float deltaTime) {
		return ((R (*)(RuneItem*, float))(Il2CppBase() + 0x1352604))(this, deltaTime);
	}
	template <typename R = void> R CheckRuneItemState(bool isAnyItemDraggingNow) {
		return ((R (*)(RuneItem*, bool))(Il2CppBase() + 0x1351FC4))(this, isAnyItemDraggingNow);
	}

};

