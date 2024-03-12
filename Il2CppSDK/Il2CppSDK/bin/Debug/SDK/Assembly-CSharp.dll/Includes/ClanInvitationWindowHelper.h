#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanInvitationWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanInvitationWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowClanInvitation(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x158C2D4))(0, manager);
	}

};

}
