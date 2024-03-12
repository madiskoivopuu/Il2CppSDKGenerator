#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Attempt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Attempt"));
	}

	template <typename T = int64_t> T& EndTick() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> static T get_Default() {
		return ((T (*)(void *))(Il2CppBase() + 0x115ED30))(0);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(Attempt*, uintptr_t))(Il2CppBase() + 0x115ED3C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(Attempt*, uintptr_t))(Il2CppBase() + 0x115EDD8))(this, writer);
	}

};

}
