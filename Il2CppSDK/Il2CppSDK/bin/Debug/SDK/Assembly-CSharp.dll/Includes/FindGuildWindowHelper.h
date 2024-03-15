#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FindGuildWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FindGuildWindowHelper"));
	}


	template <typename R = FindGuildWindow*> static R ShowFindGuild(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1695DDC))(0, manager);
	}
	template <typename R = void> static R OnReceivedGuildForInvite(UIWindowsManager* manager, ProtoTools::ErrorCodes errorCode, int64_t guildId) {
		return ((R (*)(void *, UIWindowsManager*, ProtoTools::ErrorCodes, int64_t))(Il2CppBase() + 0x1695E74))(0, manager, errorCode, guildId);
	}

};

