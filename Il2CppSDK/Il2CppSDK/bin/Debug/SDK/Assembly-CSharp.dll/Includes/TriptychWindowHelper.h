#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriptychWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriptychWindowHelper"));
	}


	template <typename R = TriptychWindow*> static R ShowTriptych(UIWindowsManager* manager, DialogueEntity* dialogueEntity) {
		return ((R (*)(void *, UIWindowsManager*, DialogueEntity*))(Il2CppBase() + 0x1527CBC))(0, manager, dialogueEntity);
	}

};

