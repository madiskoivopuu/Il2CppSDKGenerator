#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventoryItemDraggable.h" 

class HUDInventoryItem : public InventoryItemDraggable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDInventoryItem"));
	}


	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(HUDInventoryItem*, float))(Il2CppBase() + 0x145BC7C))(this, deltaTime);
	}

};

