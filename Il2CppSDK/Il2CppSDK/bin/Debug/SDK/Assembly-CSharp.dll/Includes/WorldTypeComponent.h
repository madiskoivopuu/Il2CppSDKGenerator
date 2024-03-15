#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EnumComponent1.h" 
#include "WorldType.h" 

class WorldTypeComponent : public EnumComponent1<WorldType*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WorldTypeComponent"));
	}



};

