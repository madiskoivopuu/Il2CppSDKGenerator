#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseBoolModifierComponent.h" 

class GhostComponent : public BaseBoolModifierComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GhostComponent"));
	}



};

