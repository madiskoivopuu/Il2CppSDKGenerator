#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GeneratorParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GeneratorParams"));
	}

	template <typename R = int32_t> R& Level() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& LooseStreak() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = GeneratorParams*> static R& Default() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(GeneratorParams*, uintptr_t))(Il2CppBase() + 0x176F790))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(GeneratorParams*, uintptr_t))(Il2CppBase() + 0x176F82C))(this, writer);
	}

};

