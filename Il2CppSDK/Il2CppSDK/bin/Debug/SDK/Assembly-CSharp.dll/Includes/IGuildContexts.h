#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGuildContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGuildContexts"));
	}


	template <typename T = GuildContext*> T get_guilds() {
		return ((T (*)(IGuildContexts*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = GuildInviteContext*> T get_guildInvites() {
		return ((T (*)(IGuildContexts*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = GuildQuestContext*> T get_guildQuests() {
		return ((T (*)(IGuildContexts*))(Il2CppBase() + 0x0))(this);
	}

};

