#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountItem"));
	}

	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _nameText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _gradeText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _armingMountCheckmark() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _selectMountCheckmark() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& GrayMaterial() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _canvasGroup() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& DragEnable() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& ScrollEnable() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = bool> T& IsScrolling() {
		return *(T*)((uintptr_t)this + 0x56);
	}
	template <typename T = bool> T& Locked() {
		return *(T*)((uintptr_t)this + 0x57);
	}
	template <typename T = int32_t> T& _index() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = InventorySlot*> T& _slot() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _parentId() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& _parentMountInventoryId() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppString*> T& _mountBlueprint() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& _mountBaseBlueprint() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& _grade() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = IItemEventHandler*> T& _handler() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = IMountsInventoryWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _clickStartTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& _clickCount() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& _isPressed() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& _isShowed() {
		return *(T*)((uintptr_t)this + 0xA5);
	}
	template <typename T = bool> T& _forceUpdate() {
		return *(T*)((uintptr_t)this + 0xA6);
	}
	template <typename T = Action1IInventoryItem*>*> T& OnArming() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = bool> T get_IsArimng() {
		return ((T (*)(MountItem*))(Il2CppBase() + 0x154642C))(this);
	}
	template <typename T = ItemEntity*> T get_Item() {
		return ((T (*)(MountItem*))(Il2CppBase() + 0x1546674))(this);
	}
	template <typename T = InventorySlotEntity*> T get_SlotEntity() {
		return ((T (*)(MountItem*))(Il2CppBase() + 0x1546778))(this);
	}
	template <typename T = InventorySlot*> T get_Slot() {
		return ((T (*)(MountItem*))(Il2CppBase() + 0x154687C))(this);
	}
	template <typename T = GameEntity*> T get_ParentEntity() {
		return ((T (*)(MountItem*))(Il2CppBase() + 0x1546884))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(MountItem*))(Il2CppBase() + 0x1546980))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(MountItem*, int32_t))(Il2CppBase() + 0x1546988))(this, value);
	}
	template <typename T = int32_t> T get_Index() {
		return ((T (*)(MountItem*))(Il2CppBase() + 0x1546990))(this);
	}
	template <typename T = bool> T get_IsEmptySlot() {
		return ((T (*)(MountItem*))(Il2CppBase() + 0x1546998))(this);
	}
	template <typename T = bool> T get_DragEnable() {
		return ((T (*)(MountItem*))(Il2CppBase() + 0x1546A10))(this);
	}
	template <typename T = void> T set_DragEnable(bool value) {
		return ((T (*)(MountItem*, bool))(Il2CppBase() + 0x1546A18))(this, value);
	}
	template <typename T = bool> T get_ScrollEnable() {
		return ((T (*)(MountItem*))(Il2CppBase() + 0x1546A24))(this);
	}
	template <typename T = void> T set_ScrollEnable(bool value) {
		return ((T (*)(MountItem*, bool))(Il2CppBase() + 0x1546A2C))(this, value);
	}
	template <typename T = bool> T get_IsScrolling() {
		return ((T (*)(MountItem*))(Il2CppBase() + 0x1546A38))(this);
	}
	template <typename T = void> T set_IsScrolling(bool value) {
		return ((T (*)(MountItem*, bool))(Il2CppBase() + 0x1546A40))(this, value);
	}
	template <typename T = bool> T get_Locked() {
		return ((T (*)(MountItem*))(Il2CppBase() + 0x1546A4C))(this);
	}
	template <typename T = void> T set_Locked(bool value) {
		return ((T (*)(MountItem*, bool))(Il2CppBase() + 0x1546A54))(this, value);
	}
	template <typename T = bool> T get_IsChecked() {
		return ((T (*)(MountItem*))(Il2CppBase() + 0x1546A60))(this);
	}
	template <typename T = Il2CppString*> T get_MountBlueprint() {
		return ((T (*)(MountItem*))(Il2CppBase() + 0x1546A7C))(this);
	}
	template <typename T = void> T add_OnArming(Action1IInventoryItem*>* value) {
		return ((T (*)(MountItem*, Action1IInventoryItem*>*))(Il2CppBase() + 0x1546A84))(this, value);
	}
	template <typename T = void> T remove_OnArming(Action1IInventoryItem*>* value) {
		return ((T (*)(MountItem*, Action1IInventoryItem*>*))(Il2CppBase() + 0x1546B24))(this, value);
	}
	template <typename T = void> T Bind(IMountsInventoryWindow* window, GameEntity* entity, int32_t index, InventorySlot* slot, Action1IInventoryItem*>* onArming) {
		return ((T (*)(MountItem*, IMountsInventoryWindow*, GameEntity*, int32_t, InventorySlot*, Action1IInventoryItem*>*))(Il2CppBase() + 0x1546BC4))(this, window, entity, index, slot, onArming);
	}
	template <typename T = void> T InitItem() {
		return ((T (*)(MountItem*))(Il2CppBase() + 0x1546F40))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(MountItem*))(Il2CppBase() + 0x1547198))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(MountItem*))(Il2CppBase() + 0x1547248))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(MountItem*))(Il2CppBase() + 0x15472F0))(this);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(MountItem*, uintptr_t))(Il2CppBase() + 0x1547334))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(MountItem*, uintptr_t))(Il2CppBase() + 0x1547520))(this, eventData);
	}
	template <typename T = void> T OnBeginDrag(uintptr_t eventData) {
		return ((T (*)(MountItem*, uintptr_t))(Il2CppBase() + 0x15475E0))(this, eventData);
	}
	template <typename T = void> T OnDrag(uintptr_t eventData) {
		return ((T (*)(MountItem*, uintptr_t))(Il2CppBase() + 0x154786C))(this, eventData);
	}
	template <typename T = void> T OnEndDrag(uintptr_t eventData) {
		return ((T (*)(MountItem*, uintptr_t))(Il2CppBase() + 0x154793C))(this, eventData);
	}
	template <typename T = void> T OnDrop(uintptr_t eventData) {
		return ((T (*)(MountItem*, uintptr_t))(Il2CppBase() + 0x1547AD0))(this, eventData);
	}
	template <typename T = void> T Lock(bool visual) {
		return ((T (*)(MountItem*, bool))(Il2CppBase() + 0x1547B8C))(this, visual);
	}
	template <typename T = void> T Unlock(bool visual) {
		return ((T (*)(MountItem*, bool))(Il2CppBase() + 0x1547C58))(this, visual);
	}
	template <typename T = void> T ChangeSlot(InventorySlot* slot) {
		return ((T (*)(MountItem*, InventorySlot*))(Il2CppBase() + 0x1547D20))(this, slot);
	}
	template <typename T = void> T OnUpdateInput(float deltaTime) {
		return ((T (*)(MountItem*, float))(Il2CppBase() + 0x1547D6C))(this, deltaTime);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(MountItem*, float))(Il2CppBase() + 0x1547F34))(this, deltaTime);
	}
	template <typename T = void> T Check(bool isOn) {
		return ((T (*)(MountItem*, bool))(Il2CppBase() + 0x1548234))(this, isOn);
	}

};

