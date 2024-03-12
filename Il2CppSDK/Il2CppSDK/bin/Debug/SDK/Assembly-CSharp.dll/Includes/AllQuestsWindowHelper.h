#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AllQuestsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AllQuestsWindowHelper"));
	}


	template <typename T = void> static T ShowClaimQuestResultNew(uintptr_t manager, Il2CppString* questName, uintptr_t result) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x129DC94))(0, manager, questName, result);
	}
	template <typename T = uintptr_t> static T GetAllQuests(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x129E234))(0, manager);
	}
	template <typename T = uintptr_t> static T GetOrShowAllQuests(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x129E2CC))(0, manager);
	}

};

}
