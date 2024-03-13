#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GlobalTournamentWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GlobalTournamentWindowHelper"));
	}


	template <typename T = GlobalTournamentWindow*> static T ShowGlobalTournamentWindow(UIWindowsManager* manager, int32_t targetId, Il2CppString* tournamentBlueprint) {
		return ((T (*)(void *, UIWindowsManager*, int32_t, Il2CppString*))(Il2CppBase() + 0x12DDD94))(0, manager, targetId, tournamentBlueprint);
	}
	template <typename T = void> static T OnGlobalTournamentsPlayersFound(UIWindowsManager* manager, ErrorCodes* code, Il2CppArray<uintptr_t>* playerIds) {
		return ((T (*)(void *, UIWindowsManager*, ErrorCodes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12DDE44))(0, manager, code, playerIds);
	}

};

