#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITournamentContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITournamentContexts"));
	}


	template <typename T = uintptr_t> T get_tournaments() {
		return ((T (*)(ITournamentContexts*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_tournamentsData() {
		return ((T (*)(ITournamentContexts*))(Il2CppBase() + 0x0))(this);
	}

};

}
