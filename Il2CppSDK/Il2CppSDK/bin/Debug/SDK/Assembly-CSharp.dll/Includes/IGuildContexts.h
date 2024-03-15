#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGuildContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGuildContexts"));
	}


	template <typename R = GuildContext*> R get_guilds() {
		return ((R (*)(IGuildContexts*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = GuildInviteContext*> R get_guildInvites() {
		return ((R (*)(IGuildContexts*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = GuildQuestContext*> R get_guildQuests() {
		return ((R (*)(IGuildContexts*))(Il2CppBase() + 0x0))(this);
	}

};

