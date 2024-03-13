#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanCreateInviteWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanCreateInviteWindowHelper"));
	}


	template <typename T = ClanCreateInviteWindow*> static T ShowClanCreateInviteWindow(UIWindowsManager* manager, int64_t playerId, uint8_t cellIndex, uintptr_t onInviteSent) {
		return ((T (*)(void *, UIWindowsManager*, int64_t, uint8_t, uintptr_t))(Il2CppBase() + 0x1580824))(0, manager, playerId, cellIndex, onInviteSent);
	}

};

