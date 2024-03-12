#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseContext`1" 

class RecipeDataContext: BaseContext1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RecipeDataContext"));
	}

	template <typename T = void*> T& _craftIndex() {
		return *(T*)((uintptr_t)this + 0xF8);
	}

	template <typename T = void> T Fill(Il2CppList<uintptr_t>* blueprints) {
		return ((T (*)(RecipeDataContext*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1395D28))(this, blueprints);
	}
	template <typename T = void> T AddEntityIndexes() {
		return ((T (*)(RecipeDataContext*))(Il2CppBase() + 0x1395B54))(this);
	}
	template <typename T = void*> T GetEntitiesWithCraft(Il2CppString* name) {
		return ((T (*)(RecipeDataContext*, Il2CppString*))(Il2CppBase() + 0x13968C4))(this, name);
	}

};

}
