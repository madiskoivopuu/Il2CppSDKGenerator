#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanCreateInviteWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanCreateInviteWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowClanCreateInviteWindow(uintptr_t manager, int64_t playerId, unsigned char cellIndex, uintptr_t onInviteSent) {
		return ((T (*)(void *, uintptr_t, int64_t, unsigned char, uintptr_t))(Il2CppBase() + 0x1580824))(0, manager, playerId, cellIndex, onInviteSent);
	}

};

}
