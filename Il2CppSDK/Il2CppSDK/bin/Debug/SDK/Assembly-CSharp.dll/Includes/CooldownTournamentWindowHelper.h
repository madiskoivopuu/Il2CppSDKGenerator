#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CooldownTournamentWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CooldownTournamentWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowCooldownTournament(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x133AA54))(0, manager);
	}

};

}
