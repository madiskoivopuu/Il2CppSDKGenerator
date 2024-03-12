#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BookWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BookWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowBookWindow(uintptr_t manager, int32_t targetId, Il2CppString* blueprintName) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0x16C91D0))(0, manager, targetId, blueprintName);
	}
	template <typename T = uintptr_t> static T ShowBookWindow_1(uintptr_t manager, uintptr_t dialogueEntity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16C9280))(0, manager, dialogueEntity);
	}
	template <typename T = bool> static T CloseBookWindow(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x16C93D8))(0, manager, targetId);
	}

};

}
