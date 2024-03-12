#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoginWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoginWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowLogin(uintptr_t manager, uintptr_t state, uintptr_t sharedContexts, Il2CppString* emulatedLoginId, bool toLocalHost, uintptr_t analytics) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x1731B5C))(0, manager, state, sharedContexts, emulatedLoginId, toLocalHost, analytics);
	}
	template <typename T = void> static T CloseLogin(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1731C58))(0, manager);
	}

};

}
