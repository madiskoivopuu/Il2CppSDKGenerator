#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseBoolModifierComponent.h" 

class TeamUnhiddenComponent : public BaseBoolModifierComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TeamUnhiddenComponent"));
	}

	template <typename T = HashSet1int64_t>*> T& Teams() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

