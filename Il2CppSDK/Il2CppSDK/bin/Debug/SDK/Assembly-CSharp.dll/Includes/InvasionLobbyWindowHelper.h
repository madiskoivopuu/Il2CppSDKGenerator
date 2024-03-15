#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InvasionLobbyWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InvasionLobbyWindowHelper"));
	}


	template <typename R = UIWindow*> static R ShowInvasionLobbyWindow(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x146C86C))(0, manager);
	}

};

