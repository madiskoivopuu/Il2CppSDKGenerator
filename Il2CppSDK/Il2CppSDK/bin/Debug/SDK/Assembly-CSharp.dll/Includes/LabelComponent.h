#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "StringValueComponent" 

class LabelComponent: StringValueComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LabelComponent"));
	}



};

}
