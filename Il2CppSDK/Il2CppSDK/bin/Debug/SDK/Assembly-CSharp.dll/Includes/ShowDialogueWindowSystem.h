#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowDialogueWindowSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowDialogueWindowSystem"));
	}

	template <typename T = ICommonUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1DialogueEntity*>*> T GetTrigger(IContext1DialogueEntity*>* context) {
		return ((T (*)(ShowDialogueWindowSystem*, IContext1DialogueEntity*>*))(Il2CppBase() + 0x1633300))(this, context);
	}
	template <typename T = bool> T Filter(DialogueEntity* dialogue) {
		return ((T (*)(ShowDialogueWindowSystem*, DialogueEntity*))(Il2CppBase() + 0x16333CC))(this, dialogue);
	}
	template <typename T = void> T Execute(Il2CppList<DialogueEntity*>* dialogues) {
		return ((T (*)(ShowDialogueWindowSystem*, Il2CppList<DialogueEntity*>*))(Il2CppBase() + 0x1633418))(this, dialogues);
	}

};

