#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BookWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BookWindowHelper"));
	}


	template <typename R = BookWindow*> static R ShowBookWindow(UIWindowsManager* manager, int32_t targetId, Il2CppString* blueprintName) {
		return ((R (*)(void *, UIWindowsManager*, int32_t, Il2CppString*))(Il2CppBase() + 0x16C91D0))(0, manager, targetId, blueprintName);
	}
	template <typename R = BookWindow*> static R ShowBookWindow_1(UIWindowsManager* manager, DialogueEntity* dialogueEntity) {
		return ((R (*)(void *, UIWindowsManager*, DialogueEntity*))(Il2CppBase() + 0x16C9280))(0, manager, dialogueEntity);
	}
	template <typename R = bool> static R CloseBookWindow(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x16C93D8))(0, manager, targetId);
	}

};

