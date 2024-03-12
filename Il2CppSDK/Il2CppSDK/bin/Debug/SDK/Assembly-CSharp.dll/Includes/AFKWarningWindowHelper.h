#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AFKWarningWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AFKWarningWindowHelper"));
	}


	template <typename T = uintptr_t> static T GetAFKWarning(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1D93D38))(0, manager);
	}
	template <typename T = uintptr_t> static T ShowAFKWarning(uintptr_t manager, int64_t timeToKick) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x1D93E34))(0, manager, timeToKick);
	}

};

}
