#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartTournamentWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartTournamentWindowHelper"));
	}


	template <typename T = StartTournamentWindow*> static T ShowStartTournament(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x148E1B8))(0, manager);
	}

};

