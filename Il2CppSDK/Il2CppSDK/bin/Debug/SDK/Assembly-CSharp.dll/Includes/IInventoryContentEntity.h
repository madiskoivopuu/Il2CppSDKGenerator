#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInventoryContentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInventoryContentEntity"));
	}


	template <typename R = InventoryContentComponent*> R get_inventoryContent() {
		return ((R (*)(IInventoryContentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasInventoryContent() {
		return ((R (*)(IInventoryContentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddInventoryContent(Il2CppArray<Item*>* newData) {
		return ((R (*)(IInventoryContentEntity*, Il2CppArray<Item*>*))(Il2CppBase() + 0x0))(this, newData);
	}
	template <typename R = void> R ReplaceInventoryContent(Il2CppArray<Item*>* newData) {
		return ((R (*)(IInventoryContentEntity*, Il2CppArray<Item*>*))(Il2CppBase() + 0x0))(this, newData);
	}
	template <typename R = void> R RemoveInventoryContent() {
		return ((R (*)(IInventoryContentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

