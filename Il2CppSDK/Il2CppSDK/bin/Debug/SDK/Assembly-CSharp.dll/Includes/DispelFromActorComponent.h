#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseDispelComponent.h" 

class DispelFromActorComponent : public BaseDispelComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DispelFromActorComponent"));
	}



};

