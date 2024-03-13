#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanInitialWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanInitialWindowHelper"));
	}


	template <typename T = UIWindow*> static T ShowClanInitial(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x158833C))(0, manager);
	}
	template <typename T = void> static T NotifyServerAndCloseClanInitial(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x15883F8))(0, manager);
	}

};

