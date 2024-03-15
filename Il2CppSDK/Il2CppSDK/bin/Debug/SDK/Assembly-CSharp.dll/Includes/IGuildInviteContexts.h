#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGuildInviteContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGuildInviteContexts"));
	}


	template <typename R = GuildInviteContext*> R get_guildInvites() {
		return ((R (*)(IGuildInviteContexts*))(Il2CppBase() + 0x0))(this);
	}

};

