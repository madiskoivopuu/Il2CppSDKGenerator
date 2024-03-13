#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReplicationMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReplicationMatcher"));
	}

	template <typename T = IMatcher1ReplicationEntity*>*> static T& _matcherArenaWorld() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T& _matcherClanContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T& _matcherClanInviteReason() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T& _matcherClanReason() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T& _matcherDiplomacyContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T& _matcherEntity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T& _matcherGuildContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T& _matcherGuildInviteContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T& _matcherGuildInviteReason() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T& _matcherGuildQuestContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T& _matcherGuildQuestReason() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T& _matcherGuildReason() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T& _matcherIncome() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T& _matcherInviteContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T& _matcherMapWorld() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T& _matcherPlayerContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T& _matcherPlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T& _matcherPvPContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T& _matcherStoreDataContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T& _matcherTournamentContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T& _matcherTournamentReason() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T& _matcherVIPDataContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}

	template <typename T = IMatcher1ReplicationEntity*>*> static T get_ArenaWorld() {
		return ((T (*)(void *))(Il2CppBase() + 0x11958DC))(0);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T get_ClanContext() {
		return ((T (*)(void *))(Il2CppBase() + 0x1195A5C))(0);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T get_ClanInviteReason() {
		return ((T (*)(void *))(Il2CppBase() + 0x1195BF8))(0);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T get_ClanReason() {
		return ((T (*)(void *))(Il2CppBase() + 0x1195D94))(0);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T get_DiplomacyContext() {
		return ((T (*)(void *))(Il2CppBase() + 0x1195F30))(0);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T get_Entity() {
		return ((T (*)(void *))(Il2CppBase() + 0x11960CC))(0);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T get_GuildContext() {
		return ((T (*)(void *))(Il2CppBase() + 0x1196268))(0);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T get_GuildInviteContext() {
		return ((T (*)(void *))(Il2CppBase() + 0x1196404))(0);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T get_GuildInviteReason() {
		return ((T (*)(void *))(Il2CppBase() + 0x11965A0))(0);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T get_GuildQuestContext() {
		return ((T (*)(void *))(Il2CppBase() + 0x119673C))(0);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T get_GuildQuestReason() {
		return ((T (*)(void *))(Il2CppBase() + 0x11968D8))(0);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T get_GuildReason() {
		return ((T (*)(void *))(Il2CppBase() + 0x1196A74))(0);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T get_Income() {
		return ((T (*)(void *))(Il2CppBase() + 0x1196C10))(0);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T get_InviteContext() {
		return ((T (*)(void *))(Il2CppBase() + 0x1196DAC))(0);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T get_MapWorld() {
		return ((T (*)(void *))(Il2CppBase() + 0x1196F48))(0);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T get_PlayerContext() {
		return ((T (*)(void *))(Il2CppBase() + 0x11970E4))(0);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T get_PlayerId() {
		return ((T (*)(void *))(Il2CppBase() + 0x1197280))(0);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T get_PvPContext() {
		return ((T (*)(void *))(Il2CppBase() + 0x119741C))(0);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T get_StoreDataContext() {
		return ((T (*)(void *))(Il2CppBase() + 0x11975B8))(0);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T get_TournamentContext() {
		return ((T (*)(void *))(Il2CppBase() + 0x1197754))(0);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T get_TournamentReason() {
		return ((T (*)(void *))(Il2CppBase() + 0x11978F0))(0);
	}
	template <typename T = IMatcher1ReplicationEntity*>*> static T get_VIPDataContext() {
		return ((T (*)(void *))(Il2CppBase() + 0x1197A8C))(0);
	}
	template <typename T = IAllOfMatcher1ReplicationEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1197C28))(0, indices);
	}
	template <typename T = IAllOfMatcher1ReplicationEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1197CA0))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1ReplicationEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1197D18))(0, indices);
	}
	template <typename T = IAnyOfMatcher1ReplicationEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1197D90))(0, matchers);
	}

};

