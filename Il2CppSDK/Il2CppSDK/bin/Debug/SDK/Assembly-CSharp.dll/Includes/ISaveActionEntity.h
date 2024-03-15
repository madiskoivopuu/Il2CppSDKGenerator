#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISaveActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISaveActionEntity"));
	}


	template <typename R = SaveActionComponent*> R get_saveAction() {
		return ((R (*)(ISaveActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasSaveAction() {
		return ((R (*)(ISaveActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSaveAction(Il2CppString* newName, Il2CppString* newItem, Il2CppString* newSaveEffect, bool newLeaveOnDeath) {
		return ((R (*)(ISaveActionEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, newName, newItem, newSaveEffect, newLeaveOnDeath);
	}
	template <typename R = void> R ReplaceSaveAction(Il2CppString* newName, Il2CppString* newItem, Il2CppString* newSaveEffect, bool newLeaveOnDeath) {
		return ((R (*)(ISaveActionEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, newName, newItem, newSaveEffect, newLeaveOnDeath);
	}
	template <typename R = void> R RemoveSaveAction() {
		return ((R (*)(ISaveActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

