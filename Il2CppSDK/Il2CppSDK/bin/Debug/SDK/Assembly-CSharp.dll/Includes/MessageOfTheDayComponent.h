#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MessageOfTheDayComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MessageOfTheDayComponent"));
	}

	template <typename R = uint8_t> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Text() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(MessageOfTheDayComponent*, Il2CppObject*))(Il2CppBase() + 0x12CEA74))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(MessageOfTheDayComponent*, uintptr_t))(Il2CppBase() + 0x12CEB14))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(MessageOfTheDayComponent*, uintptr_t))(Il2CppBase() + 0x12CEBB0))(this, writer);
	}

};

