#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationInfoWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationInfoWindowHelper"));
	}


	template <typename T = LocationWindow*> static T ShowLocationWindow(UIWindowsManager* manager, Il2CppString* pointName) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x17B4010))(0, manager, pointName);
	}

};

