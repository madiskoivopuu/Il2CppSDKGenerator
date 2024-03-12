#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResultTournamentWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResultTournamentWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowResultTournament(uintptr_t manager, Il2CppString* tournamentName, int64_t tournamentId, int32_t position, int32_t points) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int64_t, int32_t, int32_t))(Il2CppBase() + 0x119F4C4))(0, manager, tournamentName, tournamentId, position, points);
	}
	template <typename T = uintptr_t> static T ShowResultTournament_1(uintptr_t manager, uintptr_t tournamentMail) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x119F58C))(0, manager, tournamentMail);
	}

};

}
