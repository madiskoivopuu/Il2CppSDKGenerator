#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICameraHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICameraHelper"));
	}


	template <typename R = uintptr_t> R get_Animator() {
		return ((R (*)(ICameraHelper*))(Il2CppBase() + 0x0))(this);
	}

};

