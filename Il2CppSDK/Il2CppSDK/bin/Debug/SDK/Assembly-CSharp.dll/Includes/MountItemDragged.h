#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountItemDragged
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountItemDragged"));
	}

	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _index() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = InventorySlot*> T& _slot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _parentId() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _parentMountInventoryId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& _mountBlueprint() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& _mountBaseBlueprint() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _grade() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = IItemEventHandler*> T& _handler() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = IMountsInventoryWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = ItemEntity*> T get_Item() {
		return ((T (*)(MountItemDragged*))(Il2CppBase() + 0x154825C))(this);
	}
	template <typename T = InventorySlotEntity*> T get_SlotEntity() {
		return ((T (*)(MountItemDragged*))(Il2CppBase() + 0x1548360))(this);
	}
	template <typename T = InventorySlot*> T get_Slot() {
		return ((T (*)(MountItemDragged*))(Il2CppBase() + 0x1548464))(this);
	}
	template <typename T = GameEntity*> T get_ParentEntity() {
		return ((T (*)(MountItemDragged*))(Il2CppBase() + 0x154846C))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(MountItemDragged*))(Il2CppBase() + 0x1548568))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(MountItemDragged*, int32_t))(Il2CppBase() + 0x1548570))(this, value);
	}
	template <typename T = int32_t> T get_Index() {
		return ((T (*)(MountItemDragged*))(Il2CppBase() + 0x1548578))(this);
	}
	template <typename T = Il2CppString*> T get_MountBlueprint() {
		return ((T (*)(MountItemDragged*))(Il2CppBase() + 0x1548580))(this);
	}
	template <typename T = bool> T get_IsEmptyItem() {
		return ((T (*)(MountItemDragged*))(Il2CppBase() + 0x1548588))(this);
	}
	template <typename T = void> T Bind(IMountsInventoryWindow* window, GameEntity* entity, int32_t index) {
		return ((T (*)(MountItemDragged*, IMountsInventoryWindow*, GameEntity*, int32_t))(Il2CppBase() + 0x1548600))(this, window, entity, index);
	}
	template <typename T = void> T Close() {
		return ((T (*)(MountItemDragged*))(Il2CppBase() + 0x1548BCC))(this);
	}

};

