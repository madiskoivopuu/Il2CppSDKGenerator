#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyStartDialogueEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyStartDialogueEntity"));
	}


	template <typename R = ApplyStartDialogueComponent*> R get_applyStartDialogue() {
		return ((R (*)(IApplyStartDialogueEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasApplyStartDialogue() {
		return ((R (*)(IApplyStartDialogueEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddApplyStartDialogue(Il2CppString* newName) {
		return ((R (*)(IApplyStartDialogueEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceApplyStartDialogue(Il2CppString* newName) {
		return ((R (*)(IApplyStartDialogueEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveApplyStartDialogue() {
		return ((R (*)(IApplyStartDialogueEntity*))(Il2CppBase() + 0x0))(this);
	}

};

