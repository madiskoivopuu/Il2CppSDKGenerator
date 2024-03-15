#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartTournamentWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartTournamentWindowHelper"));
	}


	template <typename R = StartTournamentWindow*> static R ShowStartTournament(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x148E1B8))(0, manager);
	}

};

