#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITournamentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITournamentEntity"));
	}


	template <typename R = TournamentComponent*> R get_tournament() {
		return ((R (*)(ITournamentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasTournament() {
		return ((R (*)(ITournamentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddTournament(int64_t newId) {
		return ((R (*)(ITournamentEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplaceTournament(int64_t newId) {
		return ((R (*)(ITournamentEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemoveTournament() {
		return ((R (*)(ITournamentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

