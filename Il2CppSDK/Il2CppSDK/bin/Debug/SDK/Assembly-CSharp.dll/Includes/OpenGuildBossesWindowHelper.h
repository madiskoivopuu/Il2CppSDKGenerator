#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OpenGuildBossesWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OpenGuildBossesWindowHelper"));
	}


	template <typename T = OpenGuildBossesWindow*> static T ShowOpenGuildBosses(UIWindowsManager* manager, int32_t targetId, bool backToPortal) {
		return ((T (*)(void *, UIWindowsManager*, int32_t, bool))(Il2CppBase() + 0x11E373C))(0, manager, targetId, backToPortal);
	}
	template <typename T = void> static T OnGuildBossesDonationResult(UIWindowsManager* manager, BossOperationResultData* donationResult) {
		return ((T (*)(void *, UIWindowsManager*, BossOperationResultData*))(Il2CppBase() + 0x11E3810))(0, manager, donationResult);
	}
	template <typename T = void> static T CloseOpenGuildBosses(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x11E3918))(0, manager, targetId);
	}

};

