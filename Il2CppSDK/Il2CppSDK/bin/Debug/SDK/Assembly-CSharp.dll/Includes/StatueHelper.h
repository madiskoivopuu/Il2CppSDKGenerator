#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StatueHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatueHelper"));
	}


	template <typename T = uintptr_t> static T GetStatueStatus(uintptr_t clan, uintptr_t contexts) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x148FBFC))(0, clan, contexts);
	}
	template <typename T = uintptr_t> static T GetStatueStatus_1(uintptr_t actor, uintptr_t contexts) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x148FD90))(0, actor, contexts);
	}

};

}
