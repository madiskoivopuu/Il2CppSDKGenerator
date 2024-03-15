#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SettingsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SettingsWindowHelper"));
	}


	template <typename R = SettingsWindow*> static R ShowSettings(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x162D6F0))(0, manager);
	}

};

