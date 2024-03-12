#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUIWindowContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUIWindowContext"));
	}


	template <typename T = uintptr_t> T get_WindowType() {
		return ((T (*)(IUIWindowContext*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_LayerType() {
		return ((T (*)(IUIWindowContext*))(Il2CppBase() + 0x0))(this);
	}

};

}
