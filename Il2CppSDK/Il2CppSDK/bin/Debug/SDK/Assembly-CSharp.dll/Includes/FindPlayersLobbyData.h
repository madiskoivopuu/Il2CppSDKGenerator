#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FindPlayersLobbyData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FindPlayersLobbyData"));
	}

	template <typename T = LobbyType*> T& Type() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Players() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(FindPlayersLobbyData*, uintptr_t))(Il2CppBase() + 0x1698768))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(FindPlayersLobbyData*, uintptr_t))(Il2CppBase() + 0x169882C))(this, reader);
	}

};

