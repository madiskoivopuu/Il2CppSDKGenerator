#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BackgroundWindowContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BackgroundWindowContext"));
	}


	template <typename R = UIWindowType> R get_WindowType() {
		return ((R (*)(BackgroundWindowContext*))(Il2CppBase() + 0xEE23B4))(this);
	}
	template <typename R = UIWindowsLayerType> R get_LayerType() {
		return ((R (*)(BackgroundWindowContext*))(Il2CppBase() + 0xEE23BC))(this);
	}

};

