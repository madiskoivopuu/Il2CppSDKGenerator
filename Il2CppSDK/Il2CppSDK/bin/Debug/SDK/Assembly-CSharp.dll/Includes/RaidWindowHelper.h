#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RaidWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RaidWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowRaid(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1710BE4))(0, manager);
	}

};

}
