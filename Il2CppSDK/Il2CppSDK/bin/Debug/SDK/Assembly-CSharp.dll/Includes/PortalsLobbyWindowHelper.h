#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PortalsLobbyWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalsLobbyWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowPortalsLobbyWindow(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16D3AE8))(0, manager);
	}
	template <typename T = void> static T ClosePortalsLobbyWindow(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16D3C50))(0, manager);
	}
	template <typename T = void> static T OnFindPlayersForPortalsLobby(uintptr_t manager, Il2CppArray<uintptr_t>* playerIds) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16D3D40))(0, manager, playerIds);
	}

};

}
