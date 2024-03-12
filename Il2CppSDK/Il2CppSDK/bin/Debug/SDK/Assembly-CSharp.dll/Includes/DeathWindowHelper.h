#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DeathWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeathWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowDeath(uintptr_t manager, uintptr_t type, Il2CppString* name, int64_t timeOut) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, int64_t))(Il2CppBase() + 0xEB5BA0))(0, manager, type, name, timeOut);
	}

};

}
