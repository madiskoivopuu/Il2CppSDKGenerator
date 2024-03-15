#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Attempt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Attempt"));
	}

	template <typename R = int64_t> R& EndTick() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = Attempt> static R get_Default() {
		return ((R (*)(void *))(Il2CppBase() + 0x115ED30))(0);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(Attempt*, uintptr_t))(Il2CppBase() + 0x115ED3C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(Attempt*, uintptr_t))(Il2CppBase() + 0x115EDD8))(this, writer);
	}

};

