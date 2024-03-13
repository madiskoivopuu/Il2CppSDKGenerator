#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BasePositionComponent.h" 

class TargetPositionComponent : public BasePositionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetPositionComponent"));
	}



};

