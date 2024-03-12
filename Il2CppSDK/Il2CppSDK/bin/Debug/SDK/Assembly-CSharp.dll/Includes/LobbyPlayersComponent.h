#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyPlayersComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyPlayersComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& List() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(LobbyPlayersComponent*, uintptr_t))(Il2CppBase() + 0x144251C))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(LobbyPlayersComponent*, uintptr_t))(Il2CppBase() + 0x14425B4))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(LobbyPlayersComponent*, uintptr_t))(Il2CppBase() + 0x1442718))(this, writer);
	}

};

}
