#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITournamentPointsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITournamentPointsEntity"));
	}


	template <typename R = TournamentPointsComponent*> R get_tournamentPoints() {
		return ((R (*)(ITournamentPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasTournamentPoints() {
		return ((R (*)(ITournamentPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddTournamentPoints(int32_t newCount) {
		return ((R (*)(ITournamentPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R ReplaceTournamentPoints(int32_t newCount) {
		return ((R (*)(ITournamentPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R RemoveTournamentPoints() {
		return ((R (*)(ITournamentPointsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

