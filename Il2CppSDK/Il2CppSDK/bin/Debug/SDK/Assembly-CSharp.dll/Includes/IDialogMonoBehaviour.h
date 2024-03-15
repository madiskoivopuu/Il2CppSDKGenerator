#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDialogMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDialogMonoBehaviour"));
	}


	template <typename R = uintptr_t> R get_ButtonYes() {
		return ((R (*)(IDialogMonoBehaviour*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = uintptr_t> R get_ButtonNo() {
		return ((R (*)(IDialogMonoBehaviour*))(Il2CppBase() + 0x0))(this);
	}

};

