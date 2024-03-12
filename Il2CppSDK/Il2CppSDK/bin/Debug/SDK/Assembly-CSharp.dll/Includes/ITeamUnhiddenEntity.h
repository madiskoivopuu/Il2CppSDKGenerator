#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITeamUnhiddenEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITeamUnhiddenEntity"));
	}


	template <typename T = uintptr_t> T get_teamUnhidden() {
		return ((T (*)(ITeamUnhiddenEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasTeamUnhidden() {
		return ((T (*)(ITeamUnhiddenEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddTeamUnhidden(void* newTeams) {
		return ((T (*)(ITeamUnhiddenEntity*, void*))(Il2CppBase() + 0x0))(this, newTeams);
	}
	template <typename T = void> T ReplaceTeamUnhidden(void* newTeams) {
		return ((T (*)(ITeamUnhiddenEntity*, void*))(Il2CppBase() + 0x0))(this, newTeams);
	}
	template <typename T = void> T RemoveTeamUnhidden() {
		return ((T (*)(ITeamUnhiddenEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
