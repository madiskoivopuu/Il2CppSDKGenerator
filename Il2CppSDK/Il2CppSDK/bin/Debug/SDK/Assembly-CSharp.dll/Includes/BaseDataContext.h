#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T>
class BaseDataContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseDataContext"));
	}


	template <typename R = UIWindowType*> R get_WindowType() {
		return ((R (*)(BaseDataContext*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = UIWindowsLayerType*> R get_LayerType() {
		return ((R (*)(BaseDataContext*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = GameEntity*> R get_Avatar() {
		return ((R (*)(BaseDataContext*))(Il2CppBase() + 0x0))(this);
	}

};

