#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventorySlot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventorySlot"));
	}

	template <typename R = uintptr_t> R& RectTransform() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Background() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Mark() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = InventoryItem*> R& InventoryItem() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& Selected() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _activeColor() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _inactiveColor() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _dummyColor() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = InventorySlotEntity*> R& SlotEntity() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = InventorySlotState*> R& SlotState() {
		return *(R*)((uintptr_t)this + 0x78);
	}

	template <typename R = InventorySlotEntity*> R get_SlotEntity() {
		return ((R (*)(InventorySlot*))(Il2CppBase() + 0x1234300))(this);
	}
	template <typename R = void> R set_SlotEntity(InventorySlotEntity* value) {
		return ((R (*)(InventorySlot*, InventorySlotEntity*))(Il2CppBase() + 0x1234308))(this, value);
	}
	template <typename R = InventorySlotState*> R get_SlotState() {
		return ((R (*)(InventorySlot*))(Il2CppBase() + 0x1234310))(this);
	}
	template <typename R = void> R set_SlotState(InventorySlotState* value) {
		return ((R (*)(InventorySlot*, InventorySlotState*))(Il2CppBase() + 0x1234318))(this, value);
	}
	template <typename R = void> R Bind(InventorySlotEntity* slotEntity) {
		return ((R (*)(InventorySlot*, InventorySlotEntity*))(Il2CppBase() + 0x1234320))(this, slotEntity);
	}
	template <typename R = bool> R get_Highlighted() {
		return ((R (*)(InventorySlot*))(Il2CppBase() + 0x1234354))(this);
	}
	template <typename R = void> R set_Highlighted(bool value) {
		return ((R (*)(InventorySlot*, bool))(Il2CppBase() + 0x12343E8))(this, value);
	}
	template <typename R = void> R SetState(InventorySlotState* state) {
		return ((R (*)(InventorySlot*, InventorySlotState*))(Il2CppBase() + 0x123448C))(this, state);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(InventorySlot*))(Il2CppBase() + 0x1233A78))(this);
	}

};

