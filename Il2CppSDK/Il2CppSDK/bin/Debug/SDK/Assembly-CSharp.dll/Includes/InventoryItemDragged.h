#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventoryItem.h" 

class InventoryItemDragged : public InventoryItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryItemDragged"));
	}


	template <typename T = void> T Show(GameEntity* entity, int32_t index) {
		return ((T (*)(InventoryItemDragged*, GameEntity*, int32_t))(Il2CppBase() + 0x1232514))(this, entity, index);
	}
	template <typename T = void> T Close() {
		return ((T (*)(InventoryItemDragged*))(Il2CppBase() + 0x1232560))(this);
	}

};

