#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PortalsHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalsHelper"));
	}


	template <typename R = bool> static R IsLobbyOpen(LobbyEntity* entity, ICommonContexts* world) {
		return ((R (*)(void *, LobbyEntity*, ICommonContexts*))(Il2CppBase() + 0x157722C))(0, entity, world);
	}
	 static ValueTuple2<bool, Il2CppString*>* GetPlayerIsAbleToEnterLobby(LobbyEntity* lobbyData, ICommonContexts* world, int64_t playerId, AccountEntity* owner) {
		return ((ValueTuple2<bool, Il2CppString*>* (*)(void *, LobbyEntity*, ICommonContexts*, int64_t, AccountEntity*))(Il2CppBase() + 0x157729C))(0, lobbyData, world, playerId, owner);
	}
	 static ValueTuple3<bool, int32_t, int32_t>* GetPlayerEnterCount(LobbyEntity* lobbyData, ICommonContexts* world, int64_t playerId) {
		return ((ValueTuple3<bool, int32_t, int32_t>* (*)(void *, LobbyEntity*, ICommonContexts*, int64_t))(Il2CppBase() + 0x15776F4))(0, lobbyData, world, playerId);
	}

};

