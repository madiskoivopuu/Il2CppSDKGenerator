#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DialogueWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogueWindowHelper"));
	}


	template <typename R = DialogueWindow*> static R GetDialogueWindow(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x12FA114))(0, manager);
	}
	template <typename R = DialogueWindow*> static R ShowDialogue(UIWindowsManager* manager, DialogueEntity* dialogue) {
		return ((R (*)(void *, UIWindowsManager*, DialogueEntity*))(Il2CppBase() + 0x12FA188))(0, manager, dialogue);
	}

};

