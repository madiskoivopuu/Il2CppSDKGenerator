#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename TEntity>
class IDataContext1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDataContext`1"));
	}


	 TEntity GetEntityWithBlueprint(Il2CppString* name) {
		return ((TEntity (*)(IDataContext1*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	 TEntity GetEntityWithBlueprintOrNull(Il2CppString* name) {
		return ((TEntity (*)(IDataContext1*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}

};

