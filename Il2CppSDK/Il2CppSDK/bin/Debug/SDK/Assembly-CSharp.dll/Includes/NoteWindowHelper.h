#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NoteWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NoteWindowHelper"));
	}


	template <typename T = NoteWindow*> static T ShowNoteWindow(UIWindowsManager* manager, Il2CppString* blueprintName) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x13B7EC4))(0, manager, blueprintName);
	}
	template <typename T = NoteWindow*> static T GetNoteWindow(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x13B8010))(0, manager);
	}
	template <typename T = NoteWindow*> static T ShowNoteWindow_1(UIWindowsManager* manager, DialogueEntity* dialogueEntity) {
		return ((T (*)(void *, UIWindowsManager*, DialogueEntity*))(Il2CppBase() + 0x13B8084))(0, manager, dialogueEntity);
	}
	template <typename T = NoteWindow*> static T ShowNoteWindow_2(UIWindowsManager* manager, MailEntity* supportMail) {
		return ((T (*)(void *, UIWindowsManager*, MailEntity*))(Il2CppBase() + 0x13B81A4))(0, manager, supportMail);
	}

};

