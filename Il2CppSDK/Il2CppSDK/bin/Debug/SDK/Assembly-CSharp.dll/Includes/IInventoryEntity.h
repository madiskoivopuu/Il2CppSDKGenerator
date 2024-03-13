#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInventoryEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInventoryEntity"));
	}


	template <typename T = InventoryComponent*> T get_inventory() {
		return ((T (*)(IInventoryEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasInventory() {
		return ((T (*)(IInventoryEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddInventory(Il2CppString* newSlotBlueprint, int32_t newMaxCount, InventoryAccess* newAccess, bool newApplyInventoryMagics) {
		return ((T (*)(IInventoryEntity*, Il2CppString*, int32_t, InventoryAccess*, bool))(Il2CppBase() + 0x0))(this, newSlotBlueprint, newMaxCount, newAccess, newApplyInventoryMagics);
	}
	template <typename T = void> T ReplaceInventory(Il2CppString* newSlotBlueprint, int32_t newMaxCount, InventoryAccess* newAccess, bool newApplyInventoryMagics) {
		return ((T (*)(IInventoryEntity*, Il2CppString*, int32_t, InventoryAccess*, bool))(Il2CppBase() + 0x0))(this, newSlotBlueprint, newMaxCount, newAccess, newApplyInventoryMagics);
	}
	template <typename T = void> T RemoveInventory() {
		return ((T (*)(IInventoryEntity*))(Il2CppBase() + 0x0))(this);
	}

};

