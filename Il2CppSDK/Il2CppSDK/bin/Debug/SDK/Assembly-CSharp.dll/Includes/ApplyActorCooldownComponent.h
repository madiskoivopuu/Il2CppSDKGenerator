#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseApplyCoodownComponent.h" 

class ApplyActorCooldownComponent : public BaseApplyCoodownComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyActorCooldownComponent"));
	}



};

