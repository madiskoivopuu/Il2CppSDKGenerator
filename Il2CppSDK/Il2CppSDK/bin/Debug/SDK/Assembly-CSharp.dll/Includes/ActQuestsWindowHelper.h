#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActQuestsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActQuestsWindowHelper"));
	}


	template <typename T = void> static T ShowClaimQuestResult(uintptr_t manager, Il2CppString* questName, uintptr_t result) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x18F498C))(0, manager, questName, result);
	}
	template <typename T = uintptr_t> static T GetActQuests(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x18F4E20))(0, manager);
	}
	template <typename T = uintptr_t> static T GetOrShowActQuests(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x18F4EB8))(0, manager);
	}

};

}
