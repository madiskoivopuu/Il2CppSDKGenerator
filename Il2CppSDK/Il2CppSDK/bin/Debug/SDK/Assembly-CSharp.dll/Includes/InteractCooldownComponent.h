#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseApplyCoodownComponent.h" 

class InteractCooldownComponent : public BaseApplyCoodownComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InteractCooldownComponent"));
	}



};
