#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInputAxis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInputAxis"));
	}


	template <typename R = uintptr_t> R get_Target() {
		return ((R (*)(IInputAxis*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = float> R get_GetAxis() {
		return ((R (*)(IInputAxis*))(Il2CppBase() + 0x0))(this);
	}

};

