#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RecipesListView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RecipesListView"));
	}

	template <typename T = uintptr_t> T& ItemContainer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = RecipeView*> T& RecipeViewPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<RecipeView*>*> T& views() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Show(GameEntity* craftStation, Il2CppArray<uintptr_t>* recipes, TooltipView* tooltip) {
		return ((T (*)(RecipesListView*, GameEntity*, Il2CppArray<uintptr_t>*, TooltipView*))(Il2CppBase() + 0x139B750))(this, craftStation, recipes, tooltip);
	}

};

