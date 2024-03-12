#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyStartDialogueEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyStartDialogueEntity"));
	}


	template <typename T = uintptr_t> T get_applyStartDialogue() {
		return ((T (*)(IApplyStartDialogueEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasApplyStartDialogue() {
		return ((T (*)(IApplyStartDialogueEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddApplyStartDialogue(Il2CppString* newName) {
		return ((T (*)(IApplyStartDialogueEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceApplyStartDialogue(Il2CppString* newName) {
		return ((T (*)(IApplyStartDialogueEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveApplyStartDialogue() {
		return ((T (*)(IApplyStartDialogueEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
