#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventorySlot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventorySlot"));
	}

	template <typename T = uintptr_t> T& RectTransform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Background() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Mark() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = InventoryItem*> T& InventoryItem() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Selected() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _activeColor() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _inactiveColor() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _dummyColor() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = InventorySlotEntity*> T& SlotEntity() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = InventorySlotState*> T& SlotState() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = InventorySlotEntity*> T get_SlotEntity() {
		return ((T (*)(InventorySlot*))(Il2CppBase() + 0x1234300))(this);
	}
	template <typename T = void> T set_SlotEntity(InventorySlotEntity* value) {
		return ((T (*)(InventorySlot*, InventorySlotEntity*))(Il2CppBase() + 0x1234308))(this, value);
	}
	template <typename T = InventorySlotState*> T get_SlotState() {
		return ((T (*)(InventorySlot*))(Il2CppBase() + 0x1234310))(this);
	}
	template <typename T = void> T set_SlotState(InventorySlotState* value) {
		return ((T (*)(InventorySlot*, InventorySlotState*))(Il2CppBase() + 0x1234318))(this, value);
	}
	template <typename T = void> T Bind(InventorySlotEntity* slotEntity) {
		return ((T (*)(InventorySlot*, InventorySlotEntity*))(Il2CppBase() + 0x1234320))(this, slotEntity);
	}
	template <typename T = bool> T get_Highlighted() {
		return ((T (*)(InventorySlot*))(Il2CppBase() + 0x1234354))(this);
	}
	template <typename T = void> T set_Highlighted(bool value) {
		return ((T (*)(InventorySlot*, bool))(Il2CppBase() + 0x12343E8))(this, value);
	}
	template <typename T = void> T SetState(InventorySlotState* state) {
		return ((T (*)(InventorySlot*, InventorySlotState*))(Il2CppBase() + 0x123448C))(this, state);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(InventorySlot*))(Il2CppBase() + 0x1233A78))(this);
	}

};

