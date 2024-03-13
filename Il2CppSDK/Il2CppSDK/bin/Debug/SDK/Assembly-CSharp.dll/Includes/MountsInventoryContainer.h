#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ClickableItemsContainer.h" 

class MountsInventoryContainer : public ClickableItemsContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountsInventoryContainer"));
	}

	template <typename T = Il2CppList<InventorySlot*>*> T& _inventorySlots() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = InventorySlot*> T& _inventorySlotsPrefab() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _contentTransform() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = MountItem*> T& _mountItemPrefab() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _deleteButton() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _sortButton() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _addSlotsButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _iconSortButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _inventoryScroll() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _slotsCountText() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = IMountsInventoryWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& _parentId() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& _mountInventoryId() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppList<IInventoryItem*>*> T& toSort() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppList<IInventoryItem*>*> T& sorted() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _buttonSortUp() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _buttonSortDown() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& _isSortUp() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& _isSlotsAdding() {
		return *(T*)((uintptr_t)this + 0xD1);
	}
	template <typename T = int32_t> T& _currentGrade() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& _newSlotCount() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& _mountCount() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = int32_t> T& _currentSlotsCount() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppDictionary<int32_t, IInventoryItem*>*> T& items() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& OnDeleteButtonClick() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Action1InventorySlot*>*> T& OnSortButtonClick() {
		return *(T*)((uintptr_t)this + 0xF8);
	}

	template <typename T = uintptr_t> T get_DeleteButton() {
		return ((T (*)(MountsInventoryContainer*))(Il2CppBase() + 0x154CCD0))(this);
	}
	template <typename T = Il2CppDictionary<int32_t, IInventoryItem*>*> T get_Items() {
		return ((T (*)(MountsInventoryContainer*))(Il2CppBase() + 0x154CCD8))(this);
	}
	template <typename T = int32_t> T get_ArmingId() {
		return ((T (*)(MountsInventoryContainer*))(Il2CppBase() + 0x154CCE0))(this);
	}
	template <typename T = IInventoryItem*> T get_ArmingItem() {
		return ((T (*)(MountsInventoryContainer*))(Il2CppBase() + 0x15465D0))(this);
	}
	template <typename T = void> T add_OnDeleteButtonClick(uintptr_t value) {
		return ((T (*)(MountsInventoryContainer*, uintptr_t))(Il2CppBase() + 0x154CEE0))(this, value);
	}
	template <typename T = void> T remove_OnDeleteButtonClick(uintptr_t value) {
		return ((T (*)(MountsInventoryContainer*, uintptr_t))(Il2CppBase() + 0x154CF80))(this, value);
	}
	template <typename T = void> T add_OnSortButtonClick(Action1InventorySlot*>* value) {
		return ((T (*)(MountsInventoryContainer*, Action1InventorySlot*>*))(Il2CppBase() + 0x154D020))(this, value);
	}
	template <typename T = void> T remove_OnSortButtonClick(Action1InventorySlot*>* value) {
		return ((T (*)(MountsInventoryContainer*, Action1InventorySlot*>*))(Il2CppBase() + 0x154D0C0))(this, value);
	}
	template <typename T = void> T Bind(IMountsInventoryWindow* window, GameEntity* parentEntity, uintptr_t onDelete, Action1InventorySlot*>* onSort) {
		return ((T (*)(MountsInventoryContainer*, IMountsInventoryWindow*, GameEntity*, uintptr_t, Action1InventorySlot*>*))(Il2CppBase() + 0x154D160))(this, window, parentEntity, onDelete, onSort);
	}
	template <typename T = void> T UpdateCounter() {
		return ((T (*)(MountsInventoryContainer*))(Il2CppBase() + 0x154E2C8))(this);
	}
	template <typename T = void> T AddSlotsItemIfNeed(int32_t currentGrade, bool reinit) {
		return ((T (*)(MountsInventoryContainer*, int32_t, bool))(Il2CppBase() + 0x154DEE4))(this, currentGrade, reinit);
	}
	template <typename T = void> T Delete() {
		return ((T (*)(MountsInventoryContainer*))(Il2CppBase() + 0x154E4B4))(this);
	}
	template <typename T = void> T Sort() {
		return ((T (*)(MountsInventoryContainer*))(Il2CppBase() + 0x154E4C8))(this);
	}
	template <typename T = void> T OnArmingChanged() {
		return ((T (*)(MountsInventoryContainer*))(Il2CppBase() + 0x154F054))(this);
	}
	template <typename T = void> T AddSlots() {
		return ((T (*)(MountsInventoryContainer*))(Il2CppBase() + 0x154F128))(this);
	}
	template <typename T = IInventoryItem*> T GetItemById(int32_t id) {
		return ((T (*)(MountsInventoryContainer*, int32_t))(Il2CppBase() + 0x154F878))(this, id);
	}
	template <typename T = ValueTuple2bool, IInventoryItem*>*> T IsInventoryEmpty() {
		return ((T (*)(MountsInventoryContainer*))(Il2CppBase() + 0x154F91C))(this);
	}
	template <typename T = void> T OnBeginScrollingEvent(IInventoryItem* item, uintptr_t eventData) {
		return ((T (*)(MountsInventoryContainer*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x154FB80))(this, item, eventData);
	}
	template <typename T = void> T OnScrollingEvent(IInventoryItem* item, uintptr_t eventData) {
		return ((T (*)(MountsInventoryContainer*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x154FBA8))(this, item, eventData);
	}
	template <typename T = void> T OnEndScrollingEvent(IInventoryItem* item, uintptr_t eventData) {
		return ((T (*)(MountsInventoryContainer*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x154FBD0))(this, item, eventData);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(MountsInventoryContainer*, float))(Il2CppBase() + 0x154FBF8))(this, deltaTime);
	}

};

