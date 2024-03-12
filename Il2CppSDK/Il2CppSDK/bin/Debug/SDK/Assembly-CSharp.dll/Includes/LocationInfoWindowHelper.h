#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationInfoWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationInfoWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowLocationWindow(uintptr_t manager, Il2CppString* pointName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x17B4010))(0, manager, pointName);
	}

};

}
