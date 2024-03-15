#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EntityBlueprint.h" 

class CooldownBlueprint : public EntityBlueprint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CooldownBlueprint"));
	}



};

