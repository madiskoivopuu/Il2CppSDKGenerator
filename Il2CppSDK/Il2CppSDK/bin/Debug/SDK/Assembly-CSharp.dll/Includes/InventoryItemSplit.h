#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventoryItem.h" 

class InventoryItemSplit : public InventoryItem
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
	template <typename T = void> T Show(GameEntity* entity, int32_t index, uintptr_t position, uintptr_t parent) {
		return ((T (*)(InventoryItemSplit*, GameEntity*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x12325DC))(this, entity, index, position, parent);
	}
	template <typename T = void> T Close() {
		return ((T (*)(InventoryItemSplit*))(Il2CppBase() + 0x1232688))(this);
	}

};

