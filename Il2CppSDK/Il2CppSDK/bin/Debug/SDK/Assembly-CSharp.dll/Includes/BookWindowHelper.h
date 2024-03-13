#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BookWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BookWindowHelper"));
	}


	template <typename T = BookWindow*> static T ShowBookWindow(UIWindowsManager* manager, int32_t targetId, Il2CppString* blueprintName) {
		return ((T (*)(void *, UIWindowsManager*, int32_t, Il2CppString*))(Il2CppBase() + 0x16C91D0))(0, manager, targetId, blueprintName);
	}
	template <typename T = BookWindow*> static T ShowBookWindow_1(UIWindowsManager* manager, DialogueEntity* dialogueEntity) {
		return ((T (*)(void *, UIWindowsManager*, DialogueEntity*))(Il2CppBase() + 0x16C9280))(0, manager, dialogueEntity);
	}
	template <typename T = bool> static T CloseBookWindow(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x16C93D8))(0, manager, targetId);
	}

};

