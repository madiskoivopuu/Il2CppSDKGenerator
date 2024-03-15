#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

template <typename T>
class BasePetsInventoryWindow1 : public UIWindow1<T>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BasePetsInventoryWindow`1"));
	}

	template <typename R = bool> R& _isDrageEnabled() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = PetItemDragged*> R& _itemDragged() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = JoystickDPad*> R& D_Pad() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = PetsInventoryContainer*> R& _petsInventoryContainer() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _closeButton() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = IClickableItemsContainer*> R& _targetContainer() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = InventorySlot*> R& _selectedSlot() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = InventorySlotEntity*> R& _selectedInventory() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = IInventoryItem*> R& _selectedItem() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = IInventoryItem*> R& _fromItem() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 Action2<IInventoryItem*, uintptr_t>*& OnBeginScrolling() {
		return *(Action2<IInventoryItem*, uintptr_t>**)((uintptr_t)this + 0x0);
	}
	 Action2<IInventoryItem*, uintptr_t>*& OnScrolling() {
		return *(Action2<IInventoryItem*, uintptr_t>**)((uintptr_t)this + 0x0);
	}
	 Action2<IInventoryItem*, uintptr_t>*& OnEndScrolling() {
		return *(Action2<IInventoryItem*, uintptr_t>**)((uintptr_t)this + 0x0);
	}

	template <typename R = PetsInventoryContainer*> R get_PetsInventoryContainer() {
		return ((R (*)(BasePetsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = IItem*> R get_DraggedItem() {
		return ((R (*)(BasePetsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = IInventoryItem*> R get_SelectedItem() {
		return ((R (*)(BasePetsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R add_OnBeginScrolling(Action2<IInventoryItem*, uintptr_t>* value) {
		return ((R (*)(BasePetsInventoryWindow1*, Action2<IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnBeginScrolling(Action2<IInventoryItem*, uintptr_t>* value) {
		return ((R (*)(BasePetsInventoryWindow1*, Action2<IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnScrolling(Action2<IInventoryItem*, uintptr_t>* value) {
		return ((R (*)(BasePetsInventoryWindow1*, Action2<IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnScrolling(Action2<IInventoryItem*, uintptr_t>* value) {
		return ((R (*)(BasePetsInventoryWindow1*, Action2<IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnEndScrolling(Action2<IInventoryItem*, uintptr_t>* value) {
		return ((R (*)(BasePetsInventoryWindow1*, Action2<IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnEndScrolling(Action2<IInventoryItem*, uintptr_t>* value) {
		return ((R (*)(BasePetsInventoryWindow1*, Action2<IInventoryItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(BasePetsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(BasePetsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(BasePetsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R ChangeHighlitedSlot(InventorySlot* slot) {
		return ((R (*)(BasePetsInventoryWindow1*, InventorySlot*))(Il2CppBase() + 0x0))(this, slot);
	}
	template <typename R = void> R OnBeginDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(BasePetsInventoryWindow1*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename R = void> R OnDoubleClick(IInventoryItem* item) {
		return ((R (*)(BasePetsInventoryWindow1*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename R = void> R OnDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(BasePetsInventoryWindow1*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename R = void> R OnDrop(IInventoryItem* item) {
		return ((R (*)(BasePetsInventoryWindow1*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename R = void> R OnEndDrag(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(BasePetsInventoryWindow1*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x0))(this, item, eventData);
	}
	template <typename R = void> R OnHold(IInventoryItem* item) {
		return ((R (*)(BasePetsInventoryWindow1*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename R = void> R OnRelease(IInventoryItem* item) {
		return ((R (*)(BasePetsInventoryWindow1*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename R = void> R OnSelect(IInventoryItem* item) {
		return ((R (*)(BasePetsInventoryWindow1*, IInventoryItem*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename R = void> R OnLeft() {
		return ((R (*)(BasePetsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnRight() {
		return ((R (*)(BasePetsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnTop() {
		return ((R (*)(BasePetsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnBottom() {
		return ((R (*)(BasePetsInventoryWindow1*))(Il2CppBase() + 0x0))(this);
	}

};

