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
	template <typename T = uintptr_t> T& RecipeViewPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Show(uintptr_t craftStation, Il2CppArray<uintptr_t>* fuels, uintptr_t tooltip) {
		return ((T (*)(FuelListView*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x15FE98C))(this, craftStation, fuels, tooltip);
	}

};

}
