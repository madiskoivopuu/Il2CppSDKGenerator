#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TextMonoBehaviour.h" 

class TextButtonMonoBehaviour : public TextMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextButtonMonoBehaviour"));
	}

	template <typename R = uintptr_t> R& Button() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = uintptr_t> R IButtonMonoBehaviour_get_Button() {
		return ((R (*)(TextButtonMonoBehaviour*))(Il2CppBase() + 0x16B6A68))(this);
	}

};

