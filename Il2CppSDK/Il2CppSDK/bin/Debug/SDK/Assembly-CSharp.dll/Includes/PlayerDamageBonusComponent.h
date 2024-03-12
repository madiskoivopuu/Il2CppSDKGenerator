#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseModifierComponent" 

class PlayerDamageBonusComponent: BaseModifierComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerDamageBonusComponent"));
	}



};

}
