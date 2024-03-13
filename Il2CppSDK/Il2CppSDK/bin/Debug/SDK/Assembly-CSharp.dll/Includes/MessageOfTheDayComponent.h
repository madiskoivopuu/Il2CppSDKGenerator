#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MessageOfTheDayComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MessageOfTheDayComponent"));
	}

	template <typename T = uint8_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(MessageOfTheDayComponent*, Il2CppObject*))(Il2CppBase() + 0x12CEA74))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(MessageOfTheDayComponent*, uintptr_t))(Il2CppBase() + 0x12CEB14))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(MessageOfTheDayComponent*, uintptr_t))(Il2CppBase() + 0x12CEBB0))(this, writer);
	}

};

