#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DataContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DataContext"));
	}


	template <typename R = UIWindowType*> R get_WindowType() {
		return ((R (*)(DataContext*))(Il2CppBase() + 0x1138FD0))(this);
	}
	template <typename R = UIWindowsLayerType*> R get_LayerType() {
		return ((R (*)(DataContext*))(Il2CppBase() + 0x1138FD8))(this);
	}

};

