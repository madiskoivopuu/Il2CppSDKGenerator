#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendApplicationGuildDialogHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SendApplicationGuildDialogHelper"));
	}


	template <typename T = UIWindow*> static T ShowSendApplicationGuild(UIWindowsManager* manager, int64_t guildId) {
		return ((T (*)(void *, UIWindowsManager*, int64_t))(Il2CppBase() + 0x1363390))(0, manager, guildId);
	}

};

