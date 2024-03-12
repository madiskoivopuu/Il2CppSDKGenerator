#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EnumComponent`1" 

class LocationTypeComponent: EnumComponent1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationTypeComponent"));
	}


	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(LocationTypeComponent*, uintptr_t))(Il2CppBase() + 0x171F1B8))(this, blueprintComponent);
	}

};

}
