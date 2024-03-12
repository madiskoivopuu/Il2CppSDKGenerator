#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyQuestSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyQuestSystem"));
	}


	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(DestroyQuestSystem*, void*))(Il2CppBase() + 0xEBEDC4))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t quest) {
		return ((T (*)(DestroyQuestSystem*, uintptr_t))(Il2CppBase() + 0xEBEE90))(this, quest);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* quests) {
		return ((T (*)(DestroyQuestSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0xEBEEBC))(this, quests);
	}

};

}
