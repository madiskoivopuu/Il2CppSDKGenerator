#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildExtensions"));
	}


	template <typename R = bool> static R AreGuildMembers(IGuildEntity* entity1, IGuildEntity* entity2) {
		return ((R (*)(void *, IGuildEntity*, IGuildEntity*))(Il2CppBase() + 0x1B2408C))(0, entity1, entity2);
	}
	template <typename R = Il2CppString*> static R GetGuildName(IGuildEntity* entity, ICommonContexts* world) {
		return ((R (*)(void *, IGuildEntity*, ICommonContexts*))(Il2CppBase() + 0x1B24298))(0, entity, world);
	}
	template <typename R = bool> static R UpdateGuildTag(uintptr_t entity, GuildContext* guilds) {
		return ((R (*)(void *, uintptr_t, GuildContext*))(Il2CppBase() + 0x0))(0, entity, guilds);
	}
	template <typename R = Il2CppString*> static R GetGuildTag(IGuildEntity* entity, ICommonContexts* world) {
		return ((R (*)(void *, IGuildEntity*, ICommonContexts*))(Il2CppBase() + 0x1B24484))(0, entity, world);
	}
	template <typename R = GuildRole*> static R GetGuildRole(IGuildRoleEntity* entity) {
		return ((R (*)(void *, IGuildRoleEntity*))(Il2CppBase() + 0x1B2478C))(0, entity);
	}
	template <typename R = bool> static R IsOfficerOrLeader(GuildRole* role) {
		return ((R (*)(void *, GuildRole*))(Il2CppBase() + 0x1B248B0))(0, role);
	}
	template <typename R = bool> static R ReplaceGuildIfNeed(IGuildEntity* entity, int64_t newGuildId, bool removeOnZero) {
		return ((R (*)(void *, IGuildEntity*, int64_t, bool))(Il2CppBase() + 0x1B248C0))(0, entity, newGuildId, removeOnZero);
	}
	template <typename R = bool> static R CloneGuildIdFrom(IGuildEntity* entity, IGuildEntity* target, bool removeOnZero) {
		return ((R (*)(void *, IGuildEntity*, IGuildEntity*, bool))(Il2CppBase() + 0x1B24B18))(0, entity, target, removeOnZero);
	}

};

