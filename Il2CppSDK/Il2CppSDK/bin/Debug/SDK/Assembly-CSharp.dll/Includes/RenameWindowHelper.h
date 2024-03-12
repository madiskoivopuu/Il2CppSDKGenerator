#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RenameWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RenameWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowRename(uintptr_t manager, uintptr_t options) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x13A2848))(0, manager, options);
	}
	template <typename T = uintptr_t> static T GetRename(uintptr_t manager, uintptr_t options) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x13A28F0))(0, manager, options);
	}

};

}
