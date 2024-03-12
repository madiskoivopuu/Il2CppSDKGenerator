#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "StringNameComponent" 

class PointComponent: StringNameComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PointComponent"));
	}



};

}
