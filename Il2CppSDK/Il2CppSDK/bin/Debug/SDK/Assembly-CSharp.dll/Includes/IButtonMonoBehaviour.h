#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IButtonMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IButtonMonoBehaviour"));
	}


	template <typename R = uintptr_t> R get_Button() {
		return ((R (*)(IButtonMonoBehaviour*))(Il2CppBase() + 0x0))(this);
	}

};

