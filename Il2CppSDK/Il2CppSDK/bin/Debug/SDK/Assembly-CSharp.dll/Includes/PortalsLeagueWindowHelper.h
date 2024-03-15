#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PortalsLeagueWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalsLeagueWindowHelper"));
	}


	template <typename R = PortalsLeagueWindow*> static R ShowPortalsLeague(UIWindowsManager* manager, DialogueEntity* dialogueEntity) {
		return ((R (*)(void *, UIWindowsManager*, DialogueEntity*))(Il2CppBase() + 0x157951C))(0, manager, dialogueEntity);
	}

};

