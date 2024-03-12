#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BlueprintAndRecipeHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlueprintAndRecipeHelper"));
	}


	template <typename T = void*> static T CheckUnlocked(uintptr_t blueprintEntity, uintptr_t world, uintptr_t player, uintptr_t currentStep) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x16BBDB8))(0, blueprintEntity, world, player, currentStep);
	}

};

}
