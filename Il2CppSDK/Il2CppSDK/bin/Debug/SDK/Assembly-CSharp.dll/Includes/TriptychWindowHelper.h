#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriptychWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriptychWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowTriptych(uintptr_t manager, uintptr_t dialogueEntity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1527CBC))(0, manager, dialogueEntity);
	}

};

}
