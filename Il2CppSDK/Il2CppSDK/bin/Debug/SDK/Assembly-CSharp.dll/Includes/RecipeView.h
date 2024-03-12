#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RecipeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RecipeView"));
	}

	template <typename T = uintptr_t> T& CanvasGroup() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& FromContainer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ToContainer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& RecipeItemPrefab() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ToItemName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& Timer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& RecipeToolTipTrigger() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& FoodIconContainer() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& FoodIcon() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Show(uintptr_t craftStation, uintptr_t recipe, uintptr_t tooltip) {
		return ((T (*)(RecipeView*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x139A848))(this, craftStation, recipe, tooltip);
	}

};

}
