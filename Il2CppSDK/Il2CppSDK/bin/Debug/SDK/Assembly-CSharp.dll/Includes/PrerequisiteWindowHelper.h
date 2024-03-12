#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrerequisiteWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrerequisiteWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowPrerequisite(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x16E356C))(0, manager, targetId);
	}
	template <typename T = void> static T ClosePrerequisite(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x16E3614))(0, manager, targetId);
	}

};

}
