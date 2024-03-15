#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FCMTokenData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FCMTokenData"));
	}

	template <typename R = Il2CppString*> R& Token() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uint8_t> R& Platform() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(FCMTokenData*, uintptr_t))(Il2CppBase() + 0x1691E34))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(FCMTokenData*, uintptr_t))(Il2CppBase() + 0x1691E88))(this, reader);
	}

};

