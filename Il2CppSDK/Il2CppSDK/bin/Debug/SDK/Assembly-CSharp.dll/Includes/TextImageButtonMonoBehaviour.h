#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TextImageMonoBehaviour.h" 

class TextImageButtonMonoBehaviour : public TextImageMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextImageButtonMonoBehaviour"));
	}

	template <typename R = uintptr_t> R& Button() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = uintptr_t> R IButtonMonoBehaviour_get_Button() {
		return ((R (*)(TextImageButtonMonoBehaviour*))(Il2CppBase() + 0x14EDF44))(this);
	}

};

