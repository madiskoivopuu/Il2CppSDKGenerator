#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDiplomacyManagementActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDiplomacyManagementActionEntity"));
	}


	template <typename T = uintptr_t> T get_diplomacyManagementAction() {
		return ((T (*)(IDiplomacyManagementActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDiplomacyManagementAction() {
		return ((T (*)(IDiplomacyManagementActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDiplomacyManagementAction(Il2CppString* newName) {
		return ((T (*)(IDiplomacyManagementActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceDiplomacyManagementAction(Il2CppString* newName) {
		return ((T (*)(IDiplomacyManagementActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveDiplomacyManagementAction() {
		return ((T (*)(IDiplomacyManagementActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
