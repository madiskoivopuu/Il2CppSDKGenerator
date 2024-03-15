#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RecipesListView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RecipesListView"));
	}

	template <typename R = uintptr_t> R& ItemContainer() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = RecipeView*> R& RecipeViewPrefab() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Il2CppList<RecipeView*>*& views() {
		return *(Il2CppList<RecipeView*>**)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Show(GameEntity* craftStation, Il2CppArray<RecipeEntity*>* recipes, TooltipView* tooltip) {
		return ((R (*)(RecipesListView*, GameEntity*, Il2CppArray<RecipeEntity*>*, TooltipView*))(Il2CppBase() + 0x139B750))(this, craftStation, recipes, tooltip);
	}

};

