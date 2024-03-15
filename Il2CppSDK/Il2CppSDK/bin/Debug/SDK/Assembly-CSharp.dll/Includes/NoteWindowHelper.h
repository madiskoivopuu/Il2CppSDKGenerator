#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NoteWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NoteWindowHelper"));
	}


	template <typename R = NoteWindow*> static R ShowNoteWindow(UIWindowsManager* manager, Il2CppString* blueprintName) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x13B7EC4))(0, manager, blueprintName);
	}
	template <typename R = NoteWindow*> static R GetNoteWindow(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x13B8010))(0, manager);
	}
	template <typename R = NoteWindow*> static R ShowNoteWindow_1(UIWindowsManager* manager, DialogueEntity* dialogueEntity) {
		return ((R (*)(void *, UIWindowsManager*, DialogueEntity*))(Il2CppBase() + 0x13B8084))(0, manager, dialogueEntity);
	}
	template <typename R = NoteWindow*> static R ShowNoteWindow_2(UIWindowsManager* manager, MailEntity* supportMail) {
		return ((R (*)(void *, UIWindowsManager*, MailEntity*))(Il2CppBase() + 0x13B81A4))(0, manager, supportMail);
	}

};

