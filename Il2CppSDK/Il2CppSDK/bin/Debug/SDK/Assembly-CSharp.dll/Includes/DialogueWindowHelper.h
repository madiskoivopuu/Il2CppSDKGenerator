#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DialogueWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogueWindowHelper"));
	}


	template <typename T = DialogueWindow*> static T GetDialogueWindow(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x12FA114))(0, manager);
	}
	template <typename T = DialogueWindow*> static T ShowDialogue(UIWindowsManager* manager, DialogueEntity* dialogue) {
		return ((T (*)(void *, UIWindowsManager*, DialogueEntity*))(Il2CppBase() + 0x12FA188))(0, manager, dialogue);
	}

};

