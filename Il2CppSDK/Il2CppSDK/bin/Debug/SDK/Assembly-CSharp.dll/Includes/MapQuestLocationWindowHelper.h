#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapQuestLocationWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapQuestLocationWindowHelper"));
	}


	template <typename R = MapQuestLocationWindow*> static R ShowMapQuestLocationWindow(UIWindowsManager* manager, Il2CppString* questName) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x12C402C))(0, manager, questName);
	}
	template <typename R = MapQuestLocationWindow*> static R ShowMapQuestLocationWindow_1(UIWindowsManager* manager, Il2CppString* tempBuffLookup, Il2CppString* iconName) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x12C4140))(0, manager, tempBuffLookup, iconName);
	}

};

