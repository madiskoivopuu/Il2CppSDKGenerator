#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseBoolModifierComponent" 

class TeamUnhiddenComponent: BaseBoolModifierComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TeamUnhiddenComponent"));
	}

	template <typename T = void*> T& Teams() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
