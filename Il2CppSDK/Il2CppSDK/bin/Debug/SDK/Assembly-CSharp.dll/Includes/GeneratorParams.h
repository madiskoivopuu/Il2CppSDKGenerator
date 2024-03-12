#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GeneratorParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GeneratorParams"));
	}

	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& LooseStreak() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& Default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(GeneratorParams*, uintptr_t))(Il2CppBase() + 0x176F790))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(GeneratorParams*, uintptr_t))(Il2CppBase() + 0x176F82C))(this, writer);
	}

};

}
