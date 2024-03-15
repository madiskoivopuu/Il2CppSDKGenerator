#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDialogueContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDialogueContexts"));
	}


	template <typename R = DialogueDataContext*> R get_dialoguesData() {
		return ((R (*)(IDialogueContexts*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = DialogueContext*> R get_dialogues() {
		return ((R (*)(IDialogueContexts*))(Il2CppBase() + 0x0))(this);
	}

};

