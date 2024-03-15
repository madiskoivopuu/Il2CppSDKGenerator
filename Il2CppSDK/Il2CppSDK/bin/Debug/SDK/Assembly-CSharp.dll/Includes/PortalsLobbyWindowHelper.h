#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PortalsLobbyWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalsLobbyWindowHelper"));
	}


	template <typename R = UIWindow*> static R ShowPortalsLobbyWindow(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x16D3AE8))(0, manager);
	}
	template <typename R = void> static R ClosePortalsLobbyWindow(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x16D3C50))(0, manager);
	}
	template <typename R = void> static R OnFindPlayersForPortalsLobby(UIWindowsManager* manager, Il2CppArray<int64_t>* playerIds) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppArray<int64_t>*))(Il2CppBase() + 0x16D3D40))(0, manager, playerIds);
	}

};

