#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PortalsLeagueWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalsLeagueWindowHelper"));
	}


	template <typename T = PortalsLeagueWindow*> static T ShowPortalsLeague(UIWindowsManager* manager, DialogueEntity* dialogueEntity) {
		return ((T (*)(void *, UIWindowsManager*, DialogueEntity*))(Il2CppBase() + 0x157951C))(0, manager, dialogueEntity);
	}

};

