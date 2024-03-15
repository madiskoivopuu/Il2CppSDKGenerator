#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EntityBlueprint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntityBlueprint"));
	}

	template <typename R = Il2CppString*> R& Template() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& SaveVersion() {
		return *(R*)((uintptr_t)this + 0x58);
	}


};

