#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftContainer"));
	}

	 Il2CppList<InventorySlot*>*& InventorySlots() {
		return *(Il2CppList<InventorySlot*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = InventoryItemDraggable*> R& ItemPrefab() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = InventoryCraftItemDraggable*> R& CraftItemPrefab() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = FuelItemDraggable*> R& FuelPrefab() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& Grid() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& OutGrid() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& FuelPlaceholder() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& OutSlotsFrame() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& OutSlotAlternateSprite() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& FuelPlaceHolderAlternate() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& OutSlotAlternateColor() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = InventoryItemDraggable*> R& ResultItem() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	 Il2CppList<InventoryItemDraggable*>*& _items() {
		return *(Il2CppList<InventoryItemDraggable*>**)((uintptr_t)this + 0x80);
	}

	template <typename R = void> R Unbind() {
		return ((R (*)(CraftContainer*))(Il2CppBase() + 0x13416A0))(this);
	}
	template <typename R = void> R Bind(IUIWindow* window, GameEntity* entity, FuelTooltipData* FuelTooltipData) {
		return ((R (*)(CraftContainer*, IUIWindow*, GameEntity*, FuelTooltipData*))(Il2CppBase() + 0x134188C))(this, window, entity, FuelTooltipData);
	}

};

