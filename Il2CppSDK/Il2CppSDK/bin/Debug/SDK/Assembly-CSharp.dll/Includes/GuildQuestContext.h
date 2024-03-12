#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext`1" 

class GuildQuestContext: BaseReplicatedContext1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildQuestContext"));
	}

	template <typename T = Il2CppString*> static T& Id() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Guild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_IdComponentIndex() {
		return ((T (*)(GuildQuestContext*))(Il2CppBase() + 0x1932858))(this);
	}
	template <typename T = uintptr_t> T get_EntityCommand() {
		return ((T (*)(GuildQuestContext*))(Il2CppBase() + 0x1932860))(this);
	}
	template <typename T = uintptr_t> T get_ComponentCommand() {
		return ((T (*)(GuildQuestContext*))(Il2CppBase() + 0x1932868))(this);
	}
	template <typename T = uintptr_t> T GetEntityWithId(int64_t id) {
		return ((T (*)(GuildQuestContext*, int64_t))(Il2CppBase() + 0x1932FE4))(this, id);
	}
	template <typename T = void*> T GetEntitiesWithGuild(int64_t guildId) {
		return ((T (*)(GuildQuestContext*, int64_t))(Il2CppBase() + 0x19330C0))(this, guildId);
	}
	template <typename T = uintptr_t> T GetActualWithQuest(int64_t guildId, Il2CppString* questName, int64_t now) {
		return ((T (*)(GuildQuestContext*, int64_t, Il2CppString*, int64_t))(Il2CppBase() + 0x1933180))(this, guildId, questName, now);
	}
	template <typename T = uintptr_t> T GetActive(int64_t guildId) {
		return ((T (*)(GuildQuestContext*, int64_t))(Il2CppBase() + 0x1933484))(this, guildId);
	}
	template <typename T = uintptr_t> T get_Item(int64_t id) {
		return ((T (*)(GuildQuestContext*, int64_t))(Il2CppBase() + 0x1933640))(this, id);
	}
	template <typename T = uintptr_t> T CreateEntityWithId(int64_t id) {
		return ((T (*)(GuildQuestContext*, int64_t))(Il2CppBase() + 0x193367C))(this, id);
	}
	template <typename T = Il2CppString*> T GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(GuildQuestContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x19337F4))(this, reader, entity);
	}
	template <typename T = Il2CppString*> T CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(GuildQuestContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x19338FC))(this, reader, entity);
	}

};

}
