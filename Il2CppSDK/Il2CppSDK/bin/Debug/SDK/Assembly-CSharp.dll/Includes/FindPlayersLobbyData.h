#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FindPlayersLobbyData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FindPlayersLobbyData"));
	}

	template <typename R = LobbyType> R& Type() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<Player>*> R& Players() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(FindPlayersLobbyData*, uintptr_t))(Il2CppBase() + 0x1698768))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(FindPlayersLobbyData*, uintptr_t))(Il2CppBase() + 0x169882C))(this, reader);
	}

};

