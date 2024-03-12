#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseModifierComponent" 

class SneakBackstabComponent: BaseModifierComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SneakBackstabComponent"));
	}


	template <typename T = uintptr_t> T get_BackstabType() {
		return ((T (*)(SneakBackstabComponent*))(Il2CppBase() + 0x148475C))(this);
	}

};

}
