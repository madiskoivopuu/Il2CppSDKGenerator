#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class BasePetsInventoryWindow1 : public UIWindow1<uintptr_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BasePetsInventoryWindow`1"));
	}

	template <typename T = bool> T& _isDrageEnabled() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = PetItemDragged*> T& _itemDragged() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = JoystickDPad*> T& D_Pad() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = PetsInventoryContainer*> T& _petsInventoryContainer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = IClickableItemsContainer*> T& _targetContainer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = InventorySlot*> T& _selectedSlot() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = InventorySlotEntity*> T& _selectedInventory() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = IInventoryItem*> T& _selectedItem() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = IInventoryItem*> T& _fromItem() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Action2IInventoryItem*, uintptr_t>*> T& OnBeginScrolling() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Action2IInventoryItem*, uintptr_t>*> T& OnScrolling() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Action2IInventoryItem*, uintptr_t>*> T& OnEndScrolling() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = PetsInventoryContainer*> T get_PetsInventoryContainer() {
		return ((T (*)(BasePetsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = IItem*> T get_DraggedItem() {
		return ((T (*)(BasePetsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = IInventoryItem*> T get_SelectedItem() {
		return ((T (*)(BasePetsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T add_OnBeginScrolling(Action2IInventoryItem*, uintptr_t>* value) {
		return ((T (*)(BasePetsInventoryWindow1*, Action2IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnBeginScrolling(Action2IInventoryItem*, uintptr_t>* value) {
		return ((T (*)(BasePetsInventoryWindow1*, Action2IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnScrolling(Action2IInventoryItem*, uintptr_t>* value) {
		return ((T (*)(BasePetsInventoryWindow1*, Action2IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnScrolling(Action2IInventoryItem*, uintptr_t>* value) {
		return ((T (*)(BasePetsInventoryWindow1*, Action2IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnEndScrolling(Action2IInventoryItem*, uintptr_t>* value) {
		return ((T (*)(BasePetsInventoryWindow1*, Action2IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnEndScrolling(Action2IInventoryItem*, uintptr_t>* value) {
		return ((T (*)(BasePetsInventoryWindow1*, Action2IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BasePetsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(BasePetsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(BasePetsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ChangeHighlitedSlot(InventorySlot* slot) {
		return ((T (*)(BasePetsInventoryWindow1*, InventorySlot*))(Il2CppBase() + 0x0))(this, slot);
	}
	template <typename T = void> T OnBeginDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((T (*)(BasePetsInventoryWindow1*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename T = void> T OnDoubleClick(IInventoryItem* item) {
		return ((T (*)(BasePetsInventoryWindow1*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T OnDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((T (*)(BasePetsInventoryWindow1*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename T = void> T OnDrop(IInventoryItem* item) {
		return ((T (*)(BasePetsInventoryWindow1*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T OnEndDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((T (*)(BasePetsInventoryWindow1*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename T = void> T OnHold(IInventoryItem* item) {
		return ((T (*)(BasePetsInventoryWindow1*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T OnRelease(IInventoryItem* item) {
		return ((T (*)(BasePetsInventoryWindow1*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T OnSelect(IInventoryItem* item) {
		return ((T (*)(BasePetsInventoryWindow1*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T OnLeft() {
		return ((T (*)(BasePetsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnRight() {
		return ((T (*)(BasePetsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnTop() {
		return ((T (*)(BasePetsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnBottom() {
		return ((T (*)(BasePetsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}

};

