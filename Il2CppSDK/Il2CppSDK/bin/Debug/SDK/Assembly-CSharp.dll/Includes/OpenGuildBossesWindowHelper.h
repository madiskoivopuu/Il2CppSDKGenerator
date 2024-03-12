#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OpenGuildBossesWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OpenGuildBossesWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowOpenGuildBosses(uintptr_t manager, int32_t targetId, bool backToPortal) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x11E373C))(0, manager, targetId, backToPortal);
	}
	template <typename T = void> static T OnGuildBossesDonationResult(uintptr_t manager, uintptr_t donationResult) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x11E3810))(0, manager, donationResult);
	}
	template <typename T = void> static T CloseOpenGuildBosses(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x11E3918))(0, manager, targetId);
	}

};

}
