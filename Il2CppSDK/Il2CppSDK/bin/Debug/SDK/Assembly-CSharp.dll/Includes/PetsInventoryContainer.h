#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ClickableItemsContainer.h" 

class PetsInventoryContainer : public ClickableItemsContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetsInventoryContainer"));
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
	template <typename T = PetItem*> T& _petItemPrefab() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _sortButton() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _inventoryScroll() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& _showNew() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = IPetsInventoryWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& _parentId() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& _petInventoryId() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppList<PetItem*>*> T& toSort() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppList<PetItem*>*> T& sorted() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _buttonSortUp() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _buttonSortDown() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& _isSortUp() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& _petCount() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppDictionary<int32_t, PetItem*>*> T& items() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Action1InventorySlot*>*> T& OnSortButtonClick() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = Il2CppDictionary<int32_t, PetItem*>*> T get_Items() {
		return ((T (*)(PetsInventoryContainer*))(Il2CppBase() + 0x16F24E8))(this);
	}
	template <typename T = int32_t> T get_ArmingId() {
		return ((T (*)(PetsInventoryContainer*))(Il2CppBase() + 0x16F24F0))(this);
	}
	template <typename T = IInventoryItem*> T get_ArmingItem() {
		return ((T (*)(PetsInventoryContainer*))(Il2CppBase() + 0x16EE91C))(this);
	}
	template <typename T = void> T add_OnSortButtonClick(Action1InventorySlot*>* value) {
		return ((T (*)(PetsInventoryContainer*, Action1InventorySlot*>*))(Il2CppBase() + 0x16F26F0))(this, value);
	}
	template <typename T = void> T remove_OnSortButtonClick(Action1InventorySlot*>* value) {
		return ((T (*)(PetsInventoryContainer*, Action1InventorySlot*>*))(Il2CppBase() + 0x16F2790))(this, value);
	}
	template <typename T = void> T Bind(IPetsInventoryWindow* window, GameEntity* parentEntity, Action1InventorySlot*>* onSort) {
		return ((T (*)(PetsInventoryContainer*, IPetsInventoryWindow*, GameEntity*, Action1InventorySlot*>*))(Il2CppBase() + 0x16F2830))(this, window, parentEntity, onSort);
	}
	template <typename T = void> T Sort() {
		return ((T (*)(PetsInventoryContainer*))(Il2CppBase() + 0x16F366C))(this);
	}
	template <typename T = void> T OnArmingChanged() {
		return ((T (*)(PetsInventoryContainer*))(Il2CppBase() + 0x16F4300))(this);
	}
	template <typename T = IInventoryItem*> T GetItemById(int32_t id) {
		return ((T (*)(PetsInventoryContainer*, int32_t))(Il2CppBase() + 0x16F43D4))(this, id);
	}
	template <typename T = ValueTuple3bool, IInventoryItem*, int32_t>*> T IsInventoryEmpty() {
		return ((T (*)(PetsInventoryContainer*))(Il2CppBase() + 0x16EE9C0))(this);
	}
	template <typename T = void> T OnBeginScrollingEvent(IInventoryItem* item, uintptr_t eventData) {
		return ((T (*)(PetsInventoryContainer*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x16F4478))(this, item, eventData);
	}
	template <typename T = void> T OnScrollingEvent(IInventoryItem* item, uintptr_t eventData) {
		return ((T (*)(PetsInventoryContainer*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x16F44A0))(this, item, eventData);
	}
	template <typename T = void> T OnEndScrollingEvent(IInventoryItem* item, uintptr_t eventData) {
		return ((T (*)(PetsInventoryContainer*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x16F44C8))(this, item, eventData);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(PetsInventoryContainer*, float))(Il2CppBase() + 0x16F44F0))(this, deltaTime);
	}

};

