#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ClickableItemsContainer.h" 

class PetsInventoryContainer : public ClickableItemsContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetsInventoryContainer"));
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
	template <typename R = PetItem*> R& _petItemPrefab() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _sortButton() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& _inventoryScroll() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = bool> R& _showNew() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = IPetsInventoryWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = int32_t> R& _parentId() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = int32_t> R& _petInventoryId() {
		return *(R*)((uintptr_t)this + 0x8C);
	}
	 Il2CppList<PetItem*>*& toSort() {
		return *(Il2CppList<PetItem*>**)((uintptr_t)this + 0x90);
	}
	 Il2CppList<PetItem*>*& sorted() {
		return *(Il2CppList<PetItem*>**)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _buttonSortUp() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _buttonSortDown() {
		return *(R*)((uintptr_t)this + 0xAC);
	}
	template <typename R = bool> R& _isSortUp() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = int32_t> R& _petCount() {
		return *(R*)((uintptr_t)this + 0xBC);
	}
	 Il2CppDictionary<int32_t, PetItem*>*& items() {
		return *(Il2CppDictionary<int32_t, PetItem*>**)((uintptr_t)this + 0xC0);
	}
	 Action1<InventorySlot*>*& OnSortButtonClick() {
		return *(Action1<InventorySlot*>**)((uintptr_t)this + 0xC8);
	}

	 Il2CppDictionary<int32_t, PetItem*>* get_Items() {
		return ((Il2CppDictionary<int32_t, PetItem*>* (*)(PetsInventoryContainer*))(Il2CppBase() + 0x16F24E8))(this);
	}
	template <typename R = int32_t> R get_ArmingId() {
		return ((R (*)(PetsInventoryContainer*))(Il2CppBase() + 0x16F24F0))(this);
	}
	template <typename R = IInventoryItem*> R get_ArmingItem() {
		return ((R (*)(PetsInventoryContainer*))(Il2CppBase() + 0x16EE91C))(this);
	}
	template <typename R = void> R add_OnSortButtonClick(Action1<InventorySlot*>* value) {
		return ((R (*)(PetsInventoryContainer*, Action1<InventorySlot*>*))(Il2CppBase() + 0x16F26F0))(this, value);
	}
	template <typename R = void> R remove_OnSortButtonClick(Action1<InventorySlot*>* value) {
		return ((R (*)(PetsInventoryContainer*, Action1<InventorySlot*>*))(Il2CppBase() + 0x16F2790))(this, value);
	}
	template <typename R = void> R Bind(IPetsInventoryWindow* window, GameEntity* parentEntity, Action1<InventorySlot*>* onSort) {
		return ((R (*)(PetsInventoryContainer*, IPetsInventoryWindow*, GameEntity*, Action1<InventorySlot*>*))(Il2CppBase() + 0x16F2830))(this, window, parentEntity, onSort);
	}
	template <typename R = void> R Sort() {
		return ((R (*)(PetsInventoryContainer*))(Il2CppBase() + 0x16F366C))(this);
	}
	template <typename R = void> R OnArmingChanged() {
		return ((R (*)(PetsInventoryContainer*))(Il2CppBase() + 0x16F4300))(this);
	}
	template <typename R = IInventoryItem*> R GetItemById(int32_t id) {
		return ((R (*)(PetsInventoryContainer*, int32_t))(Il2CppBase() + 0x16F43D4))(this, id);
	}
	 ValueTuple3<bool, IInventoryItem*, int32_t>* IsInventoryEmpty() {
		return ((ValueTuple3<bool, IInventoryItem*, int32_t>* (*)(PetsInventoryContainer*))(Il2CppBase() + 0x16EE9C0))(this);
	}
	template <typename R = void> R OnBeginScrollingEvent(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(PetsInventoryContainer*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x16F4478))(this, item, eventData);
	}
	template <typename R = void> R OnScrollingEvent(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(PetsInventoryContainer*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x16F44A0))(this, item, eventData);
	}
	template <typename R = void> R OnEndScrollingEvent(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(PetsInventoryContainer*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x16F44C8))(this, item, eventData);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(PetsInventoryContainer*, float))(Il2CppBase() + 0x16F44F0))(this, deltaTime);
	}

};

