#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILobbyContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILobbyContexts"));
	}


	template <typename T = LobbyContext*> T get_lobby() {
		return ((T (*)(ILobbyContexts*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = LobbyDataContext*> T get_lobbyData() {
		return ((T (*)(ILobbyContexts*))(Il2CppBase() + 0x0))(this);
	}

};

