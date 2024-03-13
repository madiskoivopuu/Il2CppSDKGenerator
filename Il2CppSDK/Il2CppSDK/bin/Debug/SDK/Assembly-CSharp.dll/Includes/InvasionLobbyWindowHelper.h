#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InvasionLobbyWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InvasionLobbyWindowHelper"));
	}


	template <typename T = UIWindow*> static T ShowInvasionLobbyWindow(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x146C86C))(0, manager);
	}

};

