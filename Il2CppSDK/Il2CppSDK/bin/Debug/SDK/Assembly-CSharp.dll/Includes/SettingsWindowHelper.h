#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SettingsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SettingsWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowSettings(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x162D6F0))(0, manager);
	}

};

}
