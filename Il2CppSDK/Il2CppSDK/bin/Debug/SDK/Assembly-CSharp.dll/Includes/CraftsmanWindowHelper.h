#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftsmanWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftsmanWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowCraftsmanWindow(uintptr_t manager, uintptr_t dialogueEntity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x134A290))(0, manager, dialogueEntity);
	}

};

}
