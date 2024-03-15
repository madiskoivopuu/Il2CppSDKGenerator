#pragma once
#include <Il2Cpp/Il2Cpp.h>

class World
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "World"));
	}

	template <typename R = Il2CppString*> R& Location() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& Icon() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(World*, uintptr_t))(Il2CppBase() + 0x22A852C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(World*, uintptr_t))(Il2CppBase() + 0x22A857C))(this, reader);
	}

};

