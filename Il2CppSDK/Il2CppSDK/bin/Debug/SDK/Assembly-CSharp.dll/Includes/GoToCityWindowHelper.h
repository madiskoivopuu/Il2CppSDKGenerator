#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GoToCityWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GoToCityWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowGoToCity(uintptr_t manager, uintptr_t dialogueEntity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x12DFE34))(0, manager, dialogueEntity);
	}

};

}
