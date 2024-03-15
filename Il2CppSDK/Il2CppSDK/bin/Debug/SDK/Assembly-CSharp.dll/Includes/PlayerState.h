#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerState"));
	}

	template <typename R = int64_t> R& PlayerId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = LobbyPlayerState*> R& State() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(PlayerState*, uintptr_t))(Il2CppBase() + 0x115CB00))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(PlayerState*, uintptr_t))(Il2CppBase() + 0x115CB44))(this, reader);
	}

};

