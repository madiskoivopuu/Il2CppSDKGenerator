#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerClassesWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassesWindowHelper"));
	}


	template <typename T = PlayerClassesWindow*> static T GetPlayerClasses(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x15600EC))(0, manager);
	}
	template <typename T = PlayerClassesWindow*> static T ShowPlayerClasses(UIWindowsManager* manager, bool main) {
		return ((T (*)(void *, UIWindowsManager*, bool))(Il2CppBase() + 0x156021C))(0, manager, main);
	}
	template <typename T = PlayerClassesWindow*> static T ShowSelectPlayerClass(UIWindowsManager* manager, Il2CppString* current, PlayerClassProgress* selectType, Action1Il2CppString*>* callback) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, PlayerClassProgress*, Action1Il2CppString*>*))(Il2CppBase() + 0x1560360))(0, manager, current, selectType, callback);
	}

};

