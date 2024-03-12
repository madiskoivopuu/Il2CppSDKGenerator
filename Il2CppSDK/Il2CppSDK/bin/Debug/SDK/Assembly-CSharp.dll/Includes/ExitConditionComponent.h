#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseConditionComponent" 

class ExitConditionComponent: BaseConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExitConditionComponent"));
	}



};

}
