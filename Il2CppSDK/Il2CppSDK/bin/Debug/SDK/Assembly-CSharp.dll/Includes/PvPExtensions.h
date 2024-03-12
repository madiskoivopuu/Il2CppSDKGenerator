#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PvPExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PvPExtensions"));
	}


	template <typename T = float> static T GetDuration(uintptr_t pvp) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x11BE038))(0, pvp);
	}
	template <typename T = float> static T GetSearchDuration(uintptr_t pvp) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x11BE080))(0, pvp);
	}
	template <typename T = int64_t> static T GetEndTick(uintptr_t pvp) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x11BE0CC))(0, pvp);
	}

};

}
