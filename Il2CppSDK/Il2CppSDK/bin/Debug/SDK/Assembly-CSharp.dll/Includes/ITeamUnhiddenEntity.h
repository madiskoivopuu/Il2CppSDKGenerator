#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITeamUnhiddenEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITeamUnhiddenEntity"));
	}


	template <typename T = TeamUnhiddenComponent*> T get_teamUnhidden() {
		return ((T (*)(ITeamUnhiddenEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasTeamUnhidden() {
		return ((T (*)(ITeamUnhiddenEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddTeamUnhidden(HashSet1int64_t>* newTeams) {
		return ((T (*)(ITeamUnhiddenEntity*, HashSet1int64_t>*))(Il2CppBase() + 0x0))(this, newTeams);
	}
	template <typename T = void> T ReplaceTeamUnhidden(HashSet1int64_t>* newTeams) {
		return ((T (*)(ITeamUnhiddenEntity*, HashSet1int64_t>*))(Il2CppBase() + 0x0))(this, newTeams);
	}
	template <typename T = void> T RemoveTeamUnhidden() {
		return ((T (*)(ITeamUnhiddenEntity*))(Il2CppBase() + 0x0))(this);
	}

};

