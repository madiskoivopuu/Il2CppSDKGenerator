#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseActionCondition.h" 

class ActionConditionComponent : public BaseActionCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionConditionComponent"));
	}



};

