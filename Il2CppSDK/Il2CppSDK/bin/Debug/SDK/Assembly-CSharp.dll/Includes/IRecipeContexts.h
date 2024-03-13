#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRecipeContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRecipeContexts"));
	}


	template <typename T = RecipeDataContext*> T get_recipe() {
		return ((T (*)(IRecipeContexts*))(Il2CppBase() + 0x0))(this);
	}

};

