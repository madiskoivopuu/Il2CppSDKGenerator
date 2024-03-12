#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITeamEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITeamEntity"));
	}


	template <typename T = uintptr_t> T get_team() {
		return ((T (*)(ITeamEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasTeam() {
		return ((T (*)(ITeamEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddTeam(unsigned char newId, bool newSource, Il2CppString* newRandomByTag, void* newClanIds) {
		return ((T (*)(ITeamEntity*, unsigned char, bool, Il2CppString*, void*))(Il2CppBase() + 0x0))(this, newId, newSource, newRandomByTag, newClanIds);
	}
	template <typename T = void> T ReplaceTeam(unsigned char newId, bool newSource, Il2CppString* newRandomByTag, void* newClanIds) {
		return ((T (*)(ITeamEntity*, unsigned char, bool, Il2CppString*, void*))(Il2CppBase() + 0x0))(this, newId, newSource, newRandomByTag, newClanIds);
	}
	template <typename T = void> T RemoveTeam() {
		return ((T (*)(ITeamEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
