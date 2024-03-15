#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TextMonoBehaviour.h" 

class TextAnimatorMonoBehaviour : public TextMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextAnimatorMonoBehaviour"));
	}

	template <typename R = uintptr_t> R& Animator() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = uintptr_t> R IAnimatorMonoBehaviour_get_Animator() {
		return ((R (*)(TextAnimatorMonoBehaviour*))(Il2CppBase() + 0x16B6784))(this);
	}

};

