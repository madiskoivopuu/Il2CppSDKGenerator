#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GlobalEventWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GlobalEventWindowHelper"));
	}


	template <typename T = GlobalEventWindow*> static T GetGlobalEvent(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1774E8C))(0, manager);
	}
	template <typename T = GlobalEventWindow*> static T ShowGlobalEvent(UIWindowsManager* manager, DialogueEntity* dialogue) {
		return ((T (*)(void *, UIWindowsManager*, DialogueEntity*))(Il2CppBase() + 0x1774F00))(0, manager, dialogue);
	}

};

