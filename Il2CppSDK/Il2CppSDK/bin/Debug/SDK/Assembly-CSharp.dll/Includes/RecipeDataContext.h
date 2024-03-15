#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseContext1.h" 
#include "RecipeEntity.h" 

class RecipeDataContext : public BaseContext1<RecipeEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RecipeDataContext"));
	}

	 EntityIndex2<RecipeEntity*, Il2CppString*>*& _craftIndex() {
		return *(EntityIndex2<RecipeEntity*, Il2CppString*>**)((uintptr_t)this + 0xF8);
	}

	template <typename R = void> R Fill(Il2CppList<EntityBlueprint*>* blueprints) {
		return ((R (*)(RecipeDataContext*, Il2CppList<EntityBlueprint*>*))(Il2CppBase() + 0x1395D28))(this, blueprints);
	}
	template <typename R = void> R AddEntityIndexes() {
		return ((R (*)(RecipeDataContext*))(Il2CppBase() + 0x1395B54))(this);
	}
	 HashSet1<RecipeEntity*>* GetEntitiesWithCraft(Il2CppString* name) {
		return ((HashSet1<RecipeEntity*>* (*)(RecipeDataContext*, Il2CppString*))(Il2CppBase() + 0x13968C4))(this, name);
	}

};

