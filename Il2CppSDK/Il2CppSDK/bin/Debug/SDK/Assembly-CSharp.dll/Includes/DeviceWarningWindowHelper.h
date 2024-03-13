#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DeviceWarningWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeviceWarningWindowHelper"));
	}


	template <typename T = DeviceWarningWindow*> static T ShowDeviceWarning(UIWindowsManager* manager, uintptr_t onClose) {
		return ((T (*)(void *, UIWindowsManager*, uintptr_t))(Il2CppBase() + 0xEC273C))(0, manager, onClose);
	}

};

