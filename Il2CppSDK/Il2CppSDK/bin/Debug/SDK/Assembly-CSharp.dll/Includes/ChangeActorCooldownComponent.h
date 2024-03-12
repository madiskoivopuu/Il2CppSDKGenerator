#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseChangeCooldownComponent" 

class ChangeActorCooldownComponent: BaseChangeCooldownComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeActorCooldownComponent"));
	}



};

}
