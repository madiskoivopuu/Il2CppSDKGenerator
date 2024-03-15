#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUIWindowContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUIWindowContext"));
	}


	template <typename R = UIWindowType*> R get_WindowType() {
		return ((R (*)(IUIWindowContext*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = UIWindowsLayerType*> R get_LayerType() {
		return ((R (*)(IUIWindowContext*))(Il2CppBase() + 0x0))(this);
	}

};

