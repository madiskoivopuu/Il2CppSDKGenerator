#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftsmanWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftsmanWindowHelper"));
	}


	template <typename T = CraftsmanWindow*> static T ShowCraftsmanWindow(UIWindowsManager* manager, DialogueEntity* dialogueEntity) {
		return ((T (*)(void *, UIWindowsManager*, DialogueEntity*))(Il2CppBase() + 0x134A290))(0, manager, dialogueEntity);
	}

};

