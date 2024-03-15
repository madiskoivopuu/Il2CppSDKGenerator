#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename TEntity>
class IBlueprintContext1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBlueprintContext`1"));
	}


	 TEntity CreateFromBlueprint(Il2CppString* entityName) {
		return ((TEntity (*)(IBlueprintContext1*, Il2CppString*))(Il2CppBase() + 0x0))(this, entityName);
	}
	 TEntity CreateUsingBlueprint(Il2CppString* entityName, EntityBlueprint* entityData) {
		return ((TEntity (*)(IBlueprintContext1*, Il2CppString*, EntityBlueprint*))(Il2CppBase() + 0x0))(this, entityName, entityData);
	}

};

