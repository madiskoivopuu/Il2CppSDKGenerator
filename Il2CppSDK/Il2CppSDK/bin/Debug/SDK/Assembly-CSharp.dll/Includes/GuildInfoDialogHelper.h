#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildInfoDialogHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildInfoDialogHelper"));
	}


	template <typename R = UIWindow*> static R ShowGuildInfo(UIWindowsManager* manager, int64_t guildId) {
		return ((R (*)(void *, UIWindowsManager*, int64_t))(Il2CppBase() + 0x1B28130))(0, manager, guildId);
	}

};

