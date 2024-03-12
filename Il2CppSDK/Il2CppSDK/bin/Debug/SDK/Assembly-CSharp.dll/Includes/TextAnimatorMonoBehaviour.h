#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TextMonoBehaviour" 

class TextAnimatorMonoBehaviour: TextMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextAnimatorMonoBehaviour"));
	}

	template <typename T = uintptr_t> T& Animator() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T IAnimatorMonoBehaviour_get_Animator() {
		return ((T (*)(TextAnimatorMonoBehaviour*))(Il2CppBase() + 0x16B6784))(this);
	}

};

}
