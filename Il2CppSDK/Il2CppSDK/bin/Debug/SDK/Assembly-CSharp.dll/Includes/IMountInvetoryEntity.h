#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMountInvetoryEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMountInvetoryEntity"));
	}


	template <typename T = uintptr_t> T get_mountInvetory() {
		return ((T (*)(IMountInvetoryEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMountInvetory() {
		return ((T (*)(IMountInvetoryEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMountInvetory(Il2CppString* newSlotBlueprint, int32_t newMaxCount, uintptr_t newAccess, bool newApplyInventoryMagics) {
		return ((T (*)(IMountInvetoryEntity*, Il2CppString*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x0))(this, newSlotBlueprint, newMaxCount, newAccess, newApplyInventoryMagics);
	}
	template <typename T = void> T ReplaceMountInvetory(Il2CppString* newSlotBlueprint, int32_t newMaxCount, uintptr_t newAccess, bool newApplyInventoryMagics) {
		return ((T (*)(IMountInvetoryEntity*, Il2CppString*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x0))(this, newSlotBlueprint, newMaxCount, newAccess, newApplyInventoryMagics);
	}
	template <typename T = void> T RemoveMountInvetory() {
		return ((T (*)(IMountInvetoryEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
