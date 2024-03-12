#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PortalsHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalsHelper"));
	}


	template <typename T = bool> static T IsLobbyOpen(uintptr_t entity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x157722C))(0, entity, world);
	}
	template <typename T = void*> static T GetPlayerIsAbleToEnterLobby(uintptr_t lobbyData, uintptr_t world, int64_t playerId, uintptr_t owner) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t, uintptr_t))(Il2CppBase() + 0x157729C))(0, lobbyData, world, playerId, owner);
	}
	template <typename T = void*> static T GetPlayerEnterCount(uintptr_t lobbyData, uintptr_t world, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x15776F4))(0, lobbyData, world, playerId);
	}

};

}
