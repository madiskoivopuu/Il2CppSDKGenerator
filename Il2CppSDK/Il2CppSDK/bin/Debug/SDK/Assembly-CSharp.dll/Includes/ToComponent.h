#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "StringValueComponent" 

class ToComponent: StringValueComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ToComponent"));
	}



};

}
