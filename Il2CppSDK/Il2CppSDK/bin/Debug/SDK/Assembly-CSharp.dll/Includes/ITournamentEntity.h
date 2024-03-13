#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITournamentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITournamentEntity"));
	}


	template <typename T = TournamentComponent*> T get_tournament() {
		return ((T (*)(ITournamentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasTournament() {
		return ((T (*)(ITournamentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddTournament(int64_t newId) {
		return ((T (*)(ITournamentEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplaceTournament(int64_t newId) {
		return ((T (*)(ITournamentEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemoveTournament() {
		return ((T (*)(ITournamentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

