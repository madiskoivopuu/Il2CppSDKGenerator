#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICreateUniqueInventoryEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICreateUniqueInventoryEntity"));
	}


	template <typename R = CreateUniqueInventoryComponent*> R get_createUniqueInventory() {
		return ((R (*)(ICreateUniqueInventoryEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCreateUniqueInventory() {
		return ((R (*)(ICreateUniqueInventoryEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCreateUniqueInventory(Il2CppArray<Il2CppString*>* newRandomGroups) {
		return ((R (*)(ICreateUniqueInventoryEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newRandomGroups);
	}
	template <typename R = void> R ReplaceCreateUniqueInventory(Il2CppArray<Il2CppString*>* newRandomGroups) {
		return ((R (*)(ICreateUniqueInventoryEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newRandomGroups);
	}
	template <typename R = void> R RemoveCreateUniqueInventory() {
		return ((R (*)(ICreateUniqueInventoryEntity*))(Il2CppBase() + 0x0))(this);
	}

};

