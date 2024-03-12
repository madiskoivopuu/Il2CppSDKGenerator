#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventoryItem" 

class InventoryItemDragged: InventoryItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryItemDragged"));
	}


	template <typename T = void> T Show(uintptr_t entity, int32_t index) {
		return ((T (*)(InventoryItemDragged*, uintptr_t, int32_t))(Il2CppBase() + 0x1232514))(this, entity, index);
	}
	template <typename T = void> T Close() {
		return ((T (*)(InventoryItemDragged*))(Il2CppBase() + 0x1232560))(this);
	}

};

}
