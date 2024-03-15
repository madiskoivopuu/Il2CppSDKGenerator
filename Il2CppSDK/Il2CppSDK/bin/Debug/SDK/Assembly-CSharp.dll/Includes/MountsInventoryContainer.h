#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ClickableItemsContainer.h" 

class MountsInventoryContainer : public ClickableItemsContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountsInventoryContainer"));
	}

	 Il2CppList<InventorySlot*>*& _inventorySlots() {
		return *(Il2CppList<InventorySlot*>**)((uintptr_t)this + 0x48);
	}
	template <typename R = InventorySlot*> R& _inventorySlotsPrefab() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _contentTransform() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = MountItem*> R& _mountItemPrefab() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _deleteButton() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& _sortButton() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& _addSlotsButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _iconSortButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _inventoryScroll() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _slotsCountText() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = IMountsInventoryWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = int32_t> R& _parentId() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = int32_t> R& _mountInventoryId() {
		return *(R*)((uintptr_t)this + 0xA4);
	}
	 Il2CppList<IInventoryItem*>*& toSort() {
		return *(Il2CppList<IInventoryItem*>**)((uintptr_t)this + 0xA8);
	}
	 Il2CppList<IInventoryItem*>*& sorted() {
		return *(Il2CppList<IInventoryItem*>**)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& _buttonSortUp() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& _buttonSortDown() {
		return *(R*)((uintptr_t)this + 0xC4);
	}
	template <typename R = bool> R& _isSortUp() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = bool> R& _isSlotsAdding() {
		return *(R*)((uintptr_t)this + 0xD1);
	}
	template <typename R = int32_t> R& _currentGrade() {
		return *(R*)((uintptr_t)this + 0xD4);
	}
	template <typename R = int32_t> R& _newSlotCount() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = int32_t> R& _mountCount() {
		return *(R*)((uintptr_t)this + 0xDC);
	}
	template <typename R = int32_t> R& _currentSlotsCount() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	 Il2CppDictionary<int32_t, IInventoryItem*>*& items() {
		return *(Il2CppDictionary<int32_t, IInventoryItem*>**)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& OnDeleteButtonClick() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	 Action1<InventorySlot*>*& OnSortButtonClick() {
		return *(Action1<InventorySlot*>**)((uintptr_t)this + 0xF8);
	}

	template <typename R = uintptr_t> R get_DeleteButton() {
		return ((R (*)(MountsInventoryContainer*))(Il2CppBase() + 0x154CCD0))(this);
	}
	 Il2CppDictionary<int32_t, IInventoryItem*>* get_Items() {
		return ((Il2CppDictionary<int32_t, IInventoryItem*>* (*)(MountsInventoryContainer*))(Il2CppBase() + 0x154CCD8))(this);
	}
	template <typename R = int32_t> R get_ArmingId() {
		return ((R (*)(MountsInventoryContainer*))(Il2CppBase() + 0x154CCE0))(this);
	}
	template <typename R = IInventoryItem*> R get_ArmingItem() {
		return ((R (*)(MountsInventoryContainer*))(Il2CppBase() + 0x15465D0))(this);
	}
	template <typename R = void> R add_OnDeleteButtonClick(uintptr_t value) {
		return ((R (*)(MountsInventoryContainer*, uintptr_t))(Il2CppBase() + 0x154CEE0))(this, value);
	}
	template <typename R = void> R remove_OnDeleteButtonClick(uintptr_t value) {
		return ((R (*)(MountsInventoryContainer*, uintptr_t))(Il2CppBase() + 0x154CF80))(this, value);
	}
	template <typename R = void> R add_OnSortButtonClick(Action1<InventorySlot*>* value) {
		return ((R (*)(MountsInventoryContainer*, Action1<InventorySlot*>*))(Il2CppBase() + 0x154D020))(this, value);
	}
	template <typename R = void> R remove_OnSortButtonClick(Action1<InventorySlot*>* value) {
		return ((R (*)(MountsInventoryContainer*, Action1<InventorySlot*>*))(Il2CppBase() + 0x154D0C0))(this, value);
	}
	template <typename R = void> R Bind(IMountsInventoryWindow* window, GameEntity* parentEntity, uintptr_t onDelete, Action1<InventorySlot*>* onSort) {
		return ((R (*)(MountsInventoryContainer*, IMountsInventoryWindow*, GameEntity*, uintptr_t, Action1<InventorySlot*>*))(Il2CppBase() + 0x154D160))(this, window, parentEntity, onDelete, onSort);
	}
	template <typename R = void> R UpdateCounter() {
		return ((R (*)(MountsInventoryContainer*))(Il2CppBase() + 0x154E2C8))(this);
	}
	template <typename R = void> R AddSlotsItemIfNeed(int32_t currentGrade, bool reinit) {
		return ((R (*)(MountsInventoryContainer*, int32_t, bool))(Il2CppBase() + 0x154DEE4))(this, currentGrade, reinit);
	}
	template <typename R = void> R Delete() {
		return ((R (*)(MountsInventoryContainer*))(Il2CppBase() + 0x154E4B4))(this);
	}
	template <typename R = void> R Sort() {
		return ((R (*)(MountsInventoryContainer*))(Il2CppBase() + 0x154E4C8))(this);
	}
	template <typename R = void> R OnArmingChanged() {
		return ((R (*)(MountsInventoryContainer*))(Il2CppBase() + 0x154F054))(this);
	}
	template <typename R = void> R AddSlots() {
		return ((R (*)(MountsInventoryContainer*))(Il2CppBase() + 0x154F128))(this);
	}
	template <typename R = IInventoryItem*> R GetItemById(int32_t id) {
		return ((R (*)(MountsInventoryContainer*, int32_t))(Il2CppBase() + 0x154F878))(this, id);
	}
	 ValueTuple2<bool, IInventoryItem*>* IsInventoryEmpty() {
		return ((ValueTuple2<bool, IInventoryItem*>* (*)(MountsInventoryContainer*))(Il2CppBase() + 0x154F91C))(this);
	}
	template <typename R = void> R OnBeginScrollingEvent(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(MountsInventoryContainer*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x154FB80))(this, item, eventData);
	}
	template <typename R = void> R OnScrollingEvent(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(MountsInventoryContainer*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x154FBA8))(this, item, eventData);
	}
	template <typename R = void> R OnEndScrollingEvent(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(MountsInventoryContainer*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x154FBD0))(this, item, eventData);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(MountsInventoryContainer*, float))(Il2CppBase() + 0x154FBF8))(this, deltaTime);
	}

};

