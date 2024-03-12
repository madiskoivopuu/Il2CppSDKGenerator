#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RemoveOnMoveComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RemoveOnMoveComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(RemoveOnMoveComponent*, uintptr_t))(Il2CppBase() + 0x13A0D50))(this, target);
	}

};

}
