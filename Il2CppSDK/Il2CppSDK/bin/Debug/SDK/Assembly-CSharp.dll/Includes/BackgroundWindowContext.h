#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BackgroundWindowContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BackgroundWindowContext"));
	}


	template <typename T = UIWindowType*> T get_WindowType() {
		return ((T (*)(BackgroundWindowContext*))(Il2CppBase() + 0xEE23B4))(this);
	}
	template <typename T = UIWindowsLayerType*> T get_LayerType() {
		return ((T (*)(BackgroundWindowContext*))(Il2CppBase() + 0xEE23BC))(this);
	}

};

