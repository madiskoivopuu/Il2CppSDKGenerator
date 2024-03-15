#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GoToCityWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GoToCityWindowHelper"));
	}


	template <typename R = GoToCityWindow*> static R ShowGoToCity(UIWindowsManager* manager, DialogueEntity* dialogueEntity) {
		return ((R (*)(void *, UIWindowsManager*, DialogueEntity*))(Il2CppBase() + 0x12DFE34))(0, manager, dialogueEntity);
	}

};

