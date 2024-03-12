#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EnumComponent`1" 

class DifficultyComponent: EnumComponent1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DifficultyComponent"));
	}


	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(DifficultyComponent*, uintptr_t))(Il2CppBase() + 0x12FA62C))(this, blueprintComponent);
	}

};

}
