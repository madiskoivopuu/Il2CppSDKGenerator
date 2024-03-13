#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationCustomModeWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationCustomModeWindowHelper"));
	}


	template <typename T = LocationCustomModeWindow*> static T ShowLocationCustomMode(UIWindowsManager* manager, Il2CppString* pointName) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x17A6708))(0, manager, pointName);
	}
	template <typename T = void> static T OnLocationResetResponse(UIWindowsManager* manager, LocationResetResponseData* response) {
		return ((T (*)(void *, UIWindowsManager*, LocationResetResponseData*))(Il2CppBase() + 0x17A67D4))(0, manager, response);
	}

};

