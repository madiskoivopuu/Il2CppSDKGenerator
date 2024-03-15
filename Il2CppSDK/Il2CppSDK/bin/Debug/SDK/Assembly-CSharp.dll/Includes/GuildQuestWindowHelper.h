#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildQuestWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildQuestWindowHelper"));
	}


	template <typename R = GuildQuestWindow*> static R ShowGuildQuest(UIWindowsManager* manager, int64_t guildQuestId) {
		return ((R (*)(void *, UIWindowsManager*, int64_t))(Il2CppBase() + 0x193A614))(0, manager, guildQuestId);
	}
	template <typename R = GuildQuestWindow*> static R ShowGuildQuest_1(UIWindowsManager* manager, Il2CppString* questName) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x193A6E0))(0, manager, questName);
	}

};

