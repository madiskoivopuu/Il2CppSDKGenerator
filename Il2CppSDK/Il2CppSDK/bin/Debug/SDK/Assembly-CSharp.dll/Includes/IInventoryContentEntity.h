#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInventoryContentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInventoryContentEntity"));
	}


	template <typename T = uintptr_t> T get_inventoryContent() {
		return ((T (*)(IInventoryContentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasInventoryContent() {
		return ((T (*)(IInventoryContentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddInventoryContent(Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(IInventoryContentEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newData);
	}
	template <typename T = void> T ReplaceInventoryContent(Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(IInventoryContentEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newData);
	}
	template <typename T = void> T RemoveInventoryContent() {
		return ((T (*)(IInventoryContentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
