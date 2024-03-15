#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventoryItem.h" 

class InventoryItemSplit : public InventoryItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryItemSplit"));
	}

	template <typename R = bool> R& IsShowed() {
		return *(R*)((uintptr_t)this + 0x132);
	}

	template <typename R = bool> R get_IsShowed() {
		return ((R (*)(InventoryItemSplit*))(Il2CppBase() + 0x12325C8))(this);
	}
	template <typename R = void> R set_IsShowed(bool value) {
		return ((R (*)(InventoryItemSplit*, bool))(Il2CppBase() + 0x12325D0))(this, value);
	}
	template <typename R = void> R Show(GameEntity* entity, int32_t index, uintptr_t position, uintptr_t parent) {
		return ((R (*)(InventoryItemSplit*, GameEntity*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x12325DC))(this, entity, index, position, parent);
	}
	template <typename R = void> R Close() {
		return ((R (*)(InventoryItemSplit*))(Il2CppBase() + 0x1232688))(this);
	}

};

