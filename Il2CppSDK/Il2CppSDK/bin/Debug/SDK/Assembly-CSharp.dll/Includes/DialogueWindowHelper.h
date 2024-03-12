#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DialogueWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogueWindowHelper"));
	}


	template <typename T = uintptr_t> static T GetDialogueWindow(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12FA114))(0, manager);
	}
	template <typename T = uintptr_t> static T ShowDialogue(uintptr_t manager, uintptr_t dialogue) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x12FA188))(0, manager, dialogue);
	}

};

}
