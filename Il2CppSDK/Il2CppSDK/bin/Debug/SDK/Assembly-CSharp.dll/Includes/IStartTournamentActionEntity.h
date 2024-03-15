#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IStartTournamentActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStartTournamentActionEntity"));
	}


	template <typename R = StartTournamentActionComponent*> R get_startTournamentAction() {
		return ((R (*)(IStartTournamentActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasStartTournamentAction() {
		return ((R (*)(IStartTournamentActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddStartTournamentAction(Il2CppString* newName) {
		return ((R (*)(IStartTournamentActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceStartTournamentAction(Il2CppString* newName) {
		return ((R (*)(IStartTournamentActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveStartTournamentAction() {
		return ((R (*)(IStartTournamentActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

