#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActiveTournamentWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActiveTournamentWindowHelper"));
	}


	template <typename R = ActiveTournamentWindow*> static R ShowActiveTournament(UIWindowsManager* manager, int64_t tournamentId) {
		return ((R (*)(void *, UIWindowsManager*, int64_t))(Il2CppBase() + 0x18AE830))(0, manager, tournamentId);
	}

};

