#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBlueprintContext1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBlueprintContext`1"));
	}


	template <typename T = uintptr_t> T CreateFromBlueprint(Il2CppString* entityName) {
		return ((T (*)(IBlueprintContext1*, Il2CppString*))(Il2CppBase() + 0x0))(this, entityName);
	}
	template <typename T = uintptr_t> T CreateUsingBlueprint(Il2CppString* entityName, uintptr_t entityData) {
		return ((T (*)(IBlueprintContext1*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, entityName, entityData);
	}

};

}
