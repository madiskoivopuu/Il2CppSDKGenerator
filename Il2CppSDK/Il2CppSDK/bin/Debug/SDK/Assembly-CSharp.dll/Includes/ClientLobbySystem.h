#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientLobbySystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientLobbySystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1LobbyEntity*>*& _targets() {
		return *(IGroup1LobbyEntity*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(ClientLobbySystem*))(Il2CppBase() + 0xE18B64))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(ClientLobbySystem*))(Il2CppBase() + 0xE18DC4))(this);
	}

};

