#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CooldownTournamentWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CooldownTournamentWindowHelper"));
	}


	template <typename T = CooldownTournamentWindow*> static T ShowCooldownTournament(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x133AA54))(0, manager);
	}

};

