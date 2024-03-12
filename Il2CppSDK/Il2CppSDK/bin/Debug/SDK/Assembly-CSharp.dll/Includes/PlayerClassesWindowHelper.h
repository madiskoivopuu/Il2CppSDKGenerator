#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerClassesWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassesWindowHelper"));
	}


	template <typename T = uintptr_t> static T GetPlayerClasses(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15600EC))(0, manager);
	}
	template <typename T = uintptr_t> static T ShowPlayerClasses(uintptr_t manager, bool main) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x156021C))(0, manager, main);
	}
	template <typename T = uintptr_t> static T ShowSelectPlayerClass(uintptr_t manager, Il2CppString* current, uintptr_t selectType, void* callback) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, void*))(Il2CppBase() + 0x1560360))(0, manager, current, selectType, callback);
	}

};

}
