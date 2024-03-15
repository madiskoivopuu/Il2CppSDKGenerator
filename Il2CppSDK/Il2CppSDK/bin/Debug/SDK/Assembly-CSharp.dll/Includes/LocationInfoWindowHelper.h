#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationInfoWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationInfoWindowHelper"));
	}


	template <typename R = LocationWindow*> static R ShowLocationWindow(UIWindowsManager* manager, Il2CppString* pointName) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x17B4010))(0, manager, pointName);
	}

};

