#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "StringNameComponent" 

class ArmingSkill2Component: StringNameComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArmingSkill2Component"));
	}



};

}
