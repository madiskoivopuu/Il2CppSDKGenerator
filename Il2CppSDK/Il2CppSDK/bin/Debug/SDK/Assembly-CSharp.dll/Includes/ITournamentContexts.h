#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITournamentContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITournamentContexts"));
	}


	template <typename R = TournamentContext*> R get_tournaments() {
		return ((R (*)(ITournamentContexts*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = TournamentDataContext*> R get_tournamentsData() {
		return ((R (*)(ITournamentContexts*))(Il2CppBase() + 0x0))(this);
	}

};

