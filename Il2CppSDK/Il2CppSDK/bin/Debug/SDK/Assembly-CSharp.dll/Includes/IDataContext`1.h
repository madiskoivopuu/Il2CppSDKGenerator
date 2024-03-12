#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDataContext1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDataContext`1"));
	}


	template <typename T = uintptr_t> T GetEntityWithBlueprint(Il2CppString* name) {
		return ((T (*)(IDataContext1*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename T = uintptr_t> T GetEntityWithBlueprintOrNull(Il2CppString* name) {
		return ((T (*)(IDataContext1*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}

};

}
