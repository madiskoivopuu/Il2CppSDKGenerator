#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PortalsHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalsHelper"));
	}


	template <typename T = bool> static T IsLobbyOpen(LobbyEntity* entity, ICommonContexts* world) {
		return ((T (*)(void *, LobbyEntity*, ICommonContexts*))(Il2CppBase() + 0x157722C))(0, entity, world);
	}
	template <typename T = ValueTuple2bool, Il2CppString*>*> static T GetPlayerIsAbleToEnterLobby(LobbyEntity* lobbyData, ICommonContexts* world, int64_t playerId, AccountEntity* owner) {
		return ((T (*)(void *, LobbyEntity*, ICommonContexts*, int64_t, AccountEntity*))(Il2CppBase() + 0x157729C))(0, lobbyData, world, playerId, owner);
	}
	template <typename T = ValueTuple3bool, int32_t, int32_t>*> static T GetPlayerEnterCount(LobbyEntity* lobbyData, ICommonContexts* world, int64_t playerId) {
		return ((T (*)(void *, LobbyEntity*, ICommonContexts*, int64_t))(Il2CppBase() + 0x15776F4))(0, lobbyData, world, playerId);
	}

};

