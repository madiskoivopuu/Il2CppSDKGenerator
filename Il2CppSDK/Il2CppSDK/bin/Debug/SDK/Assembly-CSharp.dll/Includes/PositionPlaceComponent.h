#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EnumComponent1.h" 
#include "PositionPlace.h" 

class PositionPlaceComponent : public EnumComponent1<PositionPlace>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PositionPlaceComponent"));
	}



};

