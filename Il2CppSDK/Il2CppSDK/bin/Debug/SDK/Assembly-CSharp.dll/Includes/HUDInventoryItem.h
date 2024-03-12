#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventoryItemDraggable" 

class HUDInventoryItem: InventoryItemDraggable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDInventoryItem"));
	}


	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(HUDInventoryItem*, float))(Il2CppBase() + 0x145BC7C))(this, deltaTime);
	}

};

}
