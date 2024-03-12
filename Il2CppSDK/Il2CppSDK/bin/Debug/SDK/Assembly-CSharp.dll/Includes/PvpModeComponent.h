#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EnumComponent`1" 

class PvpModeComponent: EnumComponent1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PvpModeComponent"));
	}


	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(PvpModeComponent*, uintptr_t))(Il2CppBase() + 0x11C33D0))(this, blueprintComponent);
	}

};

}
