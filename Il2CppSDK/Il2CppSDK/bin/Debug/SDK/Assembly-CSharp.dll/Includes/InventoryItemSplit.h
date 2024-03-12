#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventoryItem" 

class InventoryItemSplit: InventoryItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryItemSplit"));
	}

	template <typename T = bool> T& IsShowed() {
		return *(T*)((uintptr_t)this + 0x132);
	}

	template <typename T = bool> T get_IsShowed() {
		return ((T (*)(InventoryItemSplit*))(Il2CppBase() + 0x12325C8))(this);
	}
	template <typename T = void> T set_IsShowed(bool value) {
		return ((T (*)(InventoryItemSplit*, bool))(Il2CppBase() + 0x12325D0))(this, value);
	}
	template <typename T = void> T Show(uintptr_t entity, int32_t index, Il2CppVector2 position, uintptr_t parent) {
		return ((T (*)(InventoryItemSplit*, uintptr_t, int32_t, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x12325DC))(this, entity, index, position, parent);
	}
	template <typename T = void> T Close() {
		return ((T (*)(InventoryItemSplit*))(Il2CppBase() + 0x1232688))(this);
	}

};

}
