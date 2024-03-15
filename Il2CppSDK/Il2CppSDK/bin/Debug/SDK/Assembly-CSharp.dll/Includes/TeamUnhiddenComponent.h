#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseBoolModifierComponent.h" 

class TeamUnhiddenComponent : public BaseBoolModifierComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TeamUnhiddenComponent"));
	}

	 HashSet1int64_t>*& Teams() {
		return *(HashSet1int64_t>**)((uintptr_t)this + 0x10);
	}


};

