#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CloseDialogueWindowSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CloseDialogueWindowSystem"));
	}

	template <typename R = ICommonUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1DialogueEntity*>* GetTrigger(IContext1DialogueEntity*>* context) {
		return ((ICollector1DialogueEntity*>* (*)(CloseDialogueWindowSystem*, IContext1DialogueEntity*>*))(Il2CppBase() + 0xE22FFC))(this, context);
	}
	template <typename R = bool> R Filter(DialogueEntity* dialogue) {
		return ((R (*)(CloseDialogueWindowSystem*, DialogueEntity*))(Il2CppBase() + 0xE230C8))(this, dialogue);
	}
	template <typename R = void> R Execute(Il2CppList<DialogueEntity*>* dialogues) {
		return ((R (*)(CloseDialogueWindowSystem*, Il2CppList<DialogueEntity*>*))(Il2CppBase() + 0xE23114))(this, dialogues);
	}
	template <typename R = bool> R SkipCloseWindowForDialogue(DialogueEntity* dialogue) {
		return ((R (*)(CloseDialogueWindowSystem*, DialogueEntity*))(Il2CppBase() + 0xE233A0))(this, dialogue);
	}

};

