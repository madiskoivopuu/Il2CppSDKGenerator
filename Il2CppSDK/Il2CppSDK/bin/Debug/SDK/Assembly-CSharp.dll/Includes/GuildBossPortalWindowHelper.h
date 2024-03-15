#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildBossPortalWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildBossPortalWindowHelper"));
	}


	template <typename R = GuildBossPortalWindow*> static R ShowGuildBossPortal(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x12E8830))(0, manager, targetId);
	}
	template <typename R = void> static R CloseGuildBossPortal(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x12E88FC))(0, manager, targetId);
	}

};

