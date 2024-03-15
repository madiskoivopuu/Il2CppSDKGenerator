#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EnumComponent1.h" 
#include "LandType.h" 

class LandComponent : public EnumComponent1<LandType*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LandComponent"));
	}



};

