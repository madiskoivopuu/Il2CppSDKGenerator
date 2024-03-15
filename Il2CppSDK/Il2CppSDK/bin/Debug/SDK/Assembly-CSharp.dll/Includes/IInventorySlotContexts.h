#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInventorySlotContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInventorySlotContexts"));
	}


	template <typename R = InventorySlotDataContext*> R get_inventorySlotsData() {
		return ((R (*)(IInventorySlotContexts*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = InventorySlotContext*> R get_inventorySlots() {
		return ((R (*)(IInventorySlotContexts*))(Il2CppBase() + 0x0))(this);
	}

};

