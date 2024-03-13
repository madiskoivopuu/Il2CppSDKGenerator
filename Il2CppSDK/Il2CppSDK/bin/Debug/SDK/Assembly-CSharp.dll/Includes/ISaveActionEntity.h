#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISaveActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISaveActionEntity"));
	}


	template <typename T = SaveActionComponent*> T get_saveAction() {
		return ((T (*)(ISaveActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasSaveAction() {
		return ((T (*)(ISaveActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSaveAction(Il2CppString* newName, Il2CppString* newItem, Il2CppString* newSaveEffect, bool newLeaveOnDeath) {
		return ((T (*)(ISaveActionEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, newName, newItem, newSaveEffect, newLeaveOnDeath);
	}
	template <typename T = void> T ReplaceSaveAction(Il2CppString* newName, Il2CppString* newItem, Il2CppString* newSaveEffect, bool newLeaveOnDeath) {
		return ((T (*)(ISaveActionEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, newName, newItem, newSaveEffect, newLeaveOnDeath);
	}
	template <typename T = void> T RemoveSaveAction() {
		return ((T (*)(ISaveActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

