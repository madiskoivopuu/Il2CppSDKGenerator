#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "InventoryItemDraggable.h" 

class FuelItemDraggable : public InventoryItemDraggable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FuelItemDraggable"));
	}

	template <typename R = FuelSlot*> R& _fuelSlot() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = TooltipTrigger*> R& TooltipTrigger() {
		return *(R*)((uintptr_t)this + 0x190);
	}

	template <typename R = void> R Bind(IUIWindow* window, GameEntity* entity, int32_t index, FuelSlot* slot, FuelTooltipData* tooltipData) {
		return ((R (*)(FuelItemDraggable*, IUIWindow*, GameEntity*, int32_t, FuelSlot*, FuelTooltipData*))(Il2CppBase() + 0x15FE7D4))(this, window, entity, index, slot, tooltipData);
	}
	template <typename R = void> R OnResourceChanged() {
		return ((R (*)(FuelItemDraggable*))(Il2CppBase() + 0x15FE908))(this);
	}

};

