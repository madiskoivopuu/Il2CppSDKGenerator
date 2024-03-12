#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CommandProcessException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CommandProcessException"));
	}

	template <typename T = uintptr_t> T& CommandId() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ErrorId() {
		return *(T*)((uintptr_t)this + 0x8A);
	}

	template <typename T = uintptr_t> T get_CommandId() {
		return ((T (*)(CommandProcessException*))(Il2CppBase() + 0xE29050))(this);
	}
	template <typename T = void> T set_CommandId(uintptr_t value) {
		return ((T (*)(CommandProcessException*, uintptr_t))(Il2CppBase() + 0xE29058))(this, value);
	}
	template <typename T = uintptr_t> T get_ErrorId() {
		return ((T (*)(CommandProcessException*))(Il2CppBase() + 0xE29060))(this);
	}
	template <typename T = void> T set_ErrorId(uintptr_t value) {
		return ((T (*)(CommandProcessException*, uintptr_t))(Il2CppBase() + 0xE29068))(this, value);
	}
	template <typename T = Il2CppString*> T ToLogString() {
		return ((T (*)(CommandProcessException*))(Il2CppBase() + 0xE29184))(this);
	}

};

}
