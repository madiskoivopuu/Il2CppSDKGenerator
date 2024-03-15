#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TournamentGuildWinnersDialogHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentGuildWinnersDialogHelper"));
	}


	template <typename R = UIWindow*> static R ShowTournamentGuildWinners(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1507210))(0, manager);
	}
	template <typename R = void> static R OnMainPrevGuildsResponse(UIWindowsManager* manager, Il2CppArray<int64_t>* ids, ProtoTools::ErrorCodes* errorCode) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppArray<int64_t>*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x15072CC))(0, manager, ids, errorCode);
	}
	template <typename R = void> static R OnGlobalPrevGuildsResponse(UIWindowsManager* manager, Il2CppArray<int64_t>* ids, ProtoTools::ErrorCodes* errorCode) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppArray<int64_t>*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x15073D8))(0, manager, ids, errorCode);
	}

};

