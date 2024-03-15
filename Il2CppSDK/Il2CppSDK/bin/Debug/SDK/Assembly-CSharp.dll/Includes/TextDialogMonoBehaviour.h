#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TextMonoBehaviour.h" 

class TextDialogMonoBehaviour : public TextMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextDialogMonoBehaviour"));
	}

	template <typename R = uintptr_t> R& ButtonYes() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& ButtonNo() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = uintptr_t> R IDialogMonoBehaviour_get_ButtonYes() {
		return ((R (*)(TextDialogMonoBehaviour*))(Il2CppBase() + 0x16B6A7C))(this);
	}
	template <typename R = uintptr_t> R IDialogMonoBehaviour_get_ButtonNo() {
		return ((R (*)(TextDialogMonoBehaviour*))(Il2CppBase() + 0x16B6A84))(this);
	}

};

