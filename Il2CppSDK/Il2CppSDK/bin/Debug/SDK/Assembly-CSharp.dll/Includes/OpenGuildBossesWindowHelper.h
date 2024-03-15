#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OpenGuildBossesWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OpenGuildBossesWindowHelper"));
	}


	template <typename R = OpenGuildBossesWindow*> static R ShowOpenGuildBosses(UIWindowsManager* manager, int32_t targetId, bool backToPortal) {
		return ((R (*)(void *, UIWindowsManager*, int32_t, bool))(Il2CppBase() + 0x11E373C))(0, manager, targetId, backToPortal);
	}
	template <typename R = void> static R OnGuildBossesDonationResult(UIWindowsManager* manager, BossOperationResultData* donationResult) {
		return ((R (*)(void *, UIWindowsManager*, BossOperationResultData*))(Il2CppBase() + 0x11E3810))(0, manager, donationResult);
	}
	template <typename R = void> static R CloseOpenGuildBosses(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x11E3918))(0, manager, targetId);
	}

};

