#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class CraftRecipesPopup : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftRecipesPopup"));
	}

	template <typename T = RecipesListView*> T& _list() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(CraftRecipesPopup*))(Il2CppBase() + 0x134434C))(this);
	}

};

