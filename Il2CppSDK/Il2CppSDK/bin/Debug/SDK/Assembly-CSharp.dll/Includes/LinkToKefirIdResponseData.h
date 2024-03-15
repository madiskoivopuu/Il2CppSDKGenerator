#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LinkToKefirIdResponseData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LinkToKefirIdResponseData"));
	}

	template <typename R = int64_t> R& PlayerId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& KefirId() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = bool> R& IsBonusSent() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Il2CppList<LinkingPlayerData>*& LinkedPlayers() {
		return *(Il2CppList<LinkingPlayerData>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(LinkToKefirIdResponseData*, uintptr_t))(Il2CppBase() + 0x142ED00))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(LinkToKefirIdResponseData*, uintptr_t))(Il2CppBase() + 0x142EF24))(this, reader);
	}

};

