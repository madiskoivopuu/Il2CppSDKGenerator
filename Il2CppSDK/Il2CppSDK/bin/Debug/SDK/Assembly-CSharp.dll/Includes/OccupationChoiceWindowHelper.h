#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OccupationChoiceWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OccupationChoiceWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowOccupationChoice(uintptr_t manager, uintptr_t dialogueEntity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x11D5B04))(0, manager, dialogueEntity);
	}

};

}
