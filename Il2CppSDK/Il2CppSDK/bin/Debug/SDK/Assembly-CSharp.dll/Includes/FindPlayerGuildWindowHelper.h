#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FindPlayerGuildWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FindPlayerGuildWindowHelper"));
	}


	template <typename T = FindPlayerGuildWindow*> static T ShowFindPlayerGuild(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1697200))(0, manager);
	}
	template <typename T = void> static T OnReceivedGuildPlayerForInvite(UIWindowsManager* manager, ErrorCodes* code, int64_t guildId) {
		return ((T (*)(void *, UIWindowsManager*, ErrorCodes*, int64_t))(Il2CppBase() + 0x1697298))(0, manager, code, guildId);
	}

};

