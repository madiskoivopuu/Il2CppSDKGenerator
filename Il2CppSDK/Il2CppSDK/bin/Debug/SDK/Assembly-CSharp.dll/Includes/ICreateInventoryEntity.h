#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICreateInventoryEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICreateInventoryEntity"));
	}


	template <typename T = CreateInventoryComponent*> T get_createInventory() {
		return ((T (*)(ICreateInventoryEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCreateInventory() {
		return ((T (*)(ICreateInventoryEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCreateInventory(Il2CppString* newRandomGroup) {
		return ((T (*)(ICreateInventoryEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newRandomGroup);
	}
	template <typename T = void> T ReplaceCreateInventory(Il2CppString* newRandomGroup) {
		return ((T (*)(ICreateInventoryEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newRandomGroup);
	}
	template <typename T = void> T RemoveCreateInventory() {
		return ((T (*)(ICreateInventoryEntity*))(Il2CppBase() + 0x0))(this);
	}

};

