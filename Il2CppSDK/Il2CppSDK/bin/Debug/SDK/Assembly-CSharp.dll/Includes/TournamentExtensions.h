#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TournamentExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentExtensions"));
	}


	template <typename T = int64_t> static T GetTournamentUniqueId(ITournamentContexts* tournamentContexts, int64_t tournamentId, Il2CppString* region) {
		return ((T (*)(void *, ITournamentContexts*, int64_t, Il2CppString*))(Il2CppBase() + 0x150338C))(0, tournamentContexts, tournamentId, region);
	}

};

