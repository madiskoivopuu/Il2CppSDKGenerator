#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuneItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneItem"));
	}

	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _gradeText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _countText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& GrayMaterial() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _rarityViews() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _canvasGroup() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _minCountToView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& _sqrDistanceToGlow() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& Permanent() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = RuneItemState*> T& RuneItemState() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& DragEnable() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& ScrollEnable() {
		return *(T*)((uintptr_t)this + 0x5D);
	}
	template <typename T = bool> T& IsScrolling() {
		return *(T*)((uintptr_t)this + 0x5E);
	}
	template <typename T = bool> T& Locked() {
		return *(T*)((uintptr_t)this + 0x5F);
	}
	template <typename T = bool> T& IsRuneItem() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& IsMaxGrade() {
		return *(T*)((uintptr_t)this + 0x61);
	}
	template <typename T = uintptr_t> T& RectTransform() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& _index() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = InventorySlot*> T& _slot() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& _parentId() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& _parentRuneInventoryId() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& _runeBlueprint() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& _runeBaseBlueprint() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& _grade() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& _count() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = IItemEventHandler1RuneItem*>*> T& _handler() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = IUIWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = IRuneInventoryPanel*> T& _runePanel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = RuneItemEffect*> T& _runeItemEffect() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _clickStartTime() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _doubleClickThreshold() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& _clickCount() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& _isPressed() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& _isShowed() {
		return *(T*)((uintptr_t)this + 0xD5);
	}
	template <typename T = bool> T& _isDragged() {
		return *(T*)((uintptr_t)this + 0xD6);
	}
	template <typename T = bool> T& _forceUpdate() {
		return *(T*)((uintptr_t)this + 0xD7);
	}
	template <typename T = bool> T& _isInited() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& _startDistanceToMerge() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& _startDistanceToMergeRevert() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Action1RuneItem*>*> T& OnSlotEmpty() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Action1RuneItem*>*> T& OnSlotNotEmpty() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Action1RuneItem*>*> T& OnSlotChanged() {
		return *(T*)((uintptr_t)this + 0xF8);
	}

	template <typename T = bool> T get_Permanent() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x134F660))(this);
	}
	template <typename T = void> T set_Permanent(bool value) {
		return ((T (*)(RuneItem*, bool))(Il2CppBase() + 0x134F668))(this, value);
	}
	template <typename T = ItemEntity*> T get_Item() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x134F674))(this);
	}
	template <typename T = InventorySlotEntity*> T get_SlotEntity() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x134F778))(this);
	}
	template <typename T = InventorySlot*> T get_Slot() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x134F87C))(this);
	}
	template <typename T = GameEntity*> T get_ParentEntity() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x134F884))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x134F980))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(RuneItem*, int32_t))(Il2CppBase() + 0x134F988))(this, value);
	}
	template <typename T = int32_t> T get_Index() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x134F990))(this);
	}
	template <typename T = bool> T get_IsEmptySlot() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x134F998))(this);
	}
	template <typename T = RuneItemState*> T get_RuneItemState() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x134FA1C))(this);
	}
	template <typename T = void> T set_RuneItemState(RuneItemState* value) {
		return ((T (*)(RuneItem*, RuneItemState*))(Il2CppBase() + 0x134FA24))(this, value);
	}
	template <typename T = bool> T get_DragEnable() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x134FA2C))(this);
	}
	template <typename T = void> T set_DragEnable(bool value) {
		return ((T (*)(RuneItem*, bool))(Il2CppBase() + 0x134FA34))(this, value);
	}
	template <typename T = bool> T get_ScrollEnable() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x134FA40))(this);
	}
	template <typename T = void> T set_ScrollEnable(bool value) {
		return ((T (*)(RuneItem*, bool))(Il2CppBase() + 0x134FA48))(this, value);
	}
	template <typename T = bool> T get_IsScrolling() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x134FA54))(this);
	}
	template <typename T = void> T set_IsScrolling(bool value) {
		return ((T (*)(RuneItem*, bool))(Il2CppBase() + 0x134FA5C))(this, value);
	}
	template <typename T = bool> T get_Locked() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x134FA68))(this);
	}
	template <typename T = void> T set_Locked(bool value) {
		return ((T (*)(RuneItem*, bool))(Il2CppBase() + 0x134FA70))(this, value);
	}
	template <typename T = bool> T get_IsRuneItem() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x134FA7C))(this);
	}
	template <typename T = void> T set_IsRuneItem(bool value) {
		return ((T (*)(RuneItem*, bool))(Il2CppBase() + 0x134FA84))(this, value);
	}
	template <typename T = bool> T get_IsMaxGrade() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x134FA90))(this);
	}
	template <typename T = void> T set_IsMaxGrade(bool value) {
		return ((T (*)(RuneItem*, bool))(Il2CppBase() + 0x134FA98))(this, value);
	}
	template <typename T = uintptr_t> T get_RectTransform() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x134FAA4))(this);
	}
	template <typename T = void> T set_RectTransform(uintptr_t value) {
		return ((T (*)(RuneItem*, uintptr_t))(Il2CppBase() + 0x134FAAC))(this, value);
	}
	template <typename T = Il2CppString*> T get_RuneBlueprint() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x134FAB4))(this);
	}
	template <typename T = int32_t> T get_RuneCount() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x134FABC))(this);
	}
	template <typename T = void> T add_OnSlotEmpty(Action1RuneItem*>* value) {
		return ((T (*)(RuneItem*, Action1RuneItem*>*))(Il2CppBase() + 0x134FAC4))(this, value);
	}
	template <typename T = void> T remove_OnSlotEmpty(Action1RuneItem*>* value) {
		return ((T (*)(RuneItem*, Action1RuneItem*>*))(Il2CppBase() + 0x134FB64))(this, value);
	}
	template <typename T = void> T add_OnSlotNotEmpty(Action1RuneItem*>* value) {
		return ((T (*)(RuneItem*, Action1RuneItem*>*))(Il2CppBase() + 0x134FC04))(this, value);
	}
	template <typename T = void> T remove_OnSlotNotEmpty(Action1RuneItem*>* value) {
		return ((T (*)(RuneItem*, Action1RuneItem*>*))(Il2CppBase() + 0x134FCA4))(this, value);
	}
	template <typename T = void> T add_OnSlotChanged(Action1RuneItem*>* value) {
		return ((T (*)(RuneItem*, Action1RuneItem*>*))(Il2CppBase() + 0x134FD44))(this, value);
	}
	template <typename T = void> T remove_OnSlotChanged(Action1RuneItem*>* value) {
		return ((T (*)(RuneItem*, Action1RuneItem*>*))(Il2CppBase() + 0x134FDE4))(this, value);
	}
	template <typename T = void> T Bind(IRuneInventoryPanel* runePanel, GameEntity* entity, int32_t index, InventorySlot* slot, Il2CppString* blueprint) {
		return ((T (*)(RuneItem*, IRuneInventoryPanel*, GameEntity*, int32_t, InventorySlot*, Il2CppString*))(Il2CppBase() + 0x134FE84))(this, runePanel, entity, index, slot, blueprint);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x13501FC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x135020C))(this);
	}
	template <typename T = void> T AddListeners() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x135021C))(this);
	}
	template <typename T = void> T RemoveListeners() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x135043C))(this);
	}
	template <typename T = void> T SetIcon(ItemEntity* item) {
		return ((T (*)(RuneItem*, ItemEntity*))(Il2CppBase() + 0x1350658))(this, item);
	}
	template <typename T = void> T InitItem() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x1350770))(this);
	}
	template <typename T = bool> T get_NeedShowGrade() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x1350D28))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x1350BEC))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x1350B24))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x1350D30))(this);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(RuneItem*, uintptr_t))(Il2CppBase() + 0x1350D74))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(RuneItem*, uintptr_t))(Il2CppBase() + 0x1350F80))(this, eventData);
	}
	template <typename T = void> T OnBeginDrag(uintptr_t eventData) {
		return ((T (*)(RuneItem*, uintptr_t))(Il2CppBase() + 0x1351040))(this, eventData);
	}
	template <typename T = void> T OnDrag(uintptr_t eventData) {
		return ((T (*)(RuneItem*, uintptr_t))(Il2CppBase() + 0x1351360))(this, eventData);
	}
	template <typename T = void> T OnEndDrag(uintptr_t eventData) {
		return ((T (*)(RuneItem*, uintptr_t))(Il2CppBase() + 0x1351438))(this, eventData);
	}
	template <typename T = void> T OnDrop(uintptr_t eventData) {
		return ((T (*)(RuneItem*, uintptr_t))(Il2CppBase() + 0x13515F8))(this, eventData);
	}
	template <typename T = void> T Lock(bool visual) {
		return ((T (*)(RuneItem*, bool))(Il2CppBase() + 0x13516B4))(this, visual);
	}
	template <typename T = void> T Unlock(bool visual) {
		return ((T (*)(RuneItem*, bool))(Il2CppBase() + 0x13517A0))(this, visual);
	}
	template <typename T = void> T ChangeSlot(InventorySlot* slot) {
		return ((T (*)(RuneItem*, InventorySlot*))(Il2CppBase() + 0x135187C))(this, slot);
	}
	template <typename T = void> T ChangeCountText(int32_t value, uintptr_t color) {
		return ((T (*)(RuneItem*, int32_t, uintptr_t))(Il2CppBase() + 0x13518C8))(this, value, color);
	}
	template <typename T = uintptr_t> T GetCountTextColor() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x13519A8))(this);
	}
	template <typename T = void> T SlotChanged() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x13519CC))(this);
	}
	template <typename T = void> T SlotNotEmpty() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x1351A2C))(this);
	}
	template <typename T = void> T SlotEmpty() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x1351A8C))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(RuneItem*))(Il2CppBase() + 0x1351AEC))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(RuneItem*, float))(Il2CppBase() + 0x1351B3C))(this, deltaTime);
	}
	template <typename T = void> T OnUpdateInput(float deltaTime) {
		return ((T (*)(RuneItem*, float))(Il2CppBase() + 0x1352604))(this, deltaTime);
	}
	template <typename T = void> T CheckRuneItemState(bool isAnyItemDraggingNow) {
		return ((T (*)(RuneItem*, bool))(Il2CppBase() + 0x1351FC4))(this, isAnyItemDraggingNow);
	}

};

