#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "StringNameComponent" 

class ArmingFaceComponent: StringNameComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArmingFaceComponent"));
	}



};

}
