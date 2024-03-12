#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "IntIdComponent" 

class ActionIdComponent: IntIdComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionIdComponent"));
	}



};

}
