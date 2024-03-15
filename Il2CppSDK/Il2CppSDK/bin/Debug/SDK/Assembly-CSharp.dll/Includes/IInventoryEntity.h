#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInventoryEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInventoryEntity"));
	}


	template <typename R = InventoryComponent*> R get_inventory() {
		return ((R (*)(IInventoryEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasInventory() {
		return ((R (*)(IInventoryEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddInventory(Il2CppString* newSlotBlueprint, int32_t newMaxCount, InventoryAccess newAccess, bool newApplyInventoryMagics) {
		return ((R (*)(IInventoryEntity*, Il2CppString*, int32_t, InventoryAccess, bool))(Il2CppBase() + 0x0))(this, newSlotBlueprint, newMaxCount, newAccess, newApplyInventoryMagics);
	}
	template <typename R = void> R ReplaceInventory(Il2CppString* newSlotBlueprint, int32_t newMaxCount, InventoryAccess newAccess, bool newApplyInventoryMagics) {
		return ((R (*)(IInventoryEntity*, Il2CppString*, int32_t, InventoryAccess, bool))(Il2CppBase() + 0x0))(this, newSlotBlueprint, newMaxCount, newAccess, newApplyInventoryMagics);
	}
	template <typename R = void> R RemoveInventory() {
		return ((R (*)(IInventoryEntity*))(Il2CppBase() + 0x0))(this);
	}

};

