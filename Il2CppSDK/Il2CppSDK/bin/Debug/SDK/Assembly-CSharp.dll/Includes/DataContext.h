#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DataContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DataContext"));
	}


	template <typename T = UIWindowType*> T get_WindowType() {
		return ((T (*)(DataContext*))(Il2CppBase() + 0x1138FD0))(this);
	}
	template <typename T = UIWindowsLayerType*> T get_LayerType() {
		return ((T (*)(DataContext*))(Il2CppBase() + 0x1138FD8))(this);
	}

};

