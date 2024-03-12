#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScoutHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScoutHelper"));
	}


	template <typename T = uintptr_t> static T GetScoutStatus(uintptr_t clan, uintptr_t contexts) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1357B10))(0, clan, contexts);
	}
	template <typename T = uintptr_t> static T GetStatus(uintptr_t scoutState, int64_t now) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x1357CA4))(0, scoutState, now);
	}
	template <typename T = uintptr_t> static T GetScoutStatus_1(uintptr_t actor, uintptr_t contexts) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1357CDC))(0, actor, contexts);
	}

};

}
