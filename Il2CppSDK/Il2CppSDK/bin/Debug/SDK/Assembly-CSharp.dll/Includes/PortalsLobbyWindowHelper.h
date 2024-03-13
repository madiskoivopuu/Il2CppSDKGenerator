#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PortalsLobbyWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalsLobbyWindowHelper"));
	}


	template <typename T = UIWindow*> static T ShowPortalsLobbyWindow(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x16D3AE8))(0, manager);
	}
	template <typename T = void> static T ClosePortalsLobbyWindow(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x16D3C50))(0, manager);
	}
	template <typename T = void> static T OnFindPlayersForPortalsLobby(UIWindowsManager* manager, Il2CppArray<uintptr_t>* playerIds) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16D3D40))(0, manager, playerIds);
	}

};

