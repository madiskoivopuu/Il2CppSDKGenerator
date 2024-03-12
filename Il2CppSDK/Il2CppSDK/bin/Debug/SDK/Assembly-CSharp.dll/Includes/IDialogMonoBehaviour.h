#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDialogMonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDialogMonoBehaviour"));
	}


	template <typename T = uintptr_t> T get_ButtonYes() {
		return ((T (*)(IDialogMonoBehaviour*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_ButtonNo() {
		return ((T (*)(IDialogMonoBehaviour*))(Il2CppBase() + 0x0))(this);
	}

};

}
