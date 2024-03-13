#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FuelView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FuelView"));
	}

	template <typename T = uintptr_t> T& FromContainer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ToContainer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = RecipeSlotView*> T& FuelItemPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ToItemName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Timer() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = TooltipTrigger*> T& RecipeToolTipTrigger() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& BathIconContainer() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Show(GameEntity* craftStation, FuelItem* fuel, TooltipView* tooltip) {
		return ((T (*)(FuelView*, GameEntity*, FuelItem*, TooltipView*))(Il2CppBase() + 0x15FEAD4))(this, craftStation, fuel, tooltip);
	}

};

