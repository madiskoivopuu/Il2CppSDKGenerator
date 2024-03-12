#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInventoryEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInventoryEntity"));
	}


	template <typename T = uintptr_t> T get_inventory() {
		return ((T (*)(IInventoryEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasInventory() {
		return ((T (*)(IInventoryEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddInventory(Il2CppString* newSlotBlueprint, int32_t newMaxCount, uintptr_t newAccess, bool newApplyInventoryMagics) {
		return ((T (*)(IInventoryEntity*, Il2CppString*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x0))(this, newSlotBlueprint, newMaxCount, newAccess, newApplyInventoryMagics);
	}
	template <typename T = void> T ReplaceInventory(Il2CppString* newSlotBlueprint, int32_t newMaxCount, uintptr_t newAccess, bool newApplyInventoryMagics) {
		return ((T (*)(IInventoryEntity*, Il2CppString*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x0))(this, newSlotBlueprint, newMaxCount, newAccess, newApplyInventoryMagics);
	}
	template <typename T = void> T RemoveInventory() {
		return ((T (*)(IInventoryEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
