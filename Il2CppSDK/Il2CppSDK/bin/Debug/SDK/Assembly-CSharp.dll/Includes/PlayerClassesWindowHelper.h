#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerClassesWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassesWindowHelper"));
	}


	template <typename R = PlayerClassesWindow*> static R GetPlayerClasses(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x15600EC))(0, manager);
	}
	template <typename R = PlayerClassesWindow*> static R ShowPlayerClasses(UIWindowsManager* manager, bool main) {
		return ((R (*)(void *, UIWindowsManager*, bool))(Il2CppBase() + 0x156021C))(0, manager, main);
	}
	template <typename R = PlayerClassesWindow*> static R ShowSelectPlayerClass(UIWindowsManager* manager, Il2CppString* current, PlayerClassProgress selectType, Action1<Il2CppString*>* callback) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*, PlayerClassProgress, Action1<Il2CppString*>*))(Il2CppBase() + 0x1560360))(0, manager, current, selectType, callback);
	}

};

