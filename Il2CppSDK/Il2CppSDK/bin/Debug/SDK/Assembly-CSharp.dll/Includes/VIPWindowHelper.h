#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VIPWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPWindowHelper"));
	}


	template <typename T = VIPWindow*> static T ShowVIP(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x15C38F0))(0, manager);
	}
	template <typename T = void> static T UpdateVIP(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x15C3988))(0, manager);
	}

};

