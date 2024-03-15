#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDiplomacyManagementActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDiplomacyManagementActionEntity"));
	}


	template <typename R = DiplomacyManagementActionComponent*> R get_diplomacyManagementAction() {
		return ((R (*)(IDiplomacyManagementActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDiplomacyManagementAction() {
		return ((R (*)(IDiplomacyManagementActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDiplomacyManagementAction(Il2CppString* newName) {
		return ((R (*)(IDiplomacyManagementActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceDiplomacyManagementAction(Il2CppString* newName) {
		return ((R (*)(IDiplomacyManagementActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveDiplomacyManagementAction() {
		return ((R (*)(IDiplomacyManagementActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

