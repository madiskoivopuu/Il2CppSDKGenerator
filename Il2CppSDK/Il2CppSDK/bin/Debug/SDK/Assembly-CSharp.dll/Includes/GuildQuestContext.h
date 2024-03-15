#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 

class GuildQuestContext : public BaseReplicatedContext1<GuildQuestEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildQuestContext"));
	}

	template <typename R = Il2CppString*> static R& Id() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& Guild() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = int32_t> R get_IdComponentIndex() {
		return ((R (*)(GuildQuestContext*))(Il2CppBase() + 0x1932858))(this);
	}
	template <typename R = Commands*> R get_EntityCommand() {
		return ((R (*)(GuildQuestContext*))(Il2CppBase() + 0x1932860))(this);
	}
	template <typename R = Commands*> R get_ComponentCommand() {
		return ((R (*)(GuildQuestContext*))(Il2CppBase() + 0x1932868))(this);
	}
	template <typename R = GuildQuestEntity*> R GetEntityWithId(int64_t id) {
		return ((R (*)(GuildQuestContext*, int64_t))(Il2CppBase() + 0x1932FE4))(this, id);
	}
	 HashSet1GuildQuestEntity*>* GetEntitiesWithGuild(int64_t guildId) {
		return ((HashSet1GuildQuestEntity*>* (*)(GuildQuestContext*, int64_t))(Il2CppBase() + 0x19330C0))(this, guildId);
	}
	template <typename R = GuildQuestEntity*> R GetActualWithQuest(int64_t guildId, Il2CppString* questName, int64_t now) {
		return ((R (*)(GuildQuestContext*, int64_t, Il2CppString*, int64_t))(Il2CppBase() + 0x1933180))(this, guildId, questName, now);
	}
	template <typename R = GuildQuestEntity*> R GetActive(int64_t guildId) {
		return ((R (*)(GuildQuestContext*, int64_t))(Il2CppBase() + 0x1933484))(this, guildId);
	}
	template <typename R = GuildQuestEntity*> R get_Item(int64_t id) {
		return ((R (*)(GuildQuestContext*, int64_t))(Il2CppBase() + 0x1933640))(this, id);
	}
	template <typename R = GuildQuestEntity*> R CreateEntityWithId(int64_t id) {
		return ((R (*)(GuildQuestContext*, int64_t))(Il2CppBase() + 0x193367C))(this, id);
	}
	template <typename R = Il2CppString*> R GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(GuildQuestContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x19337F4))(this, reader, entity);
	}
	template <typename R = Il2CppString*> R CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(GuildQuestContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x19338FC))(this, reader, entity);
	}

};

