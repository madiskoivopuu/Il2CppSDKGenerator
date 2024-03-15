#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Player
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Player"));
	}

	template <typename R = int64_t> R& Id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Reason() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(Player*, uintptr_t))(Il2CppBase() + 0xE9E9F0))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(Player*, uintptr_t))(Il2CppBase() + 0xE9EA34))(this, reader);
	}

};

