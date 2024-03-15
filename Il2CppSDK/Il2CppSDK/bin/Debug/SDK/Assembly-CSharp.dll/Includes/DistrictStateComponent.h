#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EnumComponent1.h" 
#include "DistrictState.h" 

class DistrictStateComponent : public EnumComponent1<DistrictState>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DistrictStateComponent"));
	}



};

