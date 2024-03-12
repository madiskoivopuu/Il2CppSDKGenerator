#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TextMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextMonoBehaviour"));
	}

	template <typename T = uintptr_t> T& Text() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T ITextMonoBehaviour_get_Text() {
		return ((T (*)(TextMonoBehaviour*))(Il2CppBase() + 0x14EDF6C))(this);
	}

};

}
