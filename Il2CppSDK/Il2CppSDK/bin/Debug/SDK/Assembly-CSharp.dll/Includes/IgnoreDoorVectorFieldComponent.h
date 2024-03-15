#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "VectorFieldComponent.h" 

class IgnoreDoorVectorFieldComponent : public VectorFieldComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IgnoreDoorVectorFieldComponent"));
	}



};

