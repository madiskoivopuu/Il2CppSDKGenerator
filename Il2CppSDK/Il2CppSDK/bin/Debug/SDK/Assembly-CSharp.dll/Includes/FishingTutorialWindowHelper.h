#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FishingTutorialWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FishingTutorialWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowFishingTutorial(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15F7034))(0, manager);
	}

};

}
