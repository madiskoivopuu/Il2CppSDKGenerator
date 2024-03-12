#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationFarmWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationFarmWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowLocationFarmWindow(uintptr_t manager, uintptr_t transaction) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x17B1F84))(0, manager, transaction);
	}

};

}
