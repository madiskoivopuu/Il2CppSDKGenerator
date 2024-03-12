#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyDialogueSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyDialogueSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(DestroyDialogueSystem*, void*))(Il2CppBase() + 0xEBC7F4))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t dialogue) {
		return ((T (*)(DestroyDialogueSystem*, uintptr_t))(Il2CppBase() + 0xEBC8C0))(this, dialogue);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* dialogues) {
		return ((T (*)(DestroyDialogueSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0xEBC8FC))(this, dialogues);
	}

};

}
