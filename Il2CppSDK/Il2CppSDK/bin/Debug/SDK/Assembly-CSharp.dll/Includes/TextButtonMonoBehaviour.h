#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TextMonoBehaviour" 

class TextButtonMonoBehaviour: TextMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextButtonMonoBehaviour"));
	}

	template <typename T = uintptr_t> T& Button() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T IButtonMonoBehaviour_get_Button() {
		return ((T (*)(TextButtonMonoBehaviour*))(Il2CppBase() + 0x16B6A68))(this);
	}

};

}
