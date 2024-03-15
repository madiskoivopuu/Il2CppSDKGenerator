#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGuildQuestEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGuildQuestEntity"));
	}


	template <typename R = GuildQuestComponent*> R get_guildQuest() {
		return ((R (*)(IGuildQuestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasGuildQuest() {
		return ((R (*)(IGuildQuestEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddGuildQuest(int64_t newId) {
		return ((R (*)(IGuildQuestEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplaceGuildQuest(int64_t newId) {
		return ((R (*)(IGuildQuestEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemoveGuildQuest() {
		return ((R (*)(IGuildQuestEntity*))(Il2CppBase() + 0x0))(this);
	}

};

