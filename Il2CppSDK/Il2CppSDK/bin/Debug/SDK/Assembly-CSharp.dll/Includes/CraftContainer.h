#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftContainer"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& InventorySlots() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ItemPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& CraftItemPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& FuelPrefab() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Grid() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& OutGrid() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& FuelPlaceholder() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& OutSlotsFrame() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& OutSlotAlternateSprite() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& FuelPlaceHolderAlternate() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& OutSlotAlternateColor() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& ResultItem() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _items() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T Unbind() {
		return ((T (*)(CraftContainer*))(Il2CppBase() + 0x13416A0))(this);
	}
	template <typename T = void> T Bind(uintptr_t window, uintptr_t entity, uintptr_t FuelTooltipData) {
		return ((T (*)(CraftContainer*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x134188C))(this, window, entity, FuelTooltipData);
	}

};

}
