#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseApplyEffectComponent.h" 

class ApplyOnTargetEffectComponent : public BaseApplyEffectComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyOnTargetEffectComponent"));
	}



};

