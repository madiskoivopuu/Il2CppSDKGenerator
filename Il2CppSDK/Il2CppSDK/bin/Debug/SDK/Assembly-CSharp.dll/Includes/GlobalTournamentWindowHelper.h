#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GlobalTournamentWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GlobalTournamentWindowHelper"));
	}


	template <typename R = GlobalTournamentWindow*> static R ShowGlobalTournamentWindow(UIWindowsManager* manager, int32_t targetId, Il2CppString* tournamentBlueprint) {
		return ((R (*)(void *, UIWindowsManager*, int32_t, Il2CppString*))(Il2CppBase() + 0x12DDD94))(0, manager, targetId, tournamentBlueprint);
	}
	template <typename R = void> static R OnGlobalTournamentsPlayersFound(UIWindowsManager* manager, ProtoTools::ErrorCodes code, Il2CppArray<int64_t>* playerIds) {
		return ((R (*)(void *, UIWindowsManager*, ProtoTools::ErrorCodes, Il2CppArray<int64_t>*))(Il2CppBase() + 0x12DDE44))(0, manager, code, playerIds);
	}

};

