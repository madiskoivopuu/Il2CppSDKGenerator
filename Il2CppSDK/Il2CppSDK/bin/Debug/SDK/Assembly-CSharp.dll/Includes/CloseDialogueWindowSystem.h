#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CloseDialogueWindowSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CloseDialogueWindowSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(CloseDialogueWindowSystem*, void*))(Il2CppBase() + 0xE22FFC))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t dialogue) {
		return ((T (*)(CloseDialogueWindowSystem*, uintptr_t))(Il2CppBase() + 0xE230C8))(this, dialogue);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* dialogues) {
		return ((T (*)(CloseDialogueWindowSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0xE23114))(this, dialogues);
	}
	template <typename T = bool> T SkipCloseWindowForDialogue(uintptr_t dialogue) {
		return ((T (*)(CloseDialogueWindowSystem*, uintptr_t))(Il2CppBase() + 0xE233A0))(this, dialogue);
	}

};

}
