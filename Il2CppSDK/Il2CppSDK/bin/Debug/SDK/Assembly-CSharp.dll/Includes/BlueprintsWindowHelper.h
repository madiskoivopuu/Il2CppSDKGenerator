#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BlueprintsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlueprintsWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowBlueprints(uintptr_t manager, Il2CppString* craftType, Il2CppString* initialSelectionName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16C6EBC))(0, manager, craftType, initialSelectionName);
	}
	template <typename T = uintptr_t> static T ShowBlueprintsWindow(uintptr_t manager, Il2CppString* craftType, uintptr_t dialogueEntity) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x16C6FA4))(0, manager, craftType, dialogueEntity);
	}

};

}
