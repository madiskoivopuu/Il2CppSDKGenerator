#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountItemDragged
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountItemDragged"));
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
	template <typename R = int32_t> R& _parentMountInventoryId() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = Il2CppString*> R& _mountBlueprint() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& _mountBaseBlueprint() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> R& _grade() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = IItemEventHandler*> R& _handler() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = IMountsInventoryWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = ItemEntity*> R get_Item() {
		return ((R (*)(MountItemDragged*))(Il2CppBase() + 0x154825C))(this);
	}
	template <typename R = InventorySlotEntity*> R get_SlotEntity() {
		return ((R (*)(MountItemDragged*))(Il2CppBase() + 0x1548360))(this);
	}
	template <typename R = InventorySlot*> R get_Slot() {
		return ((R (*)(MountItemDragged*))(Il2CppBase() + 0x1548464))(this);
	}
	template <typename R = GameEntity*> R get_ParentEntity() {
		return ((R (*)(MountItemDragged*))(Il2CppBase() + 0x154846C))(this);
	}
	template <typename R = int32_t> R get_Id() {
		return ((R (*)(MountItemDragged*))(Il2CppBase() + 0x1548568))(this);
	}
	template <typename R = void> R set_Id(int32_t value) {
		return ((R (*)(MountItemDragged*, int32_t))(Il2CppBase() + 0x1548570))(this, value);
	}
	template <typename R = int32_t> R get_Index() {
		return ((R (*)(MountItemDragged*))(Il2CppBase() + 0x1548578))(this);
	}
	template <typename R = Il2CppString*> R get_MountBlueprint() {
		return ((R (*)(MountItemDragged*))(Il2CppBase() + 0x1548580))(this);
	}
	template <typename R = bool> R get_IsEmptyItem() {
		return ((R (*)(MountItemDragged*))(Il2CppBase() + 0x1548588))(this);
	}
	template <typename R = void> R Bind(IMountsInventoryWindow* window, GameEntity* entity, int32_t index) {
		return ((R (*)(MountItemDragged*, IMountsInventoryWindow*, GameEntity*, int32_t))(Il2CppBase() + 0x1548600))(this, window, entity, index);
	}
	template <typename R = void> R Close() {
		return ((R (*)(MountItemDragged*))(Il2CppBase() + 0x1548BCC))(this);
	}

};

