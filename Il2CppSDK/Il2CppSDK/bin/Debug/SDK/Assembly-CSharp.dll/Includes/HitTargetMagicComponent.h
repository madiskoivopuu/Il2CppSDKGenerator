#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseApplyMagicComponent.h" 

class HitTargetMagicComponent : public BaseApplyMagicComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HitTargetMagicComponent"));
	}



};

