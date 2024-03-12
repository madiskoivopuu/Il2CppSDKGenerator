#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerMatcher"));
	}

	template <typename T = void*> static T& _matcherAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _matcherCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& _matcherClan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& _matcherClanJoinTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& _matcherDailyTournaments() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& _matcherDistrictLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& _matcherGlobalTournamentPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& _matcherGuildCoins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& _matcherGuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& _matcherGuildJoinTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = void*> static T& _matcherGuildRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = void*> static T& _matcherGuildTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = void*> static T& _matcherIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = void*> static T& _matcherLastLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = void*> static T& _matcherLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = void*> static T& _matcherOnline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = void*> static T& _matcherPlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = void*> static T& _matcherPlayerName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = void*> static T& _matcherPortalsPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = void*> static T& _matcherRegion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = void*> static T& _matcherSaviorPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = void*> static T& _matcherTournament() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = void*> static T& _matcherTournamentPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = void*> static T& _matcherWeeklyGuildPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}

	template <typename T = void*> static T get_Avatar() {
		return ((T (*)(void *))(Il2CppBase() + 0x1562D8C))(0);
	}
	template <typename T = void*> static T get_Cell() {
		return ((T (*)(void *))(Il2CppBase() + 0x156989C))(0);
	}
	template <typename T = void*> static T get_Clan() {
		return ((T (*)(void *))(Il2CppBase() + 0x1561E90))(0);
	}
	template <typename T = void*> static T get_ClanJoinTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x1569A38))(0);
	}
	template <typename T = void*> static T get_DailyTournaments() {
		return ((T (*)(void *))(Il2CppBase() + 0x1569BD4))(0);
	}
	template <typename T = void*> static T get_DistrictLevel() {
		return ((T (*)(void *))(Il2CppBase() + 0x1569D70))(0);
	}
	template <typename T = void*> static T get_GlobalTournamentPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x1569F0C))(0);
	}
	template <typename T = void*> static T get_GuildCoins() {
		return ((T (*)(void *))(Il2CppBase() + 0x156A0A8))(0);
	}
	template <typename T = void*> static T get_Guild() {
		return ((T (*)(void *))(Il2CppBase() + 0x156202C))(0);
	}
	template <typename T = void*> static T get_GuildJoinTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x156A244))(0);
	}
	template <typename T = void*> static T get_GuildRole() {
		return ((T (*)(void *))(Il2CppBase() + 0x156A3E0))(0);
	}
	template <typename T = void*> static T get_GuildTag() {
		return ((T (*)(void *))(Il2CppBase() + 0x156A57C))(0);
	}
	template <typename T = void*> static T get_Icon() {
		return ((T (*)(void *))(Il2CppBase() + 0x156A718))(0);
	}
	template <typename T = void*> static T get_LastLogin() {
		return ((T (*)(void *))(Il2CppBase() + 0x156A8B4))(0);
	}
	template <typename T = void*> static T get_Level() {
		return ((T (*)(void *))(Il2CppBase() + 0x156AA50))(0);
	}
	template <typename T = void*> static T get_Online() {
		return ((T (*)(void *))(Il2CppBase() + 0x156ABEC))(0);
	}
	template <typename T = void*> static T get_PlayerId() {
		return ((T (*)(void *))(Il2CppBase() + 0x1561CF4))(0);
	}
	template <typename T = void*> static T get_PlayerName() {
		return ((T (*)(void *))(Il2CppBase() + 0x156AD88))(0);
	}
	template <typename T = void*> static T get_PortalsPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x156AF24))(0);
	}
	template <typename T = void*> static T get_Region() {
		return ((T (*)(void *))(Il2CppBase() + 0x156B0C0))(0);
	}
	template <typename T = void*> static T get_SaviorPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x156B25C))(0);
	}
	template <typename T = void*> static T get_Tournament() {
		return ((T (*)(void *))(Il2CppBase() + 0x15621C8))(0);
	}
	template <typename T = void*> static T get_TournamentPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x156B3F8))(0);
	}
	template <typename T = void*> static T get_WeeklyGuildPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x156B594))(0);
	}
	template <typename T = void*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x156B730))(0, indices);
	}
	template <typename T = void*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x156B7A8))(0, matchers);
	}
	template <typename T = void*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x156B820))(0, indices);
	}
	template <typename T = void*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x156B898))(0, matchers);
	}

};

}
