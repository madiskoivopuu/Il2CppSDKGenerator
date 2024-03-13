#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInputAxis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInputAxis"));
	}


	template <typename T = uintptr_t> T get_Target() {
		return ((T (*)(IInputAxis*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T get_GetAxis() {
		return ((T (*)(IInputAxis*))(Il2CppBase() + 0x0))(this);
	}

};

