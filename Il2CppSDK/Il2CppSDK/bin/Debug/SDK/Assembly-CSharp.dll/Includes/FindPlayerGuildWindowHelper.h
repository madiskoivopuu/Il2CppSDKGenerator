#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FindPlayerGuildWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FindPlayerGuildWindowHelper"));
	}


	template <typename R = FindPlayerGuildWindow*> static R ShowFindPlayerGuild(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1697200))(0, manager);
	}
	template <typename R = void> static R OnReceivedGuildPlayerForInvite(UIWindowsManager* manager, ProtoTools::ErrorCodes code, int64_t guildId) {
		return ((R (*)(void *, UIWindowsManager*, ProtoTools::ErrorCodes, int64_t))(Il2CppBase() + 0x1697298))(0, manager, code, guildId);
	}

};

