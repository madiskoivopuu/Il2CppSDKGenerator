#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FuelListView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FuelListView"));
	}

	template <typename R = uintptr_t> R& ItemContainer() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = FuelView*> R& RecipeViewPrefab() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Show(GameEntity* craftStation, Il2CppArray<FuelItem>* fuels, TooltipView* tooltip) {
		return ((R (*)(FuelListView*, GameEntity*, Il2CppArray<FuelItem>*, TooltipView*))(Il2CppBase() + 0x15FE98C))(this, craftStation, fuels, tooltip);
	}

};

