#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreepComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(CreepComponent*, uintptr_t))(Il2CppBase() + 0x1BCDB94))(this, target);
	}

};

}
