#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EntityBlueprint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntityBlueprint"));
	}

	template <typename T = Il2CppString*> T& Template() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& SaveVersion() {
		return *(T*)((uintptr_t)this + 0x58);
	}


};

}
