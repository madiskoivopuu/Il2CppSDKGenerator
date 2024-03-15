#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanInitialWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanInitialWindowHelper"));
	}


	template <typename R = UIWindow*> static R ShowClanInitial(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x158833C))(0, manager);
	}
	template <typename R = void> static R NotifyServerAndCloseClanInitial(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x15883F8))(0, manager);
	}

};

