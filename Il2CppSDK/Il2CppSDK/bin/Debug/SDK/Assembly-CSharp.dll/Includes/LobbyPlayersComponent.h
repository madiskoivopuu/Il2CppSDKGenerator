#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyPlayersComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyPlayersComponent"));
	}

	template <typename R = Il2CppArray<PlayerState*>*> R& List() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(LobbyPlayersComponent*, Il2CppObject*))(Il2CppBase() + 0x144251C))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(LobbyPlayersComponent*, uintptr_t))(Il2CppBase() + 0x14425B4))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(LobbyPlayersComponent*, uintptr_t))(Il2CppBase() + 0x1442718))(this, writer);
	}

};

