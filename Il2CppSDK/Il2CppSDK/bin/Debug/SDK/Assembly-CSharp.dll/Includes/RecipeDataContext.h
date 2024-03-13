#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseContext1.h" 

class RecipeDataContext : public BaseContext1<RecipeEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RecipeDataContext"));
	}

	template <typename T = EntityIndex2RecipeEntity*, Il2CppString*>*> T& _craftIndex() {
		return *(T*)((uintptr_t)this + 0xF8);
	}

	template <typename T = void> T Fill(Il2CppList<EntityBlueprint*>* blueprints) {
		return ((T (*)(RecipeDataContext*, Il2CppList<EntityBlueprint*>*))(Il2CppBase() + 0x1395D28))(this, blueprints);
	}
	template <typename T = void> T AddEntityIndexes() {
		return ((T (*)(RecipeDataContext*))(Il2CppBase() + 0x1395B54))(this);
	}
	template <typename T = HashSet1RecipeEntity*>*> T GetEntitiesWithCraft(Il2CppString* name) {
		return ((T (*)(RecipeDataContext*, Il2CppString*))(Il2CppBase() + 0x13968C4))(this, name);
	}

};

