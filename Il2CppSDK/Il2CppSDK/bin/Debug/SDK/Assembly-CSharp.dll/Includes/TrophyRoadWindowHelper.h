#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TrophyRoadWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrophyRoadWindowHelper"));
	}


	template <typename R = TrophyRoadWindow*> static R ShowTrophyRoad(UIWindowsManager* manager, DialogueEntity* dialogueEntity) {
		return ((R (*)(void *, UIWindowsManager*, DialogueEntity*))(Il2CppBase() + 0x102C010))(0, manager, dialogueEntity);
	}
	template <typename R = TrophyRoadWindow*> static R GetTrophyRoad(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x102C130))(0, manager);
	}

};

