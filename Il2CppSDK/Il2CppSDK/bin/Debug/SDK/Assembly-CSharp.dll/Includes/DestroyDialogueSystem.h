#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyDialogueSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyDialogueSystem"));
	}

	template <typename R = ICommonContexts*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1DialogueEntity*>* GetTrigger(IContext1DialogueEntity*>* context) {
		return ((ICollector1DialogueEntity*>* (*)(DestroyDialogueSystem*, IContext1DialogueEntity*>*))(Il2CppBase() + 0xEBC7F4))(this, context);
	}
	template <typename R = bool> R Filter(DialogueEntity* dialogue) {
		return ((R (*)(DestroyDialogueSystem*, DialogueEntity*))(Il2CppBase() + 0xEBC8C0))(this, dialogue);
	}
	template <typename R = void> R Execute(Il2CppList<DialogueEntity*>* dialogues) {
		return ((R (*)(DestroyDialogueSystem*, Il2CppList<DialogueEntity*>*))(Il2CppBase() + 0xEBC8FC))(this, dialogues);
	}

};

