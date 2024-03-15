#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInventoryItemEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInventoryItemEntity"));
	}


	template <typename R = InventoryItemComponent*> R get_inventoryItem() {
		return ((R (*)(IInventoryItemEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasInventoryItem() {
		return ((R (*)(IInventoryItemEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddInventoryItem(int32_t newId) {
		return ((R (*)(IInventoryItemEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplaceInventoryItem(int32_t newId) {
		return ((R (*)(IInventoryItemEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemoveInventoryItem() {
		return ((R (*)(IInventoryItemEntity*))(Il2CppBase() + 0x0))(this);
	}

};

