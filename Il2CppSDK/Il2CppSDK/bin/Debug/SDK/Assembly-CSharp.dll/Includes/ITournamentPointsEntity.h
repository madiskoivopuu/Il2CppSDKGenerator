#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITournamentPointsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITournamentPointsEntity"));
	}


	template <typename T = uintptr_t> T get_tournamentPoints() {
		return ((T (*)(ITournamentPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasTournamentPoints() {
		return ((T (*)(ITournamentPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddTournamentPoints(int32_t newCount) {
		return ((T (*)(ITournamentPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T ReplaceTournamentPoints(int32_t newCount) {
		return ((T (*)(ITournamentPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T RemoveTournamentPoints() {
		return ((T (*)(ITournamentPointsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
