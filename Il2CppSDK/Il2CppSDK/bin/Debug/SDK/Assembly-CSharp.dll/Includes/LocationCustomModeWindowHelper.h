#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationCustomModeWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationCustomModeWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowLocationCustomMode(uintptr_t manager, Il2CppString* pointName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x17A6708))(0, manager, pointName);
	}
	template <typename T = void> static T OnLocationResetResponse(uintptr_t manager, uintptr_t response) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x17A67D4))(0, manager, response);
	}

};

}
