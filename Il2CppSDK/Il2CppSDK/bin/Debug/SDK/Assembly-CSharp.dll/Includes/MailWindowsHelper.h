#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MailWindowsHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MailWindowsHelper"));
	}


	template <typename T = bool> static T ShowMailWindow(uintptr_t manager, uintptr_t mailEntity, uintptr_t source) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x125FBF4))(0, manager, mailEntity, source);
	}

};

}
