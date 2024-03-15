#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IFinalizeActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IFinalizeActionEntity"));
	}


	template <typename R = FinalizeActionComponent*> R get_finalizeAction() {
		return ((R (*)(IFinalizeActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasFinalizeAction() {
		return ((R (*)(IFinalizeActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddFinalizeAction(Il2CppString* newName) {
		return ((R (*)(IFinalizeActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceFinalizeAction(Il2CppString* newName) {
		return ((R (*)(IFinalizeActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveFinalizeAction() {
		return ((R (*)(IFinalizeActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

