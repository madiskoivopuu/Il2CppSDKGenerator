#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NoteWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NoteWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowNoteWindow(uintptr_t manager, Il2CppString* blueprintName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x13B7EC4))(0, manager, blueprintName);
	}
	template <typename T = uintptr_t> static T GetNoteWindow(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x13B8010))(0, manager);
	}
	template <typename T = uintptr_t> static T ShowNoteWindow_1(uintptr_t manager, uintptr_t dialogueEntity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x13B8084))(0, manager, dialogueEntity);
	}
	template <typename T = uintptr_t> static T ShowNoteWindow_2(uintptr_t manager, uintptr_t supportMail) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x13B81A4))(0, manager, supportMail);
	}

};

}
