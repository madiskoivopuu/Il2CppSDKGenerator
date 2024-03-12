#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EntityBlueprint" 

class CooldownBlueprint: EntityBlueprint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CooldownBlueprint"));
	}



};

}
