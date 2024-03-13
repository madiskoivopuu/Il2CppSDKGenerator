#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICameraHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICameraHelper"));
	}


	template <typename T = uintptr_t> T get_Animator() {
		return ((T (*)(ICameraHelper*))(Il2CppBase() + 0x0))(this);
	}

};

