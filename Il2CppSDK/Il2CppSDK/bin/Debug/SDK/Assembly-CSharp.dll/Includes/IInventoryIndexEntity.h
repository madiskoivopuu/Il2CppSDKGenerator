#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInventoryIndexEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInventoryIndexEntity"));
	}


	template <typename T = uintptr_t> T get_inventoryIndex() {
		return ((T (*)(IInventoryIndexEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasInventoryIndex() {
		return ((T (*)(IInventoryIndexEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddInventoryIndex(int32_t newValue) {
		return ((T (*)(IInventoryIndexEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceInventoryIndex(int32_t newValue) {
		return ((T (*)(IInventoryIndexEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveInventoryIndex() {
		return ((T (*)(IInventoryIndexEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
