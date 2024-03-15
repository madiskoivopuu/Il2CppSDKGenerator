#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FuelView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FuelView"));
	}

	template <typename R = uintptr_t> R& FromContainer() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& ToContainer() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = RecipeSlotView*> R& FuelItemPrefab() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& ToItemName() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& Timer() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = TooltipTrigger*> R& RecipeToolTipTrigger() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& BathIconContainer() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = void> R Show(GameEntity* craftStation, FuelItem* fuel, TooltipView* tooltip) {
		return ((R (*)(FuelView*, GameEntity*, FuelItem*, TooltipView*))(Il2CppBase() + 0x15FEAD4))(this, craftStation, fuel, tooltip);
	}

};

