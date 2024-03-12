#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapQuestLocationWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapQuestLocationWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowMapQuestLocationWindow(uintptr_t manager, Il2CppString* questName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x12C402C))(0, manager, questName);
	}
	template <typename T = uintptr_t> static T ShowMapQuestLocationWindow_1(uintptr_t manager, Il2CppString* tempBuffLookup, Il2CppString* iconName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x12C4140))(0, manager, tempBuffLookup, iconName);
	}

};

}
