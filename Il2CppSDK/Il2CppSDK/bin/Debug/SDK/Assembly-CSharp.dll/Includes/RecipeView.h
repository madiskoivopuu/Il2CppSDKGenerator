#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RecipeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RecipeView"));
	}

	template <typename R = uintptr_t> R& CanvasGroup() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& FromContainer() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& ToContainer() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = RecipeSlotView*> R& RecipeItemPrefab() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& ToItemName() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& Timer() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = TooltipTrigger*> R& RecipeToolTipTrigger() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& FoodIconContainer() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& FoodIcon() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = void> R Show(GameEntity* craftStation, RecipeEntity* recipe, TooltipView* tooltip) {
		return ((R (*)(RecipeView*, GameEntity*, RecipeEntity*, TooltipView*))(Il2CppBase() + 0x139A848))(this, craftStation, recipe, tooltip);
	}

};

