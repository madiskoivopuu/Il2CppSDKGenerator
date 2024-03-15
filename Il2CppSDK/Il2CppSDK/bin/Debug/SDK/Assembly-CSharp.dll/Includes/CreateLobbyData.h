#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateLobbyData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateLobbyData"));
	}

	template <typename R = LobbyType> R& Type() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& PlayersCount() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CreateLobbyData*, uintptr_t))(Il2CppBase() + 0x1BCBABC))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(CreateLobbyData*, uintptr_t))(Il2CppBase() + 0x1BCBB10))(this, reader);
	}

};

