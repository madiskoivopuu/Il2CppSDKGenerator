#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationCustomModeWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationCustomModeWindowHelper"));
	}


	template <typename R = LocationCustomModeWindow*> static R ShowLocationCustomMode(UIWindowsManager* manager, Il2CppString* pointName) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x17A6708))(0, manager, pointName);
	}
	template <typename R = void> static R OnLocationResetResponse(UIWindowsManager* manager, LocationResetResponseData* response) {
		return ((R (*)(void *, UIWindowsManager*, LocationResetResponseData*))(Il2CppBase() + 0x17A67D4))(0, manager, response);
	}

};

