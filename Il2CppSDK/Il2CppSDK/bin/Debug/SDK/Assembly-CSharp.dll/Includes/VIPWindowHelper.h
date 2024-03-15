#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VIPWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPWindowHelper"));
	}


	template <typename R = VIPWindow*> static R ShowVIP(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x15C38F0))(0, manager);
	}
	template <typename R = void> static R UpdateVIP(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x15C3988))(0, manager);
	}

};

