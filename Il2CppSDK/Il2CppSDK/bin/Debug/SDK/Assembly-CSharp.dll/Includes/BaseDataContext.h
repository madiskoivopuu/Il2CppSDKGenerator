#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseDataContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseDataContext"));
	}


	template <typename T = UIWindowType*> T get_WindowType() {
		return ((T (*)(BaseDataContext*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = UIWindowsLayerType*> T get_LayerType() {
		return ((T (*)(BaseDataContext*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = GameEntity*> T get_Avatar() {
		return ((T (*)(BaseDataContext*))(Il2CppBase() + 0x0))(this);
	}

};

