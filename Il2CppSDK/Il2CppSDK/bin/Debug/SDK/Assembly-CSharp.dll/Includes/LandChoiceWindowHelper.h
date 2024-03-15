#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LandChoiceWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LandChoiceWindowHelper"));
	}


	template <typename R = LandChoiceWindow*> static R ShowLandChoice(UIWindowsManager* manager, DialogueEntity* dialogueEntity) {
		return ((R (*)(void *, UIWindowsManager*, DialogueEntity*))(Il2CppBase() + 0x1429344))(0, manager, dialogueEntity);
	}

};

