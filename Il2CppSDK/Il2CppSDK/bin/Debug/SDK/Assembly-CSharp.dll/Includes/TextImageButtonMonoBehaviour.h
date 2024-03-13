#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TextImageMonoBehaviour.h" 

class TextImageButtonMonoBehaviour : public TextImageMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextImageButtonMonoBehaviour"));
	}

	template <typename T = uintptr_t> T& Button() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T IButtonMonoBehaviour_get_Button() {
		return ((T (*)(TextImageButtonMonoBehaviour*))(Il2CppBase() + 0x14EDF44))(this);
	}

};

