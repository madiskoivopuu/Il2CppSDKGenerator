#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PortalsLeagueWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalsLeagueWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowPortalsLeague(uintptr_t manager, uintptr_t dialogueEntity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x157951C))(0, manager, dialogueEntity);
	}

};

}
