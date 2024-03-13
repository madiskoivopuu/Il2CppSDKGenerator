#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BlueprintsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlueprintsWindowHelper"));
	}


	template <typename T = BlueprintsWindow*> static T ShowBlueprints(UIWindowsManager* manager, Il2CppString* craftType, Il2CppString* initialSelectionName) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16C6EBC))(0, manager, craftType, initialSelectionName);
	}
	template <typename T = BlueprintsWindow*> static T ShowBlueprintsWindow(UIWindowsManager* manager, Il2CppString* craftType, DialogueEntity* dialogueEntity) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, DialogueEntity*))(Il2CppBase() + 0x16C6FA4))(0, manager, craftType, dialogueEntity);
	}

};

