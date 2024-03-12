#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InvasionLobbyWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InvasionLobbyWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowInvasionLobbyWindow(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x146C86C))(0, manager);
	}

};

}
