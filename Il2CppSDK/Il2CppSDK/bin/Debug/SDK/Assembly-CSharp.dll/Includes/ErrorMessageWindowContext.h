#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseMessageWindowContext.h" 

class ErrorMessageWindowContext : public BaseMessageWindowContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ErrorMessageWindowContext"));
	}


	template <typename R = UIWindowType> R get_WindowType() {
		return ((R (*)(ErrorMessageWindowContext*))(Il2CppBase() + 0xE9CD10))(this);
	}
	template <typename R = UIWindowsLayerType> R get_LayerType() {
		return ((R (*)(ErrorMessageWindowContext*))(Il2CppBase() + 0xE9CD18))(this);
	}

};

