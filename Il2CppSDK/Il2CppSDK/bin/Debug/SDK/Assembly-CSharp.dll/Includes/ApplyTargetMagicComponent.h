#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseApplyMagicComponent.h" 

class ApplyTargetMagicComponent : public BaseApplyMagicComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyTargetMagicComponent"));
	}



};

