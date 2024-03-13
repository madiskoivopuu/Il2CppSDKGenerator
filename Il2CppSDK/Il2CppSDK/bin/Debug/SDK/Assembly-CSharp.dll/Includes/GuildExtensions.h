#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildExtensions"));
	}


	template <typename T = bool> static T AreGuildMembers(IGuildEntity* entity1, IGuildEntity* entity2) {
		return ((T (*)(void *, IGuildEntity*, IGuildEntity*))(Il2CppBase() + 0x1B2408C))(0, entity1, entity2);
	}
	template <typename T = Il2CppString*> static T GetGuildName(IGuildEntity* entity, ICommonContexts* world) {
		return ((T (*)(void *, IGuildEntity*, ICommonContexts*))(Il2CppBase() + 0x1B24298))(0, entity, world);
	}
	template <typename T = bool> static T UpdateGuildTag(uintptr_t entity, GuildContext* guilds) {
		return ((T (*)(void *, uintptr_t, GuildContext*))(Il2CppBase() + 0x0))(0, entity, guilds);
	}
	template <typename T = Il2CppString*> static T GetGuildTag(IGuildEntity* entity, ICommonContexts* world) {
		return ((T (*)(void *, IGuildEntity*, ICommonContexts*))(Il2CppBase() + 0x1B24484))(0, entity, world);
	}
	template <typename T = GuildRole*> static T GetGuildRole(IGuildRoleEntity* entity) {
		return ((T (*)(void *, IGuildRoleEntity*))(Il2CppBase() + 0x1B2478C))(0, entity);
	}
	template <typename T = bool> static T IsOfficerOrLeader(GuildRole* role) {
		return ((T (*)(void *, GuildRole*))(Il2CppBase() + 0x1B248B0))(0, role);
	}
	template <typename T = bool> static T ReplaceGuildIfNeed(IGuildEntity* entity, int64_t newGuildId, bool removeOnZero) {
		return ((T (*)(void *, IGuildEntity*, int64_t, bool))(Il2CppBase() + 0x1B248C0))(0, entity, newGuildId, removeOnZero);
	}
	template <typename T = bool> static T CloneGuildIdFrom(IGuildEntity* entity, IGuildEntity* target, bool removeOnZero) {
		return ((T (*)(void *, IGuildEntity*, IGuildEntity*, bool))(Il2CppBase() + 0x1B24B18))(0, entity, target, removeOnZero);
	}

};

