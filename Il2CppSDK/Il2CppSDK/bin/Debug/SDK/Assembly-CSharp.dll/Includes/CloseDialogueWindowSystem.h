#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CloseDialogueWindowSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CloseDialogueWindowSystem"));
	}

	template <typename T = ICommonUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1DialogueEntity*>*> T GetTrigger(IContext1DialogueEntity*>* context) {
		return ((T (*)(CloseDialogueWindowSystem*, IContext1DialogueEntity*>*))(Il2CppBase() + 0xE22FFC))(this, context);
	}
	template <typename T = bool> T Filter(DialogueEntity* dialogue) {
		return ((T (*)(CloseDialogueWindowSystem*, DialogueEntity*))(Il2CppBase() + 0xE230C8))(this, dialogue);
	}
	template <typename T = void> T Execute(Il2CppList<DialogueEntity*>* dialogues) {
		return ((T (*)(CloseDialogueWindowSystem*, Il2CppList<DialogueEntity*>*))(Il2CppBase() + 0xE23114))(this, dialogues);
	}
	template <typename T = bool> T SkipCloseWindowForDialogue(DialogueEntity* dialogue) {
		return ((T (*)(CloseDialogueWindowSystem*, DialogueEntity*))(Il2CppBase() + 0xE233A0))(this, dialogue);
	}

};

