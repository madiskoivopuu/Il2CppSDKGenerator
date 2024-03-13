#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResultTournamentWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResultTournamentWindowHelper"));
	}


	template <typename T = ResultTournamentWindow*> static T ShowResultTournament(UIWindowsManager* manager, Il2CppString* tournamentName, int64_t tournamentId, int32_t position, int32_t points) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, int64_t, int32_t, int32_t))(Il2CppBase() + 0x119F4C4))(0, manager, tournamentName, tournamentId, position, points);
	}
	template <typename T = ResultTournamentWindow*> static T ShowResultTournament_1(UIWindowsManager* manager, MailEntity* tournamentMail) {
		return ((T (*)(void *, UIWindowsManager*, MailEntity*))(Il2CppBase() + 0x119F58C))(0, manager, tournamentMail);
	}

};

