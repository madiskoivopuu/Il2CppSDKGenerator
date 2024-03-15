#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITeamUnhiddenEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITeamUnhiddenEntity"));
	}


	template <typename R = TeamUnhiddenComponent*> R get_teamUnhidden() {
		return ((R (*)(ITeamUnhiddenEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasTeamUnhidden() {
		return ((R (*)(ITeamUnhiddenEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddTeamUnhidden(HashSet1<int64_t>* newTeams) {
		return ((R (*)(ITeamUnhiddenEntity*, HashSet1<int64_t>*))(Il2CppBase() + 0x0))(this, newTeams);
	}
	template <typename R = void> R ReplaceTeamUnhidden(HashSet1<int64_t>* newTeams) {
		return ((R (*)(ITeamUnhiddenEntity*, HashSet1<int64_t>*))(Il2CppBase() + 0x0))(this, newTeams);
	}
	template <typename R = void> R RemoveTeamUnhidden() {
		return ((R (*)(ITeamUnhiddenEntity*))(Il2CppBase() + 0x0))(this);
	}

};

