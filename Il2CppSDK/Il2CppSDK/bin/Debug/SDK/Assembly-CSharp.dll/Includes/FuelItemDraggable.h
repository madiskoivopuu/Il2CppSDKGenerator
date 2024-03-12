#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventoryItemDraggable" 

class FuelItemDraggable: InventoryItemDraggable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FuelItemDraggable"));
	}

	template <typename T = uintptr_t> T& _fuelSlot() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& TooltipTrigger() {
		return *(T*)((uintptr_t)this + 0x190);
	}

	template <typename T = void> T Bind(uintptr_t window, uintptr_t entity, int32_t index, uintptr_t slot, uintptr_t tooltipData) {
		return ((T (*)(FuelItemDraggable*, uintptr_t, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x15FE7D4))(this, window, entity, index, slot, tooltipData);
	}
	template <typename T = void> T OnResourceChanged() {
		return ((T (*)(FuelItemDraggable*))(Il2CppBase() + 0x15FE908))(this);
	}

};

}
