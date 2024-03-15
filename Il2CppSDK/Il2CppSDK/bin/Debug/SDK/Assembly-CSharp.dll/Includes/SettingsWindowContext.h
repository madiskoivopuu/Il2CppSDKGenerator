#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SettingsWindowContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SettingsWindowContext"));
	}


	template <typename R = UIWindowType*> R get_WindowType() {
		return ((R (*)(SettingsWindowContext*))(Il2CppBase() + 0x10CB5E8))(this);
	}
	template <typename R = UIWindowsLayerType*> R get_LayerType() {
		return ((R (*)(SettingsWindowContext*))(Il2CppBase() + 0x10CB5F0))(this);
	}

};

