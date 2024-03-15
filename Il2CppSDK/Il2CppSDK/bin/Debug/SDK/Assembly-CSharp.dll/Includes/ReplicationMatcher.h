#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReplicationMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReplicationMatcher"));
	}

	 static IMatcher1<ReplicationEntity*>*& _matcherArenaWorld() {
		return *(IMatcher1<ReplicationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<ReplicationEntity*>*& _matcherClanContext() {
		return *(IMatcher1<ReplicationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<ReplicationEntity*>*& _matcherClanInviteReason() {
		return *(IMatcher1<ReplicationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<ReplicationEntity*>*& _matcherClanReason() {
		return *(IMatcher1<ReplicationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<ReplicationEntity*>*& _matcherDiplomacyContext() {
		return *(IMatcher1<ReplicationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<ReplicationEntity*>*& _matcherEntity() {
		return *(IMatcher1<ReplicationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<ReplicationEntity*>*& _matcherGuildContext() {
		return *(IMatcher1<ReplicationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<ReplicationEntity*>*& _matcherGuildInviteContext() {
		return *(IMatcher1<ReplicationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<ReplicationEntity*>*& _matcherGuildInviteReason() {
		return *(IMatcher1<ReplicationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<ReplicationEntity*>*& _matcherGuildQuestContext() {
		return *(IMatcher1<ReplicationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<ReplicationEntity*>*& _matcherGuildQuestReason() {
		return *(IMatcher1<ReplicationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1<ReplicationEntity*>*& _matcherGuildReason() {
		return *(IMatcher1<ReplicationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1<ReplicationEntity*>*& _matcherIncome() {
		return *(IMatcher1<ReplicationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1<ReplicationEntity*>*& _matcherInviteContext() {
		return *(IMatcher1<ReplicationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1<ReplicationEntity*>*& _matcherMapWorld() {
		return *(IMatcher1<ReplicationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1<ReplicationEntity*>*& _matcherPlayerContext() {
		return *(IMatcher1<ReplicationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1<ReplicationEntity*>*& _matcherPlayerId() {
		return *(IMatcher1<ReplicationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1<ReplicationEntity*>*& _matcherPvPContext() {
		return *(IMatcher1<ReplicationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1<ReplicationEntity*>*& _matcherStoreDataContext() {
		return *(IMatcher1<ReplicationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1<ReplicationEntity*>*& _matcherTournamentContext() {
		return *(IMatcher1<ReplicationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1<ReplicationEntity*>*& _matcherTournamentReason() {
		return *(IMatcher1<ReplicationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1<ReplicationEntity*>*& _matcherVIPDataContext() {
		return *(IMatcher1<ReplicationEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}

	 static IMatcher1<ReplicationEntity*>* get_ArenaWorld() {
		return ((IMatcher1<ReplicationEntity*>* (*)(void *))(Il2CppBase() + 0x11958DC))(0);
	}
	 static IMatcher1<ReplicationEntity*>* get_ClanContext() {
		return ((IMatcher1<ReplicationEntity*>* (*)(void *))(Il2CppBase() + 0x1195A5C))(0);
	}
	 static IMatcher1<ReplicationEntity*>* get_ClanInviteReason() {
		return ((IMatcher1<ReplicationEntity*>* (*)(void *))(Il2CppBase() + 0x1195BF8))(0);
	}
	 static IMatcher1<ReplicationEntity*>* get_ClanReason() {
		return ((IMatcher1<ReplicationEntity*>* (*)(void *))(Il2CppBase() + 0x1195D94))(0);
	}
	 static IMatcher1<ReplicationEntity*>* get_DiplomacyContext() {
		return ((IMatcher1<ReplicationEntity*>* (*)(void *))(Il2CppBase() + 0x1195F30))(0);
	}
	 static IMatcher1<ReplicationEntity*>* get_Entity() {
		return ((IMatcher1<ReplicationEntity*>* (*)(void *))(Il2CppBase() + 0x11960CC))(0);
	}
	 static IMatcher1<ReplicationEntity*>* get_GuildContext() {
		return ((IMatcher1<ReplicationEntity*>* (*)(void *))(Il2CppBase() + 0x1196268))(0);
	}
	 static IMatcher1<ReplicationEntity*>* get_GuildInviteContext() {
		return ((IMatcher1<ReplicationEntity*>* (*)(void *))(Il2CppBase() + 0x1196404))(0);
	}
	 static IMatcher1<ReplicationEntity*>* get_GuildInviteReason() {
		return ((IMatcher1<ReplicationEntity*>* (*)(void *))(Il2CppBase() + 0x11965A0))(0);
	}
	 static IMatcher1<ReplicationEntity*>* get_GuildQuestContext() {
		return ((IMatcher1<ReplicationEntity*>* (*)(void *))(Il2CppBase() + 0x119673C))(0);
	}
	 static IMatcher1<ReplicationEntity*>* get_GuildQuestReason() {
		return ((IMatcher1<ReplicationEntity*>* (*)(void *))(Il2CppBase() + 0x11968D8))(0);
	}
	 static IMatcher1<ReplicationEntity*>* get_GuildReason() {
		return ((IMatcher1<ReplicationEntity*>* (*)(void *))(Il2CppBase() + 0x1196A74))(0);
	}
	 static IMatcher1<ReplicationEntity*>* get_Income() {
		return ((IMatcher1<ReplicationEntity*>* (*)(void *))(Il2CppBase() + 0x1196C10))(0);
	}
	 static IMatcher1<ReplicationEntity*>* get_InviteContext() {
		return ((IMatcher1<ReplicationEntity*>* (*)(void *))(Il2CppBase() + 0x1196DAC))(0);
	}
	 static IMatcher1<ReplicationEntity*>* get_MapWorld() {
		return ((IMatcher1<ReplicationEntity*>* (*)(void *))(Il2CppBase() + 0x1196F48))(0);
	}
	 static IMatcher1<ReplicationEntity*>* get_PlayerContext() {
		return ((IMatcher1<ReplicationEntity*>* (*)(void *))(Il2CppBase() + 0x11970E4))(0);
	}
	 static IMatcher1<ReplicationEntity*>* get_PlayerId() {
		return ((IMatcher1<ReplicationEntity*>* (*)(void *))(Il2CppBase() + 0x1197280))(0);
	}
	 static IMatcher1<ReplicationEntity*>* get_PvPContext() {
		return ((IMatcher1<ReplicationEntity*>* (*)(void *))(Il2CppBase() + 0x119741C))(0);
	}
	 static IMatcher1<ReplicationEntity*>* get_StoreDataContext() {
		return ((IMatcher1<ReplicationEntity*>* (*)(void *))(Il2CppBase() + 0x11975B8))(0);
	}
	 static IMatcher1<ReplicationEntity*>* get_TournamentContext() {
		return ((IMatcher1<ReplicationEntity*>* (*)(void *))(Il2CppBase() + 0x1197754))(0);
	}
	 static IMatcher1<ReplicationEntity*>* get_TournamentReason() {
		return ((IMatcher1<ReplicationEntity*>* (*)(void *))(Il2CppBase() + 0x11978F0))(0);
	}
	 static IMatcher1<ReplicationEntity*>* get_VIPDataContext() {
		return ((IMatcher1<ReplicationEntity*>* (*)(void *))(Il2CppBase() + 0x1197A8C))(0);
	}
	 static IAllOfMatcher1<ReplicationEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<ReplicationEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1197C28))(0, indices);
	}
	 static IAllOfMatcher1<ReplicationEntity*>* AllOf_1(Il2CppArray<IMatcher1<ReplicationEntity*>*>* matchers) {
		return ((IAllOfMatcher1<ReplicationEntity*>* (*)(void *, Il2CppArray<IMatcher1<ReplicationEntity*>*>*))(Il2CppBase() + 0x1197CA0))(0, matchers);
	}
	 static IAnyOfMatcher1<ReplicationEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<ReplicationEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1197D18))(0, indices);
	}
	 static IAnyOfMatcher1<ReplicationEntity*>* AnyOf_1(Il2CppArray<IMatcher1<ReplicationEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<ReplicationEntity*>* (*)(void *, Il2CppArray<IMatcher1<ReplicationEntity*>*>*))(Il2CppBase() + 0x1197D90))(0, matchers);
	}

};

