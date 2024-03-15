#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OccupationChoiceWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OccupationChoiceWindowHelper"));
	}


	template <typename R = OccupationChoiceWindow*> static R ShowOccupationChoice(UIWindowsManager* manager, DialogueEntity* dialogueEntity) {
		return ((R (*)(void *, UIWindowsManager*, DialogueEntity*))(Il2CppBase() + 0x11D5B04))(0, manager, dialogueEntity);
	}

};

