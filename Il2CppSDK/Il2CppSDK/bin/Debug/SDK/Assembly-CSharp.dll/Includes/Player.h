#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Player
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Player"));
	}

	template <typename T = int64_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Reason() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(Player*, uintptr_t))(Il2CppBase() + 0xE9E9F0))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(Player*, uintptr_t))(Il2CppBase() + 0xE9EA34))(this, reader);
	}

};

}
