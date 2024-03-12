#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DeathRecapWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeathRecapWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowDeathRecap(uintptr_t manager, int64_t timeOut) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0xEB4694))(0, manager, timeOut);
	}

};

}
