#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TavernBoardWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TavernBoardWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowTavernBoard(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x16AC588))(0, manager, targetId);
	}
	template <typename T = uintptr_t> static T ShowTavernBoard_1(uintptr_t manager, uintptr_t dialogueEntity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16AC634))(0, manager, dialogueEntity);
	}
	template <typename T = uintptr_t> static T GetTavernBoard(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16AC774))(0, manager);
	}
	template <typename T = bool> static T CloseTavernBoard(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x16AC7E8))(0, manager, targetId);
	}

};

}
