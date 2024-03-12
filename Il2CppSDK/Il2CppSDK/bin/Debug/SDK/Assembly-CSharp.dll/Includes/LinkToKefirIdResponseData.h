#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LinkToKefirIdResponseData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LinkToKefirIdResponseData"));
	}

	template <typename T = int64_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& KefirId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& IsBonusSent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& LinkedPlayers() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(LinkToKefirIdResponseData*, uintptr_t))(Il2CppBase() + 0x142ED00))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(LinkToKefirIdResponseData*, uintptr_t))(Il2CppBase() + 0x142EF24))(this, reader);
	}

};

}
