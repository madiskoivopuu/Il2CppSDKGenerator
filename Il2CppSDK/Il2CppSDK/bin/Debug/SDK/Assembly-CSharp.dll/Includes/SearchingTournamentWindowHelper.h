#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SearchingTournamentWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SearchingTournamentWindowHelper"));
	}


	template <typename T = SearchingTournamentWindow*> static T ShowSearchingTournament(UIWindowsManager* manager, int64_t tournamentId) {
		return ((T (*)(void *, UIWindowsManager*, int64_t))(Il2CppBase() + 0x135C75C))(0, manager, tournamentId);
	}

};

