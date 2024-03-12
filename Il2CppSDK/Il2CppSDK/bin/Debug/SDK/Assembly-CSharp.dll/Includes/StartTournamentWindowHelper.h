#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartTournamentWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartTournamentWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowStartTournament(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x148E1B8))(0, manager);
	}

};

}
