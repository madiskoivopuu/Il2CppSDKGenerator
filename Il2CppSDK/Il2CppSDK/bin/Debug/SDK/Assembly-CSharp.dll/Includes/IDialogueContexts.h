#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDialogueContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDialogueContexts"));
	}


	template <typename T = DialogueDataContext*> T get_dialoguesData() {
		return ((T (*)(IDialogueContexts*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = DialogueContext*> T get_dialogues() {
		return ((T (*)(IDialogueContexts*))(Il2CppBase() + 0x0))(this);
	}

};

