#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILobbyTypeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILobbyTypeEntity"));
	}


	template <typename T = LobbyTypeComponent*> T get_lobbyType() {
		return ((T (*)(ILobbyTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasLobbyType() {
		return ((T (*)(ILobbyTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddLobbyType(LobbyType* newType) {
		return ((T (*)(ILobbyTypeEntity*, LobbyType*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T ReplaceLobbyType(LobbyType* newType) {
		return ((T (*)(ILobbyTypeEntity*, LobbyType*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T RemoveLobbyType() {
		return ((T (*)(ILobbyTypeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

