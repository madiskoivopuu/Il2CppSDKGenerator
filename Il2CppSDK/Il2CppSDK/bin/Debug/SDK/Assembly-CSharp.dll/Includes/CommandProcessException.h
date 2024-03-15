#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CommandProcessException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CommandProcessException"));
	}

	template <typename R = Commands*> R& CommandId() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = Errors*> R& ErrorId() {
		return *(R*)((uintptr_t)this + 0x8A);
	}

	template <typename R = Commands*> R get_CommandId() {
		return ((R (*)(CommandProcessException*))(Il2CppBase() + 0xE29050))(this);
	}
	template <typename R = void> R set_CommandId(Commands* value) {
		return ((R (*)(CommandProcessException*, Commands*))(Il2CppBase() + 0xE29058))(this, value);
	}
	template <typename R = Errors*> R get_ErrorId() {
		return ((R (*)(CommandProcessException*))(Il2CppBase() + 0xE29060))(this);
	}
	template <typename R = void> R set_ErrorId(Errors* value) {
		return ((R (*)(CommandProcessException*, Errors*))(Il2CppBase() + 0xE29068))(this, value);
	}
	template <typename R = Il2CppString*> R ToLogString() {
		return ((R (*)(CommandProcessException*))(Il2CppBase() + 0xE29184))(this);
	}

};

