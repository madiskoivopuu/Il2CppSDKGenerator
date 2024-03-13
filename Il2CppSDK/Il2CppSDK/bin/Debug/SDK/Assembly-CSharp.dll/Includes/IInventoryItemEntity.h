#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInventoryItemEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInventoryItemEntity"));
	}


	template <typename T = InventoryItemComponent*> T get_inventoryItem() {
		return ((T (*)(IInventoryItemEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasInventoryItem() {
		return ((T (*)(IInventoryItemEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddInventoryItem(int32_t newId) {
		return ((T (*)(IInventoryItemEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplaceInventoryItem(int32_t newId) {
		return ((T (*)(IInventoryItemEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemoveInventoryItem() {
		return ((T (*)(IInventoryItemEntity*))(Il2CppBase() + 0x0))(this);
	}

};

