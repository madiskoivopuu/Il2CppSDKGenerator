#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientLobbySystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientLobbySystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _targets() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(ClientLobbySystem*))(Il2CppBase() + 0xE18B64))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(ClientLobbySystem*))(Il2CppBase() + 0xE18DC4))(this);
	}

};

}
