#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ClickableItemsContainer.h" 

class InventoryContainer : public ClickableItemsContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryContainer"));
	}

	template <typename R = InventoryItemSplit*> R& ToSplitingItem() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& SplitTextColor() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	 Il2CppList<InventorySlot*>*& InventorySlots() {
		return *(Il2CppList<InventorySlot*>**)((uintptr_t)this + 0x60);
	}
	template <typename R = InventoryItemDraggable*> R& ItemPrefab() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = TextMonoBehaviour*> R& LockedMark() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = bool> R& HideUnusedSlots() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	 Il2CppDictionary<int32_t, InventoryItemDraggable*>*& _dict() {
		return *(Il2CppDictionary<int32_t, InventoryItemDraggable*>**)((uintptr_t)this + 0x80);
	}
	template <typename R = int32_t> R& SlotsMaxCount() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = IUIWindow*> R& Window() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = int32_t> R& _entityId() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = ButtonWithSliderOnHold*> R& SplitButtonWithSlider() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& InventorySctroll() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = int32_t> R& _size() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = int32_t> R& _initialSize() {
		return *(R*)((uintptr_t)this + 0xB4);
	}

	 ValueCollectionint32_t, InventoryItemDraggable*>* get_Items() {
		return ((ValueCollectionint32_t, InventoryItemDraggable*>* (*)(InventoryContainer*))(Il2CppBase() + 0x146EEB8))(this);
	}
	template <typename R = int32_t> R get_GridWidth() {
		return ((R (*)(InventoryContainer*))(Il2CppBase() + 0x146EF0C))(this);
	}
	template <typename R = InventoryItemDraggable*> R GetItem(int32_t id) {
		return ((R (*)(InventoryContainer*, int32_t))(Il2CppBase() + 0x146EF28))(this, id);
	}
	template <typename R = IUIWindow*> R get_Window() {
		return ((R (*)(InventoryContainer*))(Il2CppBase() + 0x146EF88))(this);
	}
	template <typename R = void> R set_Window(IUIWindow* value) {
		return ((R (*)(InventoryContainer*, IUIWindow*))(Il2CppBase() + 0x146EF90))(this, value);
	}
	template <typename R = GameEntity*> R GetEntity() {
		return ((R (*)(InventoryContainer*))(Il2CppBase() + 0x146EF98))(this);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(InventoryContainer*))(Il2CppBase() + 0x146F094))(this);
	}
	template <typename R = void> R Bind(IUIWindow* window, GameEntity* entity, bool ignoreBop) {
		return ((R (*)(InventoryContainer*, IUIWindow*, GameEntity*, bool))(Il2CppBase() + 0x146F594))(this, window, entity, ignoreBop);
	}
	template <typename R = void> R OnBeginScrollingEvent(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(InventoryContainer*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x14709DC))(this, item, eventData);
	}
	template <typename R = void> R OnScrollingEvent(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(InventoryContainer*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x1470A70))(this, item, eventData);
	}
	template <typename R = void> R OnEndScrollingEvent(IInventoryItem* item, uintptr_t eventData) {
		return ((R (*)(InventoryContainer*, IInventoryItem*, uintptr_t))(Il2CppBase() + 0x1470B04))(this, item, eventData);
	}
	template <typename R = void> R OnDraw(float deltaTime) {
		return ((R (*)(InventoryContainer*, float))(Il2CppBase() + 0x1470B98))(this, deltaTime);
	}
	template <typename R = void> R Unbind() {
		return ((R (*)(InventoryContainer*))(Il2CppBase() + 0x1470FF8))(this);
	}
	template <typename R = InventoryItemDraggable*> R GetFirstEmptySlot() {
		return ((R (*)(InventoryContainer*))(Il2CppBase() + 0x1471140))(this);
	}

};

