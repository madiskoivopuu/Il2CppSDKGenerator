#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITeamEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITeamEntity"));
	}


	template <typename R = TeamComponent*> R get_team() {
		return ((R (*)(ITeamEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasTeam() {
		return ((R (*)(ITeamEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddTeam(uint8_t newId, bool newSource, Il2CppString* newRandomByTag, HashSet1int64_t>* newClanIds) {
		return ((R (*)(ITeamEntity*, uint8_t, bool, Il2CppString*, HashSet1int64_t>*))(Il2CppBase() + 0x0))(this, newId, newSource, newRandomByTag, newClanIds);
	}
	template <typename R = void> R ReplaceTeam(uint8_t newId, bool newSource, Il2CppString* newRandomByTag, HashSet1int64_t>* newClanIds) {
		return ((R (*)(ITeamEntity*, uint8_t, bool, Il2CppString*, HashSet1int64_t>*))(Il2CppBase() + 0x0))(this, newId, newSource, newRandomByTag, newClanIds);
	}
	template <typename R = void> R RemoveTeam() {
		return ((R (*)(ITeamEntity*))(Il2CppBase() + 0x0))(this);
	}

};

