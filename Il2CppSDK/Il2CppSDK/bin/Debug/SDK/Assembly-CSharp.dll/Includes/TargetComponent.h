#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "IntIdComponent.h" 

class TargetComponent : public IntIdComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetComponent"));
	}



};
