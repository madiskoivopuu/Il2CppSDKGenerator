#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TournamentGuildWinnersDialogHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TournamentGuildWinnersDialogHelper"));
	}


	template <typename T = uintptr_t> static T ShowTournamentGuildWinners(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1507210))(0, manager);
	}
	template <typename T = void> static T OnMainPrevGuildsResponse(uintptr_t manager, Il2CppArray<uintptr_t>* ids, uintptr_t errorCode) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x15072CC))(0, manager, ids, errorCode);
	}
	template <typename T = void> static T OnGlobalPrevGuildsResponse(uintptr_t manager, Il2CppArray<uintptr_t>* ids, uintptr_t errorCode) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x15073D8))(0, manager, ids, errorCode);
	}

};

}
