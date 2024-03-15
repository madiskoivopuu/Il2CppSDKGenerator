#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountItem"));
	}

	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _nameText() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _gradeText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _armingMountCheckmark() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _selectMountCheckmark() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& GrayMaterial() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _canvasGroup() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = bool> R& DragEnable() {
		return *(R*)((uintptr_t)this + 0x54);
	}
	template <typename R = bool> R& ScrollEnable() {
		return *(R*)((uintptr_t)this + 0x55);
	}
	template <typename R = bool> R& IsScrolling() {
		return *(R*)((uintptr_t)this + 0x56);
	}
	template <typename R = bool> R& Locked() {
		return *(R*)((uintptr_t)this + 0x57);
	}
	template <typename R = int32_t> R& _index() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = InventorySlot*> R& _slot() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> R& _parentId() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> R& _parentMountInventoryId() {
		return *(R*)((uintptr_t)this + 0x6C);
	}
	template <typename R = Il2CppString*> R& _mountBlueprint() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = Il2CppString*> R& _mountBaseBlueprint() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = int32_t> R& _grade() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = IItemEventHandler*> R& _handler() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = IMountsInventoryWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _clickStartTime() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = int32_t> R& _clickCount() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = bool> R& _isPressed() {
		return *(R*)((uintptr_t)this + 0xA4);
	}
	template <typename R = bool> R& _isShowed() {
		return *(R*)((uintptr_t)this + 0xA5);
	}
	template <typename R = bool> R& _forceUpdate() {
		return *(R*)((uintptr_t)this + 0xA6);
	}
	 Action1<IInventoryItem*>*& OnArming() {
		return *(Action1<IInventoryItem*>**)((uintptr_t)this + 0xA8);
	}

	template <typename R = bool> R get_IsArimng() {
		return ((R (*)(MountItem*))(Il2CppBase() + 0x154642C))(this);
	}
	template <typename R = ItemEntity*> R get_Item() {
		return ((R (*)(MountItem*))(Il2CppBase() + 0x1546674))(this);
	}
	template <typename R = InventorySlotEntity*> R get_SlotEntity() {
		return ((R (*)(MountItem*))(Il2CppBase() + 0x1546778))(this);
	}
	template <typename R = InventorySlot*> R get_Slot() {
		return ((R (*)(MountItem*))(Il2CppBase() + 0x154687C))(this);
	}
	template <typename R = GameEntity*> R get_ParentEntity() {
		return ((R (*)(MountItem*))(Il2CppBase() + 0x1546884))(this);
	}
	template <typename R = int32_t> R get_Id() {
		return ((R (*)(MountItem*))(Il2CppBase() + 0x1546980))(this);
	}
	template <typename R = void> R set_Id(int32_t value) {
		return ((R (*)(MountItem*, int32_t))(Il2CppBase() + 0x1546988))(this, value);
	}
	template <typename R = int32_t> R get_Index() {
		return ((R (*)(MountItem*))(Il2CppBase() + 0x1546990))(this);
	}
	template <typename R = bool> R get_IsEmptySlot() {
		return ((R (*)(MountItem*))(Il2CppBase() + 0x1546998))(this);
	}
	template <typename R = bool> R get_DragEnable() {
		return ((R (*)(MountItem*))(Il2CppBase() + 0x1546A10))(this);
	}
	template <typename R = void> R set_DragEnable(bool value) {
		return ((R (*)(MountItem*, bool))(Il2CppBase() + 0x1546A18))(this, value);
	}
	template <typename R = bool> R get_ScrollEnable() {
		return ((R (*)(MountItem*))(Il2CppBase() + 0x1546A24))(this);
	}
	template <typename R = void> R set_ScrollEnable(bool value) {
		return ((R (*)(MountItem*, bool))(Il2CppBase() + 0x1546A2C))(this, value);
	}
	template <typename R = bool> R get_IsScrolling() {
		return ((R (*)(MountItem*))(Il2CppBase() + 0x1546A38))(this);
	}
	template <typename R = void> R set_IsScrolling(bool value) {
		return ((R (*)(MountItem*, bool))(Il2CppBase() + 0x1546A40))(this, value);
	}
	template <typename R = bool> R get_Locked() {
		return ((R (*)(MountItem*))(Il2CppBase() + 0x1546A4C))(this);
	}
	template <typename R = void> R set_Locked(bool value) {
		return ((R (*)(MountItem*, bool))(Il2CppBase() + 0x1546A54))(this, value);
	}
	template <typename R = bool> R get_IsChecked() {
		return ((R (*)(MountItem*))(Il2CppBase() + 0x1546A60))(this);
	}
	template <typename R = Il2CppString*> R get_MountBlueprint() {
		return ((R (*)(MountItem*))(Il2CppBase() + 0x1546A7C))(this);
	}
	template <typename R = void> R add_OnArming(Action1<IInventoryItem*>* value) {
		return ((R (*)(MountItem*, Action1<IInventoryItem*>*))(Il2CppBase() + 0x1546A84))(this, value);
	}
	template <typename R = void> R remove_OnArming(Action1<IInventoryItem*>* value) {
		return ((R (*)(MountItem*, Action1<IInventoryItem*>*))(Il2CppBase() + 0x1546B24))(this, value);
	}
	template <typename R = void> R Bind(IMountsInventoryWindow* window, GameEntity* entity, int32_t index, InventorySlot* slot, Action1<IInventoryItem*>* onArming) {
		return ((R (*)(MountItem*, IMountsInventoryWindow*, GameEntity*, int32_t, InventorySlot*, Action1<IInventoryItem*>*))(Il2CppBase() + 0x1546BC4))(this, window, entity, index, slot, onArming);
	}
	template <typename R = void> R InitItem() {
		return ((R (*)(MountItem*))(Il2CppBase() + 0x1546F40))(this);
	}
	template <typename R = void> R Hide() {
		return ((R (*)(MountItem*))(Il2CppBase() + 0x1547198))(this);
	}
	template <typename R = void> R Show() {
		return ((R (*)(MountItem*))(Il2CppBase() + 0x1547248))(this);
	}
	template <typename R = void> R OnClick() {
		return ((R (*)(MountItem*))(Il2CppBase() + 0x15472F0))(this);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData) {
		return ((R (*)(MountItem*, uintptr_t))(Il2CppBase() + 0x1547334))(this, eventData);
	}
	template <typename R = void> R OnPointerUp(uintptr_t eventData) {
		return ((R (*)(MountItem*, uintptr_t))(Il2CppBase() + 0x1547520))(this, eventData);
	}
	template <typename R = void> R OnBeginDrag(uintptr_t eventData) {
		return ((R (*)(MountItem*, uintptr_t))(Il2CppBase() + 0x15475E0))(this, eventData);
	}
	template <typename R = void> R OnDrag(uintptr_t eventData) {
		return ((R (*)(MountItem*, uintptr_t))(Il2CppBase() + 0x154786C))(this, eventData);
	}
	template <typename R = void> R OnEndDrag(uintptr_t eventData) {
		return ((R (*)(MountItem*, uintptr_t))(Il2CppBase() + 0x154793C))(this, eventData);
	}
	template <typename R = void> R OnDrop(uintptr_t eventData) {
		return ((R (*)(MountItem*, uintptr_t))(Il2CppBase() + 0x1547AD0))(this, eventData);
	}
	template <typename R = void> R Lock(bool visual) {
		return ((R (*)(MountItem*, bool))(Il2CppBase() + 0x1547B8C))(this, visual);
	}
	template <typename R = void> R Unlock(bool visual) {
		return ((R (*)(MountItem*, bool))(Il2CppBase() + 0x1547C58))(this, visual);
	}
	template <typename R = void> R ChangeSlot(InventorySlot* slot) {
		return ((R (*)(MountItem*, InventorySlot*))(Il2CppBase() + 0x1547D20))(this, slot);
	}
	template <typename R = void> R OnUpdateInput(float deltaTime) {
		return ((R (*)(MountItem*, float))(Il2CppBase() + 0x1547D6C))(this, deltaTime);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(MountItem*, float))(Il2CppBase() + 0x1547F34))(this, deltaTime);
	}
	template <typename R = void> R Check(bool isOn) {
		return ((R (*)(MountItem*, bool))(Il2CppBase() + 0x1548234))(this, isOn);
	}

};

