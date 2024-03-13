#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FindGuildWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FindGuildWindowHelper"));
	}


	template <typename T = FindGuildWindow*> static T ShowFindGuild(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1695DDC))(0, manager);
	}
	template <typename T = void> static T OnReceivedGuildForInvite(UIWindowsManager* manager, ErrorCodes* errorCode, int64_t guildId) {
		return ((T (*)(void *, UIWindowsManager*, ErrorCodes*, int64_t))(Il2CppBase() + 0x1695E74))(0, manager, errorCode, guildId);
	}

};

