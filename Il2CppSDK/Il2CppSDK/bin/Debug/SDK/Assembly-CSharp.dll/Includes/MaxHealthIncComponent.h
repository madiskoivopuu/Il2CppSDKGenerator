#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseModifierComponent.h" 

class MaxHealthIncComponent : public BaseModifierComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MaxHealthIncComponent"));
	}



};

