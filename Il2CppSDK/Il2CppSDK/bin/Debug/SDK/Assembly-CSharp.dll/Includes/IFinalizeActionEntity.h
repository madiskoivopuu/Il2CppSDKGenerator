#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IFinalizeActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IFinalizeActionEntity"));
	}


	template <typename T = FinalizeActionComponent*> T get_finalizeAction() {
		return ((T (*)(IFinalizeActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasFinalizeAction() {
		return ((T (*)(IFinalizeActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddFinalizeAction(Il2CppString* newName) {
		return ((T (*)(IFinalizeActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceFinalizeAction(Il2CppString* newName) {
		return ((T (*)(IFinalizeActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveFinalizeAction() {
		return ((T (*)(IFinalizeActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

