#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StopMoveComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StopMoveComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(StopMoveComponent*, uintptr_t))(Il2CppBase() + 0x1404E7C))(this, target);
	}

};

}
