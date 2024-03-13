#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IButtonMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IButtonMonoBehaviour"));
	}


	template <typename T = uintptr_t> T get_Button() {
		return ((T (*)(IButtonMonoBehaviour*))(Il2CppBase() + 0x0))(this);
	}

};

