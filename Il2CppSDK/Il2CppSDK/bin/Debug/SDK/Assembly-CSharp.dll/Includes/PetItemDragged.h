#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetItemDragged
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetItemDragged"));
	}

	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& _index() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = InventorySlot*> R& _slot() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& _parentId() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& _parentPetInventoryId() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = Il2CppString*> R& _petBlueprint() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& _petBaseBlueprint() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> R& _grade() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = IItemEventHandler*> R& _handler() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = IPetsInventoryWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = ItemEntity*> R get_Item() {
		return ((R (*)(PetItemDragged*))(Il2CppBase() + 0x16EC45C))(this);
	}
	template <typename R = InventorySlotEntity*> R get_SlotEntity() {
		return ((R (*)(PetItemDragged*))(Il2CppBase() + 0x16EC560))(this);
	}
	template <typename R = InventorySlot*> R get_Slot() {
		return ((R (*)(PetItemDragged*))(Il2CppBase() + 0x16EC664))(this);
	}
	template <typename R = GameEntity*> R get_ParentEntity() {
		return ((R (*)(PetItemDragged*))(Il2CppBase() + 0x16EC66C))(this);
	}
	template <typename R = int32_t> R get_Id() {
		return ((R (*)(PetItemDragged*))(Il2CppBase() + 0x16EC768))(this);
	}
	template <typename R = void> R set_Id(int32_t value) {
		return ((R (*)(PetItemDragged*, int32_t))(Il2CppBase() + 0x16EC770))(this, value);
	}
	template <typename R = int32_t> R get_Index() {
		return ((R (*)(PetItemDragged*))(Il2CppBase() + 0x16EC778))(this);
	}
	template <typename R = Il2CppString*> R get_PetBlueprint() {
		return ((R (*)(PetItemDragged*))(Il2CppBase() + 0x16EC780))(this);
	}
	template <typename R = bool> R get_IsEmptyItem() {
		return ((R (*)(PetItemDragged*))(Il2CppBase() + 0x16EC788))(this);
	}
	template <typename R = void> R Bind(IPetsInventoryWindow* window, GameEntity* entity, int32_t index) {
		return ((R (*)(PetItemDragged*, IPetsInventoryWindow*, GameEntity*, int32_t))(Il2CppBase() + 0x16EC800))(this, window, entity, index);
	}
	template <typename R = void> R Close() {
		return ((R (*)(PetItemDragged*))(Il2CppBase() + 0x16ECDCC))(this);
	}

};

