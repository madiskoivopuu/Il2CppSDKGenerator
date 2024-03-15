#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerMatcher"));
	}

	 static IMatcher1<PlayerEntity*>*& _matcherAvatar() {
		return *(IMatcher1<PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<PlayerEntity*>*& _matcherCell() {
		return *(IMatcher1<PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<PlayerEntity*>*& _matcherClan() {
		return *(IMatcher1<PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<PlayerEntity*>*& _matcherClanJoinTime() {
		return *(IMatcher1<PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<PlayerEntity*>*& _matcherDailyTournaments() {
		return *(IMatcher1<PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<PlayerEntity*>*& _matcherDistrictLevel() {
		return *(IMatcher1<PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<PlayerEntity*>*& _matcherGlobalTournamentPoints() {
		return *(IMatcher1<PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<PlayerEntity*>*& _matcherGuildCoins() {
		return *(IMatcher1<PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<PlayerEntity*>*& _matcherGuild() {
		return *(IMatcher1<PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<PlayerEntity*>*& _matcherGuildJoinTime() {
		return *(IMatcher1<PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<PlayerEntity*>*& _matcherGuildRole() {
		return *(IMatcher1<PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1<PlayerEntity*>*& _matcherGuildTag() {
		return *(IMatcher1<PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1<PlayerEntity*>*& _matcherIcon() {
		return *(IMatcher1<PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1<PlayerEntity*>*& _matcherLastLogin() {
		return *(IMatcher1<PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1<PlayerEntity*>*& _matcherLevel() {
		return *(IMatcher1<PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1<PlayerEntity*>*& _matcherOnline() {
		return *(IMatcher1<PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1<PlayerEntity*>*& _matcherPlayerId() {
		return *(IMatcher1<PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1<PlayerEntity*>*& _matcherPlayerName() {
		return *(IMatcher1<PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1<PlayerEntity*>*& _matcherPortalsPoints() {
		return *(IMatcher1<PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1<PlayerEntity*>*& _matcherRegion() {
		return *(IMatcher1<PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1<PlayerEntity*>*& _matcherSaviorPoints() {
		return *(IMatcher1<PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1<PlayerEntity*>*& _matcherTournament() {
		return *(IMatcher1<PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1<PlayerEntity*>*& _matcherTournamentPoints() {
		return *(IMatcher1<PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1<PlayerEntity*>*& _matcherWeeklyGuildPoints() {
		return *(IMatcher1<PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}

	 static IMatcher1<PlayerEntity*>* get_Avatar() {
		return ((IMatcher1<PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x1562D8C))(0);
	}
	 static IMatcher1<PlayerEntity*>* get_Cell() {
		return ((IMatcher1<PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156989C))(0);
	}
	 static IMatcher1<PlayerEntity*>* get_Clan() {
		return ((IMatcher1<PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x1561E90))(0);
	}
	 static IMatcher1<PlayerEntity*>* get_ClanJoinTime() {
		return ((IMatcher1<PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x1569A38))(0);
	}
	 static IMatcher1<PlayerEntity*>* get_DailyTournaments() {
		return ((IMatcher1<PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x1569BD4))(0);
	}
	 static IMatcher1<PlayerEntity*>* get_DistrictLevel() {
		return ((IMatcher1<PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x1569D70))(0);
	}
	 static IMatcher1<PlayerEntity*>* get_GlobalTournamentPoints() {
		return ((IMatcher1<PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x1569F0C))(0);
	}
	 static IMatcher1<PlayerEntity*>* get_GuildCoins() {
		return ((IMatcher1<PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156A0A8))(0);
	}
	 static IMatcher1<PlayerEntity*>* get_Guild() {
		return ((IMatcher1<PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156202C))(0);
	}
	 static IMatcher1<PlayerEntity*>* get_GuildJoinTime() {
		return ((IMatcher1<PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156A244))(0);
	}
	 static IMatcher1<PlayerEntity*>* get_GuildRole() {
		return ((IMatcher1<PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156A3E0))(0);
	}
	 static IMatcher1<PlayerEntity*>* get_GuildTag() {
		return ((IMatcher1<PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156A57C))(0);
	}
	 static IMatcher1<PlayerEntity*>* get_Icon() {
		return ((IMatcher1<PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156A718))(0);
	}
	 static IMatcher1<PlayerEntity*>* get_LastLogin() {
		return ((IMatcher1<PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156A8B4))(0);
	}
	 static IMatcher1<PlayerEntity*>* get_Level() {
		return ((IMatcher1<PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156AA50))(0);
	}
	 static IMatcher1<PlayerEntity*>* get_Online() {
		return ((IMatcher1<PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156ABEC))(0);
	}
	 static IMatcher1<PlayerEntity*>* get_PlayerId() {
		return ((IMatcher1<PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x1561CF4))(0);
	}
	 static IMatcher1<PlayerEntity*>* get_PlayerName() {
		return ((IMatcher1<PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156AD88))(0);
	}
	 static IMatcher1<PlayerEntity*>* get_PortalsPoints() {
		return ((IMatcher1<PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156AF24))(0);
	}
	 static IMatcher1<PlayerEntity*>* get_Region() {
		return ((IMatcher1<PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156B0C0))(0);
	}
	 static IMatcher1<PlayerEntity*>* get_SaviorPoints() {
		return ((IMatcher1<PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156B25C))(0);
	}
	 static IMatcher1<PlayerEntity*>* get_Tournament() {
		return ((IMatcher1<PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x15621C8))(0);
	}
	 static IMatcher1<PlayerEntity*>* get_TournamentPoints() {
		return ((IMatcher1<PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156B3F8))(0);
	}
	 static IMatcher1<PlayerEntity*>* get_WeeklyGuildPoints() {
		return ((IMatcher1<PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156B594))(0);
	}
	 static IAllOfMatcher1<PlayerEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<PlayerEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x156B730))(0, indices);
	}
	 static IAllOfMatcher1<PlayerEntity*>* AllOf_1(Il2CppArray<IMatcher1<PlayerEntity*>*>* matchers) {
		return ((IAllOfMatcher1<PlayerEntity*>* (*)(void *, Il2CppArray<IMatcher1<PlayerEntity*>*>*))(Il2CppBase() + 0x156B7A8))(0, matchers);
	}
	 static IAnyOfMatcher1<PlayerEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<PlayerEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x156B820))(0, indices);
	}
	 static IAnyOfMatcher1<PlayerEntity*>* AnyOf_1(Il2CppArray<IMatcher1<PlayerEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<PlayerEntity*>* (*)(void *, Il2CppArray<IMatcher1<PlayerEntity*>*>*))(Il2CppBase() + 0x156B898))(0, matchers);
	}

};

