#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICreateUniqueInventoryEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICreateUniqueInventoryEntity"));
	}


	template <typename T = uintptr_t> T get_createUniqueInventory() {
		return ((T (*)(ICreateUniqueInventoryEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCreateUniqueInventory() {
		return ((T (*)(ICreateUniqueInventoryEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCreateUniqueInventory(Il2CppArray<uintptr_t>* newRandomGroups) {
		return ((T (*)(ICreateUniqueInventoryEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newRandomGroups);
	}
	template <typename T = void> T ReplaceCreateUniqueInventory(Il2CppArray<uintptr_t>* newRandomGroups) {
		return ((T (*)(ICreateUniqueInventoryEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newRandomGroups);
	}
	template <typename T = void> T RemoveCreateUniqueInventory() {
		return ((T (*)(ICreateUniqueInventoryEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
