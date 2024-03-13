#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TournamentGuildWinnersDialogHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentGuildWinnersDialogHelper"));
	}


	template <typename T = UIWindow*> static T ShowTournamentGuildWinners(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1507210))(0, manager);
	}
	template <typename T = void> static T OnMainPrevGuildsResponse(UIWindowsManager* manager, Il2CppArray<uintptr_t>* ids, ErrorCodes* errorCode) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppArray<uintptr_t>*, ErrorCodes*))(Il2CppBase() + 0x15072CC))(0, manager, ids, errorCode);
	}
	template <typename T = void> static T OnGlobalPrevGuildsResponse(UIWindowsManager* manager, Il2CppArray<uintptr_t>* ids, ErrorCodes* errorCode) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppArray<uintptr_t>*, ErrorCodes*))(Il2CppBase() + 0x15073D8))(0, manager, ids, errorCode);
	}

};

