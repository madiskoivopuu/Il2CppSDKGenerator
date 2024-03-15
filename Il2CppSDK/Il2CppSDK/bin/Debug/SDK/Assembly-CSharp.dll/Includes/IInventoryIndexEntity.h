#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInventoryIndexEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInventoryIndexEntity"));
	}


	template <typename R = InventoryIndexComponent*> R get_inventoryIndex() {
		return ((R (*)(IInventoryIndexEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasInventoryIndex() {
		return ((R (*)(IInventoryIndexEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddInventoryIndex(int32_t newValue) {
		return ((R (*)(IInventoryIndexEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceInventoryIndex(int32_t newValue) {
		return ((R (*)(IInventoryIndexEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveInventoryIndex() {
		return ((R (*)(IInventoryIndexEntity*))(Il2CppBase() + 0x0))(this);
	}

};

