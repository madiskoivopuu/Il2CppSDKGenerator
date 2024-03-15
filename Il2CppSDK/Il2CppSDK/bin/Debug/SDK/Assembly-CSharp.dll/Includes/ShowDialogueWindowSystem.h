#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowDialogueWindowSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowDialogueWindowSystem"));
	}

	template <typename R = ICommonUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1<DialogueEntity*>* GetTrigger(IContext1<DialogueEntity*>* context) {
		return ((ICollector1<DialogueEntity*>* (*)(ShowDialogueWindowSystem*, IContext1<DialogueEntity*>*))(Il2CppBase() + 0x1633300))(this, context);
	}
	template <typename R = bool> R Filter(DialogueEntity* dialogue) {
		return ((R (*)(ShowDialogueWindowSystem*, DialogueEntity*))(Il2CppBase() + 0x16333CC))(this, dialogue);
	}
	template <typename R = void> R Execute(Il2CppList<DialogueEntity*>* dialogues) {
		return ((R (*)(ShowDialogueWindowSystem*, Il2CppList<DialogueEntity*>*))(Il2CppBase() + 0x1633418))(this, dialogues);
	}

};

