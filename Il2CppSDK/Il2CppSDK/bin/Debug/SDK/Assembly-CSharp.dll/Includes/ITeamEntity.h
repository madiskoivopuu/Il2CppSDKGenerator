#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITeamEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITeamEntity"));
	}


	template <typename T = TeamComponent*> T get_team() {
		return ((T (*)(ITeamEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasTeam() {
		return ((T (*)(ITeamEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddTeam(uint8_t newId, bool newSource, Il2CppString* newRandomByTag, HashSet1int64_t>* newClanIds) {
		return ((T (*)(ITeamEntity*, uint8_t, bool, Il2CppString*, HashSet1int64_t>*))(Il2CppBase() + 0x0))(this, newId, newSource, newRandomByTag, newClanIds);
	}
	template <typename T = void> T ReplaceTeam(uint8_t newId, bool newSource, Il2CppString* newRandomByTag, HashSet1int64_t>* newClanIds) {
		return ((T (*)(ITeamEntity*, uint8_t, bool, Il2CppString*, HashSet1int64_t>*))(Il2CppBase() + 0x0))(this, newId, newSource, newRandomByTag, newClanIds);
	}
	template <typename T = void> T RemoveTeam() {
		return ((T (*)(ITeamEntity*))(Il2CppBase() + 0x0))(this);
	}

};

