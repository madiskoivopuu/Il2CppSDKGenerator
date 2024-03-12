#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateGuildDialogHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateGuildDialogHelper"));
	}


	template <typename T = uintptr_t> static T ShowCreateGuild(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1BCA14C))(0, manager);
	}
	template <typename T = void> static T OnReceiveCreateGuildResponse(uintptr_t manager, uintptr_t errorCode) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1BCA208))(0, manager, errorCode);
	}

};

}
