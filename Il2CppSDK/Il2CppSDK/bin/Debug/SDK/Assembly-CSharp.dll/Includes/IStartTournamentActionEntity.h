#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStartTournamentActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStartTournamentActionEntity"));
	}


	template <typename T = StartTournamentActionComponent*> T get_startTournamentAction() {
		return ((T (*)(IStartTournamentActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasStartTournamentAction() {
		return ((T (*)(IStartTournamentActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddStartTournamentAction(Il2CppString* newName) {
		return ((T (*)(IStartTournamentActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceStartTournamentAction(Il2CppString* newName) {
		return ((T (*)(IStartTournamentActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveStartTournamentAction() {
		return ((T (*)(IStartTournamentActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

