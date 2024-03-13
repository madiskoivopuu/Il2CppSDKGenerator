#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExpeditionWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExpeditionWindowHelper"));
	}


	template <typename T = ExpeditionWindow*> static T ShowExpedition(UIWindowsManager* manager, DialogueEntity* dialogueEntity) {
		return ((T (*)(void *, UIWindowsManager*, DialogueEntity*))(Il2CppBase() + 0x16849D8))(0, manager, dialogueEntity);
	}

};

