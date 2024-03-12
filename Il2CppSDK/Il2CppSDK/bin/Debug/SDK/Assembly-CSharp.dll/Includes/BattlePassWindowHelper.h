#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattlePassWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowBattlePass(uintptr_t manager, uintptr_t currencyType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16B7E9C))(0, manager, currencyType);
	}
	template <typename T = uintptr_t> static T ShowBattlePass_1(uintptr_t manager, uintptr_t dialogueEntity, uintptr_t currencyType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x16B7F70))(0, manager, dialogueEntity, currencyType);
	}
	template <typename T = uintptr_t> static T ShowSeasonBattlePass(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16B80C0))(0, manager);
	}
	template <typename T = void> static T UpdateStatePrioritized(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16B81D0))(0, manager);
	}

};

}
