#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerMatcher"));
	}

	 static IMatcher1PlayerEntity*>*& _matcherAvatar() {
		return *(IMatcher1PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1PlayerEntity*>*& _matcherCell() {
		return *(IMatcher1PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1PlayerEntity*>*& _matcherClan() {
		return *(IMatcher1PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1PlayerEntity*>*& _matcherClanJoinTime() {
		return *(IMatcher1PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1PlayerEntity*>*& _matcherDailyTournaments() {
		return *(IMatcher1PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1PlayerEntity*>*& _matcherDistrictLevel() {
		return *(IMatcher1PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1PlayerEntity*>*& _matcherGlobalTournamentPoints() {
		return *(IMatcher1PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1PlayerEntity*>*& _matcherGuildCoins() {
		return *(IMatcher1PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1PlayerEntity*>*& _matcherGuild() {
		return *(IMatcher1PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1PlayerEntity*>*& _matcherGuildJoinTime() {
		return *(IMatcher1PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1PlayerEntity*>*& _matcherGuildRole() {
		return *(IMatcher1PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1PlayerEntity*>*& _matcherGuildTag() {
		return *(IMatcher1PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1PlayerEntity*>*& _matcherIcon() {
		return *(IMatcher1PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1PlayerEntity*>*& _matcherLastLogin() {
		return *(IMatcher1PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1PlayerEntity*>*& _matcherLevel() {
		return *(IMatcher1PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1PlayerEntity*>*& _matcherOnline() {
		return *(IMatcher1PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1PlayerEntity*>*& _matcherPlayerId() {
		return *(IMatcher1PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1PlayerEntity*>*& _matcherPlayerName() {
		return *(IMatcher1PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1PlayerEntity*>*& _matcherPortalsPoints() {
		return *(IMatcher1PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1PlayerEntity*>*& _matcherRegion() {
		return *(IMatcher1PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1PlayerEntity*>*& _matcherSaviorPoints() {
		return *(IMatcher1PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1PlayerEntity*>*& _matcherTournament() {
		return *(IMatcher1PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1PlayerEntity*>*& _matcherTournamentPoints() {
		return *(IMatcher1PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1PlayerEntity*>*& _matcherWeeklyGuildPoints() {
		return *(IMatcher1PlayerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}

	 static IMatcher1PlayerEntity*>* get_Avatar() {
		return ((IMatcher1PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x1562D8C))(0);
	}
	 static IMatcher1PlayerEntity*>* get_Cell() {
		return ((IMatcher1PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156989C))(0);
	}
	 static IMatcher1PlayerEntity*>* get_Clan() {
		return ((IMatcher1PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x1561E90))(0);
	}
	 static IMatcher1PlayerEntity*>* get_ClanJoinTime() {
		return ((IMatcher1PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x1569A38))(0);
	}
	 static IMatcher1PlayerEntity*>* get_DailyTournaments() {
		return ((IMatcher1PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x1569BD4))(0);
	}
	 static IMatcher1PlayerEntity*>* get_DistrictLevel() {
		return ((IMatcher1PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x1569D70))(0);
	}
	 static IMatcher1PlayerEntity*>* get_GlobalTournamentPoints() {
		return ((IMatcher1PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x1569F0C))(0);
	}
	 static IMatcher1PlayerEntity*>* get_GuildCoins() {
		return ((IMatcher1PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156A0A8))(0);
	}
	 static IMatcher1PlayerEntity*>* get_Guild() {
		return ((IMatcher1PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156202C))(0);
	}
	 static IMatcher1PlayerEntity*>* get_GuildJoinTime() {
		return ((IMatcher1PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156A244))(0);
	}
	 static IMatcher1PlayerEntity*>* get_GuildRole() {
		return ((IMatcher1PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156A3E0))(0);
	}
	 static IMatcher1PlayerEntity*>* get_GuildTag() {
		return ((IMatcher1PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156A57C))(0);
	}
	 static IMatcher1PlayerEntity*>* get_Icon() {
		return ((IMatcher1PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156A718))(0);
	}
	 static IMatcher1PlayerEntity*>* get_LastLogin() {
		return ((IMatcher1PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156A8B4))(0);
	}
	 static IMatcher1PlayerEntity*>* get_Level() {
		return ((IMatcher1PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156AA50))(0);
	}
	 static IMatcher1PlayerEntity*>* get_Online() {
		return ((IMatcher1PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156ABEC))(0);
	}
	 static IMatcher1PlayerEntity*>* get_PlayerId() {
		return ((IMatcher1PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x1561CF4))(0);
	}
	 static IMatcher1PlayerEntity*>* get_PlayerName() {
		return ((IMatcher1PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156AD88))(0);
	}
	 static IMatcher1PlayerEntity*>* get_PortalsPoints() {
		return ((IMatcher1PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156AF24))(0);
	}
	 static IMatcher1PlayerEntity*>* get_Region() {
		return ((IMatcher1PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156B0C0))(0);
	}
	 static IMatcher1PlayerEntity*>* get_SaviorPoints() {
		return ((IMatcher1PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156B25C))(0);
	}
	 static IMatcher1PlayerEntity*>* get_Tournament() {
		return ((IMatcher1PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x15621C8))(0);
	}
	 static IMatcher1PlayerEntity*>* get_TournamentPoints() {
		return ((IMatcher1PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156B3F8))(0);
	}
	 static IMatcher1PlayerEntity*>* get_WeeklyGuildPoints() {
		return ((IMatcher1PlayerEntity*>* (*)(void *))(Il2CppBase() + 0x156B594))(0);
	}
	 static IAllOfMatcher1PlayerEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1PlayerEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x156B730))(0, indices);
	}
	 static IAllOfMatcher1PlayerEntity*>* AllOf_1(Il2CppArray<IMatcher1PlayerEntity*>*>* matchers) {
		return ((IAllOfMatcher1PlayerEntity*>* (*)(void *, Il2CppArray<IMatcher1PlayerEntity*>*>*))(Il2CppBase() + 0x156B7A8))(0, matchers);
	}
	 static IAnyOfMatcher1PlayerEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1PlayerEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x156B820))(0, indices);
	}
	 static IAnyOfMatcher1PlayerEntity*>* AnyOf_1(Il2CppArray<IMatcher1PlayerEntity*>*>* matchers) {
		return ((IAnyOfMatcher1PlayerEntity*>* (*)(void *, Il2CppArray<IMatcher1PlayerEntity*>*>*))(Il2CppBase() + 0x156B898))(0, matchers);
	}

};

