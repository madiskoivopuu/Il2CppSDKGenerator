#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseApplyPlaceComponent.h" 

class SpawnOnDeathComponent : public BaseApplyPlaceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpawnOnDeathComponent"));
	}



};

