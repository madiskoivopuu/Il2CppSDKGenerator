#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILobbyTypeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILobbyTypeEntity"));
	}


	template <typename R = LobbyTypeComponent*> R get_lobbyType() {
		return ((R (*)(ILobbyTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasLobbyType() {
		return ((R (*)(ILobbyTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddLobbyType(LobbyType* newType) {
		return ((R (*)(ILobbyTypeEntity*, LobbyType*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename R = void> R ReplaceLobbyType(LobbyType* newType) {
		return ((R (*)(ILobbyTypeEntity*, LobbyType*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename R = void> R RemoveLobbyType() {
		return ((R (*)(ILobbyTypeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

