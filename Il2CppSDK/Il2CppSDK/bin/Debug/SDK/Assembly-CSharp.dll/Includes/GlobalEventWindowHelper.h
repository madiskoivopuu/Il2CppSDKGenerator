#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GlobalEventWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GlobalEventWindowHelper"));
	}


	template <typename R = GlobalEventWindow*> static R GetGlobalEvent(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1774E8C))(0, manager);
	}
	template <typename R = GlobalEventWindow*> static R ShowGlobalEvent(UIWindowsManager* manager, DialogueEntity* dialogue) {
		return ((R (*)(void *, UIWindowsManager*, DialogueEntity*))(Il2CppBase() + 0x1774F00))(0, manager, dialogue);
	}

};

