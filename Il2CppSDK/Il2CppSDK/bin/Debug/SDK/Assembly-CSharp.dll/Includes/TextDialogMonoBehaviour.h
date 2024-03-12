#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TextMonoBehaviour" 

class TextDialogMonoBehaviour: TextMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextDialogMonoBehaviour"));
	}

	template <typename T = uintptr_t> T& ButtonYes() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ButtonNo() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T IDialogMonoBehaviour_get_ButtonYes() {
		return ((T (*)(TextDialogMonoBehaviour*))(Il2CppBase() + 0x16B6A7C))(this);
	}
	template <typename T = uintptr_t> T IDialogMonoBehaviour_get_ButtonNo() {
		return ((T (*)(TextDialogMonoBehaviour*))(Il2CppBase() + 0x16B6A84))(this);
	}

};

}
