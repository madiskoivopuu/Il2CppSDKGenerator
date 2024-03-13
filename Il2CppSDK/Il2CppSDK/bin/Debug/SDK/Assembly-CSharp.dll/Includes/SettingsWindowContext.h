#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SettingsWindowContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SettingsWindowContext"));
	}


	template <typename T = UIWindowType*> T get_WindowType() {
		return ((T (*)(SettingsWindowContext*))(Il2CppBase() + 0x10CB5E8))(this);
	}
	template <typename T = UIWindowsLayerType*> T get_LayerType() {
		return ((T (*)(SettingsWindowContext*))(Il2CppBase() + 0x10CB5F0))(this);
	}

};

