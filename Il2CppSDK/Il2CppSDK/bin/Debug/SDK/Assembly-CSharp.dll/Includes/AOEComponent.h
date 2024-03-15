#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TargetsSelector.h" 

class AOEComponent : public TargetsSelector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AOEComponent"));
	}



};

