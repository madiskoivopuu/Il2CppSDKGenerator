#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGuildQuestEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGuildQuestEntity"));
	}


	template <typename T = GuildQuestComponent*> T get_guildQuest() {
		return ((T (*)(IGuildQuestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasGuildQuest() {
		return ((T (*)(IGuildQuestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddGuildQuest(int64_t newId) {
		return ((T (*)(IGuildQuestEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplaceGuildQuest(int64_t newId) {
		return ((T (*)(IGuildQuestEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemoveGuildQuest() {
		return ((T (*)(IGuildQuestEntity*))(Il2CppBase() + 0x0))(this);
	}

};

