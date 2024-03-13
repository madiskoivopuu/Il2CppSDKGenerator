#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationHubEnterWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationHubEnterWindowHelper"));
	}


	template <typename T = LocationHubEnterWindow*> static T ShowLocationHubEnter(UIWindowsManager* manager, Il2CppString* pointName) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x17B3F68))(0, manager, pointName);
	}

};

