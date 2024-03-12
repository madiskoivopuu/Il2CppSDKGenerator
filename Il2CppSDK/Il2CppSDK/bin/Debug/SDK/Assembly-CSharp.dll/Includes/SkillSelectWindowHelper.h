#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SkillSelectWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillSelectWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowSkillSelect(uintptr_t manager, int32_t inventoryIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1482900))(0, manager, inventoryIndex);
	}
	template <typename T = void> static T CloseSkillSelect(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x14829CC))(0, manager);
	}

};

}
