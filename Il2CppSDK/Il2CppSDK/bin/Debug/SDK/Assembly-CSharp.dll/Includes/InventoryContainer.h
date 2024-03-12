#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ClickableItemsContainer" 

class InventoryContainer: ClickableItemsContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryContainer"));
	}

	template <typename T = uintptr_t> T& ToSplitingItem() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& SplitTextColor() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& InventorySlots() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& ItemPrefab() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& LockedMark() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& HideUnusedSlots() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& _dict() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& SlotsMaxCount() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& Window() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& _entityId() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& SplitButtonWithSlider() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& InventorySctroll() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& _size() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& _initialSize() {
		return *(T*)((uintptr_t)this + 0xB4);
	}

	template <typename T = void*> T get_Items() {
		return ((T (*)(InventoryContainer*))(Il2CppBase() + 0x146EEB8))(this);
	}
	template <typename T = int32_t> T get_GridWidth() {
		return ((T (*)(InventoryContainer*))(Il2CppBase() + 0x146EF0C))(this);
	}
	template <typename T = uintptr_t> T GetItem(int32_t id) {
		return ((T (*)(InventoryContainer*, int32_t))(Il2CppBase() + 0x146EF28))(this, id);
	}
	template <typename T = uintptr_t> T get_Window() {
		return ((T (*)(InventoryContainer*))(Il2CppBase() + 0x146EF88))(this);
	}
	template <typename T = void> T set_Window(uintptr_t value) {
		return ((T (*)(InventoryContainer*, uintptr_t))(Il2CppBase() + 0x146EF90))(this, value);
	}
	template <typename T = uintptr_t> T GetEntity() {
		return ((T (*)(InventoryContainer*))(Il2CppBase() + 0x146EF98))(this);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(InventoryContainer*))(Il2CppBase() + 0x146F094))(this);
	}
	template <typename T = void> T Bind(uintptr_t window, uintptr_t entity, bool ignoreBop) {
		return ((T (*)(InventoryContainer*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x146F594))(this, window, entity, ignoreBop);
	}
	template <typename T = void> T OnBeginScrollingEvent(uintptr_t item, uintptr_t eventData) {
		return ((T (*)(InventoryContainer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x14709DC))(this, item, eventData);
	}
	template <typename T = void> T OnScrollingEvent(uintptr_t item, uintptr_t eventData) {
		return ((T (*)(InventoryContainer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1470A70))(this, item, eventData);
	}
	template <typename T = void> T OnEndScrollingEvent(uintptr_t item, uintptr_t eventData) {
		return ((T (*)(InventoryContainer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1470B04))(this, item, eventData);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(InventoryContainer*, float))(Il2CppBase() + 0x1470B98))(this, deltaTime);
	}
	template <typename T = void> T Unbind() {
		return ((T (*)(InventoryContainer*))(Il2CppBase() + 0x1470FF8))(this);
	}
	template <typename T = uintptr_t> T GetFirstEmptySlot() {
		return ((T (*)(InventoryContainer*))(Il2CppBase() + 0x1471140))(this);
	}

};

}
