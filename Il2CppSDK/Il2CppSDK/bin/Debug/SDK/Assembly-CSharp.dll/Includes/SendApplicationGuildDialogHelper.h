#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendApplicationGuildDialogHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SendApplicationGuildDialogHelper"));
	}


	template <typename R = UIWindow*> static R ShowSendApplicationGuild(UIWindowsManager* manager, int64_t guildId) {
		return ((R (*)(void *, UIWindowsManager*, int64_t))(Il2CppBase() + 0x1363390))(0, manager, guildId);
	}

};

