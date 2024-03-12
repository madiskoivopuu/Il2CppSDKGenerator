#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowDialogueWindowSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowDialogueWindowSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(ShowDialogueWindowSystem*, void*))(Il2CppBase() + 0x1633300))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t dialogue) {
		return ((T (*)(ShowDialogueWindowSystem*, uintptr_t))(Il2CppBase() + 0x16333CC))(this, dialogue);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* dialogues) {
		return ((T (*)(ShowDialogueWindowSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1633418))(this, dialogues);
	}

};

}
