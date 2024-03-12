#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInventorySlotContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInventorySlotContexts"));
	}


	template <typename T = uintptr_t> T get_inventorySlotsData() {
		return ((T (*)(IInventorySlotContexts*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_inventorySlots() {
		return ((T (*)(IInventorySlotContexts*))(Il2CppBase() + 0x0))(this);
	}

};

}
