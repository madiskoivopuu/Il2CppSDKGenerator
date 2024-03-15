#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "FloatValueComponent.h" 

class HealthStepComponent : public FloatValueComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HealthStepComponent"));
	}



};

