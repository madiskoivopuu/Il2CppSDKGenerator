#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RegionAndTimeWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RegionAndTimeWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowInfo(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x139E038))(0, manager);
	}

};

}
