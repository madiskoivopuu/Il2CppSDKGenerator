#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseMessageWindowContext" 

class ErrorMessageWindowContext: BaseMessageWindowContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ErrorMessageWindowContext"));
	}


	template <typename T = uintptr_t> T get_WindowType() {
		return ((T (*)(ErrorMessageWindowContext*))(Il2CppBase() + 0xE9CD10))(this);
	}
	template <typename T = uintptr_t> T get_LayerType() {
		return ((T (*)(ErrorMessageWindowContext*))(Il2CppBase() + 0xE9CD18))(this);
	}

};

}
