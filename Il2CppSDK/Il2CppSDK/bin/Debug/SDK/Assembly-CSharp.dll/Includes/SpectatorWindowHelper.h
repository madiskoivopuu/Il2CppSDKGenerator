#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpectatorWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpectatorWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowSpectator(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1488024))(0, manager, targetId);
	}
	template <typename T = void> static T CloseSpectator(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x14881E4))(0, manager);
	}
	template <typename T = bool> static T IsSpectatorOpen(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1488280))(0, manager);
	}
	template <typename T = uintptr_t> static T GetSpectator(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x148835C))(0, manager);
	}

};

}
