#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyDialogueSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyDialogueSystem"));
	}

	template <typename T = ICommonContexts*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1DialogueEntity*>*> T GetTrigger(IContext1DialogueEntity*>* context) {
		return ((T (*)(DestroyDialogueSystem*, IContext1DialogueEntity*>*))(Il2CppBase() + 0xEBC7F4))(this, context);
	}
	template <typename T = bool> T Filter(DialogueEntity* dialogue) {
		return ((T (*)(DestroyDialogueSystem*, DialogueEntity*))(Il2CppBase() + 0xEBC8C0))(this, dialogue);
	}
	template <typename T = void> T Execute(Il2CppList<DialogueEntity*>* dialogues) {
		return ((T (*)(DestroyDialogueSystem*, Il2CppList<DialogueEntity*>*))(Il2CppBase() + 0xEBC8FC))(this, dialogues);
	}

};

