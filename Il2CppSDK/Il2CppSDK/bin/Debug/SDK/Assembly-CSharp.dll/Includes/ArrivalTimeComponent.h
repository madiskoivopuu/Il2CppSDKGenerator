#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "LongValueComponent" 

class ArrivalTimeComponent: LongValueComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArrivalTimeComponent"));
	}



};

}
