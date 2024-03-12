#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseApplyEffectComponent" 

class ActiveEffectComponent: BaseApplyEffectComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActiveEffectComponent"));
	}



};

}
