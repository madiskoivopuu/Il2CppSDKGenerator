#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICreateInventoryEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICreateInventoryEntity"));
	}


	template <typename R = CreateInventoryComponent*> R get_createInventory() {
		return ((R (*)(ICreateInventoryEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCreateInventory() {
		return ((R (*)(ICreateInventoryEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCreateInventory(Il2CppString* newRandomGroup) {
		return ((R (*)(ICreateInventoryEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newRandomGroup);
	}
	template <typename R = void> R ReplaceCreateInventory(Il2CppString* newRandomGroup) {
		return ((R (*)(ICreateInventoryEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newRandomGroup);
	}
	template <typename R = void> R RemoveCreateInventory() {
		return ((R (*)(ICreateInventoryEntity*))(Il2CppBase() + 0x0))(this);
	}

};

