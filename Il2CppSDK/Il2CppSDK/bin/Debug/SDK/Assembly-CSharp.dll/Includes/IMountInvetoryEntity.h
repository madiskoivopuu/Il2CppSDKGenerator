#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMountInvetoryEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMountInvetoryEntity"));
	}


	template <typename R = MountInvetoryComponent*> R get_mountInvetory() {
		return ((R (*)(IMountInvetoryEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMountInvetory() {
		return ((R (*)(IMountInvetoryEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMountInvetory(Il2CppString* newSlotBlueprint, int32_t newMaxCount, InventoryAccess newAccess, bool newApplyInventoryMagics) {
		return ((R (*)(IMountInvetoryEntity*, Il2CppString*, int32_t, InventoryAccess, bool))(Il2CppBase() + 0x0))(this, newSlotBlueprint, newMaxCount, newAccess, newApplyInventoryMagics);
	}
	template <typename R = void> R ReplaceMountInvetory(Il2CppString* newSlotBlueprint, int32_t newMaxCount, InventoryAccess newAccess, bool newApplyInventoryMagics) {
		return ((R (*)(IMountInvetoryEntity*, Il2CppString*, int32_t, InventoryAccess, bool))(Il2CppBase() + 0x0))(this, newSlotBlueprint, newMaxCount, newAccess, newApplyInventoryMagics);
	}
	template <typename R = void> R RemoveMountInvetory() {
		return ((R (*)(IMountInvetoryEntity*))(Il2CppBase() + 0x0))(this);
	}

};

