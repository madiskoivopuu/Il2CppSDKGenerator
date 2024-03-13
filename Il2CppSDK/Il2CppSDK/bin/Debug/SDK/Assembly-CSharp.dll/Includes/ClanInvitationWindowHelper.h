#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanInvitationWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanInvitationWindowHelper"));
	}


	template <typename T = ClanInvitationWindow*> static T ShowClanInvitation(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x158C2D4))(0, manager);
	}

};

