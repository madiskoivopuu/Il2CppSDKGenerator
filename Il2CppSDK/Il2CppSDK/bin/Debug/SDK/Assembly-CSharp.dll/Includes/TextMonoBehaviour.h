#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TextMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextMonoBehaviour"));
	}

	template <typename R = uintptr_t> R& Text() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = uintptr_t> R ITextMonoBehaviour_get_Text() {
		return ((R (*)(TextMonoBehaviour*))(Il2CppBase() + 0x14EDF6C))(this);
	}

};

