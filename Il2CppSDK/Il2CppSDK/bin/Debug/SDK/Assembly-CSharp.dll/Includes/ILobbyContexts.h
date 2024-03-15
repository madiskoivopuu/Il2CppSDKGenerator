#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILobbyContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILobbyContexts"));
	}


	template <typename R = LobbyContext*> R get_lobby() {
		return ((R (*)(ILobbyContexts*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = LobbyDataContext*> R get_lobbyData() {
		return ((R (*)(ILobbyContexts*))(Il2CppBase() + 0x0))(this);
	}

};

