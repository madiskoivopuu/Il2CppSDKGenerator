#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FuelListView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FuelListView"));
	}

	template <typename T = uintptr_t> T& ItemContainer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = FuelView*> T& RecipeViewPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Show(GameEntity* craftStation, Il2CppArray<uintptr_t>* fuels, TooltipView* tooltip) {
		return ((T (*)(FuelListView*, GameEntity*, Il2CppArray<uintptr_t>*, TooltipView*))(Il2CppBase() + 0x15FE98C))(this, craftStation, fuels, tooltip);
	}

};

