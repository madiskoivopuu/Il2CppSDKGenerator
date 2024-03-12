#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LandChoiceWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LandChoiceWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowLandChoice(uintptr_t manager, uintptr_t dialogueEntity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1429344))(0, manager, dialogueEntity);
	}

};

}
